using System;
using System.Globalization;

using UnityEditor;
using UnityEngine;

#if UNITY_EDITOR

#endif

namespace Helpers
{
    [Serializable]
    public enum MoneyPrefix
    {
        Empty = 0,
        K = 1,
        M = 2,
        B = 3,
        T = 4,
        Q = 5,
        aa = 6,
        bb = 7,
        cc = 8,
        dd = 9,
        ee = 10,
        ff = 11,
        gg = 12,
        hh = 13,
        ii = 14,
        jj = 15,
        kk = 16,
        ll = 17,
        mm = 18,
        nn = 19,
        oo = 20,
        pp = 21,
        qq = 22,
        rr = 23,
        ss = 24,
        tt = 25,
        uu = 26,
        vv = 27,
        ww = 28,
        xx = 29,
        yy = 30,
        zz = 31,
        aaa = 32,
        bbb = 33,
        ccc = 34,
        ddd = 35,
        eee = 36,
        fff = 37,
        ggg = 38,
        hhh = 39,
        iii = 40,
        jjj = 41,
        kkk = 42,
        lll = 43,
        mmm = 44,
        nnn = 45,
        ooo = 46,
        ppp = 47,
        qqq = 48,
        rrr = 49,
        sss = 50,
        ttt = 51,
        uuu = 52,
        vvv = 53,
        www = 54,
        xxx = 55,
        yyy = 56,
        zzz = 57,
        aaaa = 58,
        bbbb = 59,
        cccc = 60,
        dddd = 61,
        eeee = 62,
        ffff = 63,
        gggg = 64,
        hhhh = 65,
        iiii = 66,
        jjjj = 67,
        kkkk = 68,
        llll = 69,
        mmmm = 70,
        nnnn = 71,
        oooo = 72,
        pppp = 73,
        qqqq = 74,
        rrrr = 75,
        ssss = 76,
        tttt = 77,
        uuuu = 78,
        vvvv = 79,
        wwww = 80,
        xxxx = 81,
        yyyy = 82,
        zzzz = 83,
        MAX = 84
    } //enum end

    /// <summary>
    /// Custom DataType for handling large value currencies only.
    /// </summary>
    [Serializable]
    public sealed class Money
    {
        #region Fields

        [SerializeField] private double value = 0;
        [SerializeField] private MoneyPrefix moneyPrefix;

        #endregion

        #region Constructors

        /// <summary>
        /// Default Constructor
        /// </summary>
        public Money()
        {
            value = 0d;
            moneyPrefix = MoneyPrefix.Empty;
            UpdatePrefix(this);
        } //Constructor() end

        public Money(double amount, MoneyPrefix moneyPrefix)
        {
            value = amount;
            this.moneyPrefix = moneyPrefix;
            UpdatePrefix(this);
        }

        /// <summary>
        /// Copy Constructor
        /// </summary>
        public Money(Money money)
        {
            value = money.value;
            moneyPrefix = money.moneyPrefix;
        } //Constructor() end

        /// <summary>
        /// Parametrized Constructor taking a double value as argument.
        /// This Constructor should be called very carefully as the value you are passing
        /// should be a total value rather than a converted value with a updated prefix
        /// </summary>
        public Money(double value)
        {
            this.value = value;
            moneyPrefix = MoneyPrefix.Empty;
            UpdatePrefix(this);
        } //Constructor() end

        #endregion

        #region Operator Overloads

        /// <summary>
        /// Operator > overload
        /// </summary>
        public static bool operator >(Money a, Money b)
        {
            if (a.moneyPrefix == b.moneyPrefix)
                return a.value > b.value;
            else if (a.moneyPrefix > b.moneyPrefix) return true;

            return false;
        } // operator > overload

        /// <summary>
        /// Operator < overload
        /// </summary>
        public static bool operator <(Money a, Money b)
        {
            if (a.moneyPrefix == b.moneyPrefix) return a.value < b.value;
            return a.moneyPrefix < b.moneyPrefix;
        } // operator < overload

        /// <summary>
        /// Operator <= overload
        /// </summary>
        public static bool operator >=(Money a, Money b)
        {
            if (a.moneyPrefix == b.moneyPrefix)
                return a.value >= b.value;
            else if (a.moneyPrefix > b.moneyPrefix) return true;

            return false;
        } // operator >= overload

        /// <summary>
        /// Operator <= overload
        /// </summary>
        public static bool operator <=(Money a, Money b)
        {
            if (a.moneyPrefix == b.moneyPrefix) return a.value <= b.value;
            return a.moneyPrefix < b.moneyPrefix;
        } // operator >= overload

        /// <summary>
        /// Adds values and returns Money
        /// </summary>
        public static Money operator +(Money a, Money b)
        {
            if (a.moneyPrefix == MoneyPrefix.MAX || b.moneyPrefix == MoneyPrefix.MAX)
            {
                Debug.Log("MAX Limit Reached!");
                return a;
            } //if end

            var money = a;
            try
            {
                money = new Money(a.Purge() + b.Purge());
            } //try end
            catch (System.Exception e)
            {
                Debug.Log(e.Message);
            } //catch end

            UpdatePrefix(money);
            return money;
        } //operator +

        /// <summary>
        /// Subtracts values and returns Money
        /// </summary>
        public static Money operator -(Money a, Money b)
        {
            Money money = a;

            try
            {
                money = new Money(a.Purge() - b.Purge());

                if (money.value < 0d) money.value = 0d;
            } //try
            catch (System.Exception e)
            {
                Debug.Log(e.Message);
            } //catch

            UpdatePrefix(money);
            return money;
        } //operator -

        public static bool CanMinus(Money m1, Money m2)
        {
            try
            {
                if (m1.value < 0)
                {
                    return false;
                }

                if (m1.moneyPrefix < m2.moneyPrefix)
                {
                    return false;
                }

                if (m1.moneyPrefix == m2.moneyPrefix && m1.value < m2.value)
                {
                    return false;
                }
            }
            catch (System.Exception e)
            {
               // Crashlytics.Log("Exception occur at CanMinus line 354 " + e.Message);
#if UNITY_EDITOR
                Debug.LogError("Exception occur at CanMinus line 356 " + e.Message);
#endif
            }

            return true;
        }

        /// <summary>
        /// Multiplies values and returns Money
        /// </summary>
        public static Money operator *(Money a, Money b)
        {
            var money = a;

            try
            {
                money = new Money(a.Purge() * b.Purge());
            } //try
            catch (System.Exception e)
            {
                Debug.Log(e.Message);
            } //catch

            UpdatePrefix(money);
            return money;
        } //operator *

        public static Money operator *(Money a, double b)
        {
            var money = a;

            try
            {
                money = new Money(a.Purge() * b);
            } //try
            catch (System.Exception e)
            {
                Debug.Log(e.Message);
            } //catch

            UpdatePrefix(money);
            return money;
        }

        public static Money Multiply(Money a, double b)
        {
            var money = a;

            try
            {
                money = new Money(a.Purge() * b);
            } //try
            catch (System.Exception e)
            {
                Debug.Log(e.Message);
            } //catch

            UpdatePrefix(money);
            return money;
        } //operator *

        /// <summary>
        /// Divides values and returns Money
        /// </summary>
        public static Money operator /(Money a, Money b)
        {
            Money money = a;

            try
            {
                money = new Money(a.Purge() / b.Purge());
            } //try
            catch (System.Exception e)
            {
                Debug.Log(e.Message);
            } //catch

            UpdatePrefix(money);
            return money;
        } //operator /

        public static Money Division(Money a, double b)
        {
            var money = a;

            try
            {
                money = new Money(a.Purge() / b);
            } //try
            catch (System.Exception e)
            {
                Debug.Log(e.Message);
            } //catch

            UpdatePrefix(money);
            return money;
        }

        #endregion

        #region Utility Methods

        /// <summary>
        /// Resets value and prefix.
        /// </summary>
        public void Reset()
        {
            value = 0;
            moneyPrefix = MoneyPrefix.Empty;
        } //Reset() end

        /// <summary>
        /// Returns the current value in type double of this object.
        /// </summary>
        private double Purge()
        {
            Money money = new Money(this);

            try
            {
                while (money.moneyPrefix != MoneyPrefix.Empty)
                {
                    money.value = Math.Round((money.value * 1000f), 2);
                    money.moneyPrefix--;
                } //loop end
            } //try
            catch (System.Exception e)
            {
                Debug.Log(e.Message);
            } //catch

            return money.value;
        } //Purge() end

        /// <summary>
        /// Returns the current value in type double of the given object of money.
        /// </summary>
        private static double Purge(Money m)
        {
            Money money = new Money(m);

            try
            {
                while (money.moneyPrefix != MoneyPrefix.Empty)
                {
                    money.value *= 1000.0f;
                    money.moneyPrefix--;
                } //loop end
            } //try
            catch (System.Exception e)
            {
                Debug.Log("Exception occur at purge m 227 line  " + e.Message);
            } //catch

            return money.value;
        } //Purge() end

        /// <summary>
        /// Updates the prefix according to the current value.
        /// </summary>
        private static void UpdatePrefix(Money money)
        {
            try
            {
                if (money.moneyPrefix.Equals(MoneyPrefix.MAX))
                {
                    Debug.Log("Max Limit Reached!");
                    return;
                } //if end

                while (money.value >= 1000.0f)
                {
                    money.value = Math.Round((money.value / 1000f), 2);
                    money.moneyPrefix++;

                    if (money.moneyPrefix.Equals(MoneyPrefix.MAX))
                    {
                        Debug.Log("Max Limit Reached!");
                        break;
                    } //if end
                } //loop end

                while (money.value < 1.0f && money.value > 0 && !(money.moneyPrefix >= 0))
                {
                    money.value = Math.Round((money.value * 1000f), 2);
                    money.moneyPrefix--;
                } //loop end
            } //try
            catch (System.Exception e)
            {
                Debug.Log("Exception occured at Update Prefix!" + e.Message);
            } //catch
        } //UpdatePrefix() end

        /// <summary>
        /// Calculates the percentage amount and returns it in Money type.
        /// </summary>
        public Money Percentage(float percentage)
        {
            Money money = new Money(this);
            money = new Money((percentage / 100f) * money.Purge());
            return money;
        } //Percentage() end

        #endregion

        #region Casting Methods

        /// <summary>
        /// Returns value as string with proper prefix.
        /// </summary>
        public override string ToString() =>
            moneyPrefix.Equals(MoneyPrefix.Empty)
                ? value.ToString("0.0")
                : value.ToString("F1") + moneyPrefix.ToString().ToUpper();

        /// <summary>
        /// Returns value as int.
        /// </summary>
        public int ToInt() => (int) Purge();

        /// <summary>
        /// Returns value as float.
        /// </summary>
        public float ToFloat() => (float) Purge();

        /// <summary>
        /// Returns value as double.
        /// </summary>
        public double ToDouble() => Purge();

        #endregion
    } //class end

    // Custom Editor for class
#if UNITY_EDITOR

    [CustomPropertyDrawer(typeof(Money)), CanEditMultipleObjects]
    public class MoneyDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            EditorGUI.BeginProperty(position, label, property);
            position = EditorGUI.PrefixLabel(position, GUIUtility.GetControlID(FocusType.Passive), label);
            int indent = EditorGUI.indentLevel;
            EditorGUI.indentLevel = 0;
            Rect valueRect = new Rect(position.x, position.y, 100f, position.height);
            Rect prefixRect = new Rect(position.x + 105f, position.y, 60f, position.height);
            Rect stringRect = new Rect(position.x + 180f, position.y, 100f, position.height);
            string temp = "0";
            SerializedProperty value = property.FindPropertyRelative("value");
            SerializedProperty prefix = property.FindPropertyRelative("moneyPrefix");
            GUI.enabled = !Application.isPlaying;
            EditorGUI.PropertyField(valueRect, value, GUIContent.none);
            EditorGUI.PropertyField(prefixRect, prefix, GUIContent.none);

            if (Application.isPlaying)
            {
                GUI.enabled = true;
                temp = value.doubleValue.ToString(CultureInfo.InvariantCulture);
                temp += ' ';
                temp += (prefix.enumValueIndex == 0 ? string.Empty : ((MoneyPrefix) prefix.enumValueIndex).ToString());
            } //if end

            EditorGUI.LabelField(stringRect, temp);
            EditorGUI.indentLevel = indent;
            EditorGUI.EndProperty();
        } //OnGUI() end
    } //class end

#endif
}