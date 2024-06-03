#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.Color>
struct Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3;
// System.Action`2<System.Single,System.Object>
struct Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10;
// System.Action`2<System.Single,System.Single>
struct Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// LionStudios.Suite.Core.LeanTween.LTBezier[]
struct LTBezierU5BU5D_tC1A86D60A51C0EF18072953A86F0D4AD32B4856C;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// LionStudios.Suite.Core.LeanTween.LTBezierPath
struct LTBezierPath_t43E8C326ECF286D309EADEB29CDC8E04DBDD5073;
// LionStudios.Suite.Core.LeanTween.LTDescr
struct LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483;
// LionStudios.Suite.Core.LeanTween.LTDescrOptional
struct LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04;
// LionStudios.Suite.Core.LeanTween.LTRect
struct LTRect_t2981747D80D60A6730A393CA5A2AE877549DA6A1;
// LionStudios.Suite.Core.LeanTween.LTSeq
struct LTSeq_t67383246739AE03D363848926D97C09D75C87C21;
// LionStudios.Suite.Core.LeanTween.LTSpline
struct LTSpline_t729993346C0921C9957F461CE2A836AE6E0939A7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// LionStudios.Suite.Core.LeanTween.LTDescr/<>c
struct U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866;
// LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0;
// LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873;

IL2CPP_EXTERN_C RuntimeClass* LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LionStudios.Suite.Core.LeanTween.LTBezierPath
struct LTBezierPath_t43E8C326ECF286D309EADEB29CDC8E04DBDD5073  : public RuntimeObject
{
	// UnityEngine.Vector3[] LionStudios.Suite.Core.LeanTween.LTBezierPath::pts
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pts_0;
	// System.Single LionStudios.Suite.Core.LeanTween.LTBezierPath::length
	float ___length_1;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTBezierPath::orientToPath
	bool ___orientToPath_2;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTBezierPath::orientToPath2d
	bool ___orientToPath2d_3;
	// LionStudios.Suite.Core.LeanTween.LTBezier[] LionStudios.Suite.Core.LeanTween.LTBezierPath::beziers
	LTBezierU5BU5D_tC1A86D60A51C0EF18072953A86F0D4AD32B4856C* ___beziers_4;
	// System.Single[] LionStudios.Suite.Core.LeanTween.LTBezierPath::lengthRatio
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lengthRatio_5;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTBezierPath::currentBezier
	int32_t ___currentBezier_6;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTBezierPath::previousBezier
	int32_t ___previousBezier_7;
};

// LionStudios.Suite.Core.LeanTween.LTSeq
struct LTSeq_t67383246739AE03D363848926D97C09D75C87C21  : public RuntimeObject
{
	// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::previous
	LTSeq_t67383246739AE03D363848926D97C09D75C87C21* ___previous_0;
	// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::current
	LTSeq_t67383246739AE03D363848926D97C09D75C87C21* ___current_1;
	// LionStudios.Suite.Core.LeanTween.LTDescr LionStudios.Suite.Core.LeanTween.LTSeq::tween
	LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* ___tween_2;
	// System.Single LionStudios.Suite.Core.LeanTween.LTSeq::totalDelay
	float ___totalDelay_3;
	// System.Single LionStudios.Suite.Core.LeanTween.LTSeq::timeScale
	float ___timeScale_4;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTSeq::debugIter
	int32_t ___debugIter_5;
	// System.UInt32 LionStudios.Suite.Core.LeanTween.LTSeq::counter
	uint32_t ___counter_6;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTSeq::toggle
	bool ___toggle_7;
	// System.UInt32 LionStudios.Suite.Core.LeanTween.LTSeq::_id
	uint32_t ____id_8;
};

// LionStudios.Suite.Core.LeanTween.LTSpline
struct LTSpline_t729993346C0921C9957F461CE2A836AE6E0939A7  : public RuntimeObject
{
	// System.Single LionStudios.Suite.Core.LeanTween.LTSpline::distance
	float ___distance_2;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTSpline::constantSpeed
	bool ___constantSpeed_3;
	// UnityEngine.Vector3[] LionStudios.Suite.Core.LeanTween.LTSpline::pts
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pts_4;
	// UnityEngine.Vector3[] LionStudios.Suite.Core.LeanTween.LTSpline::ptsAdj
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___ptsAdj_5;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTSpline::ptsAdjLength
	int32_t ___ptsAdjLength_6;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTSpline::orientToPath
	bool ___orientToPath_7;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTSpline::orientToPath2d
	bool ___orientToPath2d_8;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTSpline::numSections
	int32_t ___numSections_9;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTSpline::currPt
	int32_t ___currPt_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// LionStudios.Suite.Core.LeanTween.LTDescr/<>c
struct U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// LionStudios.Suite.Core.LeanTween.LTDescr
struct LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483  : public RuntimeObject
{
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::usesNormalDt
	bool ___usesNormalDt_4;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::hasInitiliazed
	bool ___hasInitiliazed_5;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::hasExtraOnCompletes
	bool ___hasExtraOnCompletes_6;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::hasPhysics
	bool ___hasPhysics_7;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_8;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_9;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::useRecursion
	bool ___useRecursion_10;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::ratioPassed
	float ___ratioPassed_11;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::passed
	float ___passed_12;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::delay
	float ___delay_13;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::time
	float ___time_14;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::speed
	float ___speed_15;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::lastVal
	float ___lastVal_16;
	// System.UInt32 LionStudios.Suite.Core.LeanTween.LTDescr::_id
	uint32_t ____id_17;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTDescr::loopCount
	int32_t ___loopCount_18;
	// System.UInt32 LionStudios.Suite.Core.LeanTween.LTDescr::counter
	uint32_t ___counter_19;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::direction
	float ___direction_20;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::directionLast
	float ___directionLast_21;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::overshoot
	float ___overshoot_22;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::period
	float ___period_23;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::scale
	float ___scale_24;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::destroyOnComplete
	bool ___destroyOnComplete_25;
	// UnityEngine.Transform LionStudios.Suite.Core.LeanTween.LTDescr::trans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans_26;
	// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescr::fromInternal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromInternal_27;
	// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescr::toInternal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toInternal_28;
	// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescr::diff
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diff_29;
	// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescr::diffDiv2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diffDiv2_30;
	// LionStudios.Suite.Core.LeanTween.TweenAction LionStudios.Suite.Core.LeanTween.LTDescr::type
	int32_t ___type_31;
	// LionStudios.Suite.Core.LeanTween.LeanTweenType LionStudios.Suite.Core.LeanTween.LTDescr::easeType
	int32_t ___easeType_32;
	// LionStudios.Suite.Core.LeanTween.LeanTweenType LionStudios.Suite.Core.LeanTween.LTDescr::loopType
	int32_t ___loopType_33;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_34;
	// LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate LionStudios.Suite.Core.LeanTween.LTDescr::easeMethod
	EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* ___easeMethod_35;
	// LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate LionStudios.Suite.Core.LeanTween.LTDescr::<easeInternal>k__BackingField
	ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* ___U3CeaseInternalU3Ek__BackingField_36;
	// LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate LionStudios.Suite.Core.LeanTween.LTDescr::<initInternal>k__BackingField
	ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* ___U3CinitInternalU3Ek__BackingField_37;
	// UnityEngine.SpriteRenderer LionStudios.Suite.Core.LeanTween.LTDescr::spriteRen
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRen_38;
	// UnityEngine.RectTransform LionStudios.Suite.Core.LeanTween.LTDescr::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_39;
	// UnityEngine.UI.Text LionStudios.Suite.Core.LeanTween.LTDescr::uiText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___uiText_40;
	// UnityEngine.UI.Image LionStudios.Suite.Core.LeanTween.LTDescr::uiImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___uiImage_41;
	// UnityEngine.UI.RawImage LionStudios.Suite.Core.LeanTween.LTDescr::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_42;
	// UnityEngine.Sprite[] LionStudios.Suite.Core.LeanTween.LTDescr::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_43;
	// LionStudios.Suite.Core.LeanTween.LTDescrOptional LionStudios.Suite.Core.LeanTween.LTDescr::_optional
	LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* ____optional_44;
};

// LionStudios.Suite.Core.LeanTween.LTDescrOptional
struct LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04  : public RuntimeObject
{
	// UnityEngine.Transform LionStudios.Suite.Core.LeanTween.LTDescrOptional::<toTrans>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtoTransU3Ek__BackingField_0;
	// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescrOptional::<point>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpointU3Ek__BackingField_1;
	// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescrOptional::<axis>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisU3Ek__BackingField_2;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescrOptional::<lastVal>k__BackingField
	float ___U3ClastValU3Ek__BackingField_3;
	// UnityEngine.Quaternion LionStudios.Suite.Core.LeanTween.LTDescrOptional::<origRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CorigRotationU3Ek__BackingField_4;
	// LionStudios.Suite.Core.LeanTween.LTBezierPath LionStudios.Suite.Core.LeanTween.LTDescrOptional::<path>k__BackingField
	LTBezierPath_t43E8C326ECF286D309EADEB29CDC8E04DBDD5073* ___U3CpathU3Ek__BackingField_5;
	// LionStudios.Suite.Core.LeanTween.LTSpline LionStudios.Suite.Core.LeanTween.LTDescrOptional::<spline>k__BackingField
	LTSpline_t729993346C0921C9957F461CE2A836AE6E0939A7* ___U3CsplineU3Ek__BackingField_6;
	// UnityEngine.AnimationCurve LionStudios.Suite.Core.LeanTween.LTDescrOptional::animationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animationCurve_7;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTDescrOptional::initFrameCount
	int32_t ___initFrameCount_8;
	// UnityEngine.Color LionStudios.Suite.Core.LeanTween.LTDescrOptional::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_9;
	// LionStudios.Suite.Core.LeanTween.LTRect LionStudios.Suite.Core.LeanTween.LTDescrOptional::<ltRect>k__BackingField
	LTRect_t2981747D80D60A6730A393CA5A2AE877549DA6A1* ___U3CltRectU3Ek__BackingField_10;
	// System.Action`1<System.Single> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateFloat>k__BackingField
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___U3ConUpdateFloatU3Ek__BackingField_11;
	// System.Action`2<System.Single,System.Single> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateFloatRatio>k__BackingField
	Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___U3ConUpdateFloatRatioU3Ek__BackingField_12;
	// System.Action`2<System.Single,System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateFloatObject>k__BackingField
	Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* ___U3ConUpdateFloatObjectU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Vector2> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateVector2>k__BackingField
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___U3ConUpdateVector2U3Ek__BackingField_14;
	// System.Action`1<UnityEngine.Vector3> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateVector3>k__BackingField
	Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___U3ConUpdateVector3U3Ek__BackingField_15;
	// System.Action`2<UnityEngine.Vector3,System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateVector3Object>k__BackingField
	Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* ___U3ConUpdateVector3ObjectU3Ek__BackingField_16;
	// System.Action`1<UnityEngine.Color> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateColor>k__BackingField
	Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___U3ConUpdateColorU3Ek__BackingField_17;
	// System.Action`2<UnityEngine.Color,System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateColorObject>k__BackingField
	Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* ___U3ConUpdateColorObjectU3Ek__BackingField_18;
	// System.Action LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onComplete>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConCompleteU3Ek__BackingField_19;
	// System.Action`1<System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onCompleteObject>k__BackingField
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3ConCompleteObjectU3Ek__BackingField_20;
	// System.Object LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onCompleteParam>k__BackingField
	RuntimeObject* ___U3ConCompleteParamU3Ek__BackingField_21;
	// System.Object LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onUpdateParam>k__BackingField
	RuntimeObject* ___U3ConUpdateParamU3Ek__BackingField_22;
	// System.Action LionStudios.Suite.Core.LeanTween.LTDescrOptional::<onStart>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConStartU3Ek__BackingField_23;
};

// LionStudios.Suite.Core.LeanTween.LTRect
struct LTRect_t2981747D80D60A6730A393CA5A2AE877549DA6A1  : public RuntimeObject
{
	// UnityEngine.Rect LionStudios.Suite.Core.LeanTween.LTRect::_rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____rect_0;
	// System.Single LionStudios.Suite.Core.LeanTween.LTRect::alpha
	float ___alpha_1;
	// System.Single LionStudios.Suite.Core.LeanTween.LTRect::rotation
	float ___rotation_2;
	// UnityEngine.Vector2 LionStudios.Suite.Core.LeanTween.LTRect::pivot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_3;
	// UnityEngine.Vector2 LionStudios.Suite.Core.LeanTween.LTRect::margin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___margin_4;
	// UnityEngine.Rect LionStudios.Suite.Core.LeanTween.LTRect::relativeRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___relativeRect_5;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTRect::rotateEnabled
	bool ___rotateEnabled_6;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTRect::rotateFinished
	bool ___rotateFinished_7;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTRect::alphaEnabled
	bool ___alphaEnabled_8;
	// System.String LionStudios.Suite.Core.LeanTween.LTRect::labelStr
	String_t* ___labelStr_9;
	// LionStudios.Suite.Core.LeanTween.LTGUI/Element_Type LionStudios.Suite.Core.LeanTween.LTRect::type
	int32_t ___type_10;
	// UnityEngine.GUIStyle LionStudios.Suite.Core.LeanTween.LTRect::style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style_11;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTRect::useColor
	bool ___useColor_12;
	// UnityEngine.Color LionStudios.Suite.Core.LeanTween.LTRect::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_13;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTRect::fontScaleToFit
	bool ___fontScaleToFit_14;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTRect::useSimpleScale
	bool ___useSimpleScale_15;
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTRect::sizeByHeight
	bool ___sizeByHeight_16;
	// UnityEngine.Texture LionStudios.Suite.Core.LeanTween.LTRect::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_17;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTRect::_id
	int32_t ____id_18;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTRect::counter
	int32_t ___counter_19;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<UnityEngine.Color>
struct Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3  : public MulticastDelegate_t
{
};

// System.Action`2<System.Single,System.Object>
struct Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10  : public MulticastDelegate_t
{
};

// System.Action`2<System.Single,System.Single>
struct Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0  : public MulticastDelegate_t
{
};

// LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873  : public MulticastDelegate_t
{
};

// LionStudios.Suite.Core.LeanTween.LTBezierPath

// LionStudios.Suite.Core.LeanTween.LTBezierPath

// LionStudios.Suite.Core.LeanTween.LTSeq

// LionStudios.Suite.Core.LeanTween.LTSeq

// LionStudios.Suite.Core.LeanTween.LTSpline
struct LTSpline_t729993346C0921C9957F461CE2A836AE6E0939A7_StaticFields
{
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTSpline::DISTANCE_COUNT
	int32_t ___DISTANCE_COUNT_0;
	// System.Int32 LionStudios.Suite.Core.LeanTween.LTSpline::SUBLINE_COUNT
	int32_t ___SUBLINE_COUNT_1;
};

// LionStudios.Suite.Core.LeanTween.LTSpline

// System.ValueType

// System.ValueType

// LionStudios.Suite.Core.LeanTween.LTDescr/<>c
struct U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866_StaticFields
{
	// LionStudios.Suite.Core.LeanTween.LTDescr/<>c LionStudios.Suite.Core.LeanTween.LTDescr/<>c::<>9
	U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866* ___U3CU3E9_0;
	// LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate LionStudios.Suite.Core.LeanTween.LTDescr/<>c::<>9__113_0
	ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* ___U3CU3E9__113_0_1;
	// LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate LionStudios.Suite.Core.LeanTween.LTDescr/<>c::<>9__114_0
	ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* ___U3CU3E9__114_0_2;
};

// LionStudios.Suite.Core.LeanTween.LTDescr/<>c

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// System.Delegate

// System.Delegate

// LionStudios.Suite.Core.LeanTween.LTDescr
struct LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_StaticFields
{
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::val
	float ___val_45;
	// System.Single LionStudios.Suite.Core.LeanTween.LTDescr::dt
	float ___dt_46;
	// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescr::newVect
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newVect_47;
};

// LionStudios.Suite.Core.LeanTween.LTDescr

// LionStudios.Suite.Core.LeanTween.LTDescrOptional

// LionStudios.Suite.Core.LeanTween.LTDescrOptional

// LionStudios.Suite.Core.LeanTween.LTRect
struct LTRect_t2981747D80D60A6730A393CA5A2AE877549DA6A1_StaticFields
{
	// System.Boolean LionStudios.Suite.Core.LeanTween.LTRect::colorTouched
	bool ___colorTouched_20;
};

// LionStudios.Suite.Core.LeanTween.LTRect

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// System.Action`1<UnityEngine.Color>

// System.Action`1<UnityEngine.Color>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Action`1<UnityEngine.Vector2>

// System.Action`1<UnityEngine.Vector2>

// System.Action`1<UnityEngine.Vector3>

// System.Action`1<UnityEngine.Vector3>

// System.Action`2<UnityEngine.Color,System.Object>

// System.Action`2<UnityEngine.Color,System.Object>

// System.Action`2<System.Single,System.Object>

// System.Action`2<System.Single,System.Object>

// System.Action`2<System.Single,System.Single>

// System.Action`2<System.Single,System.Single>

// System.Action`2<UnityEngine.Vector3,System.Object>

// System.Action`2<UnityEngine.Vector3,System.Object>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Transform

// UnityEngine.Transform

// LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate

// LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate

// LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate

// LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Single>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_gshared_inline (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_gshared_inline (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* __this, float ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Vector3,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_gshared_inline (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_obj, const RuntimeMethod* method) ;

// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9ED2EEAA97D34FDE3FA1ECA14A786E7A62C802F4 (U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateFloat(System.Action`1<System.Single>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloat_mCD1418A25CBFDAE2A60BED2D699C1AECAF975F59_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateFloatRatio(System.Action`2<System.Single,System.Single>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatRatio_mF7CE5F547761125B8129AA7BE1C54CAFAA76729E_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateVector2(System.Action`1<UnityEngine.Vector2>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector2_m1E74811DAABC192E628E013C7F1E867A97E75FDF_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateVector3(System.Action`1<UnityEngine.Vector3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3_m617A4999EFA797975E6E8463A98ADB2AE91CFCDB_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateFloatObject(System.Action`2<System.Single,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatObject_mA686BF5B9A0D707129E289F8A04B1FBEA86311C9_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateVector3Object(System.Action`2<UnityEngine.Vector3,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3Object_mCC635C1E59C6D9B8D1236D0D7372154D20EF1090_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateColor(System.Action`1<UnityEngine.Color>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateColor_m15D9DE0B92787A56EA6405B1927A004962E5FCFE_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onComplete(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onComplete_m5DEFCB9BD43E3C90D89D57A838C94FF2CFC40E3E_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onCompleteObject(System.Action`1<System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteObject_m92613618D223C9F1FF960045E951F67F96E8D238_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onCompleteParam(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteParam_mC38824C41B1A97CB415B4A172E06DCF7E997295B_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onStart(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onStart_mE3012A39C85062262704AD97AEADEAD6862707CE_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_point(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_point_mB263845D27528D7B806BFBB88BC0260CF6CEA50A_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Action`1<System.Single> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateFloat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* LTDescrOptional_get_onUpdateFloat_mD6FAC7E569B21654282EE1174BD562F53541EFDE_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___0_obj, method);
}
// System.Action`2<System.Single,System.Single> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateFloatRatio()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* LTDescrOptional_get_onUpdateFloatRatio_mC5CA32A486BD4E9C61A413B17D16327CDAC3C0FF_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Single>::Invoke(T1,T2)
inline void Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_inline (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132*, float, float, const RuntimeMethod*))Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Action`2<System.Single,System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateFloatObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* LTDescrOptional_get_onUpdateFloatObject_mC757D656EBA9690AD1B6A806D52C52BDC638C14B_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) ;
// System.Object LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateParam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LTDescrOptional_get_onUpdateParam_m6EAB545A4979A838159FC88716882E8F598B18CC_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_inline (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* __this, float ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10*, float, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Action`2<UnityEngine.Vector3,System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateVector3Object()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* LTDescrOptional_get_onUpdateVector3Object_m256A7B87C144E47F3AB4030F2DE3D696AEE8C4F6_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Vector3,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_inline (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Action`1<UnityEngine.Vector3> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateVector3()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* LTDescrOptional_get_onUpdateVector3_m05E715577E131F9C72D188039983602439B8FFCA_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
inline void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline)(__this, ___0_obj, method);
}
// System.Action`1<UnityEngine.Vector2> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateVector2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* LTDescrOptional_get_onUpdateVector2_mF12B4CDB127AEB7BEDFBFFF7CFB7A428A58A57C0_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
inline void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline)(__this, ___0_obj, method);
}
// System.Void LionStudios.Suite.Core.LeanTween.LTSeq::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_reset_m29EA27FE4B7427867E11B5ADCF353D8A832EFF55 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LeanTween::sequence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LeanTween_sequence_m5881DCD6F4CD3DA8633512CD4F476E699A3CF66A (bool ___0_initSequence, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTDescr LionStudios.Suite.Core.LeanTween.LeanTween::delayedCall(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* LeanTween_delayedCall_mC33706706A179EDDA57C5D0410C1B89253A4E82A (float ___0_delayTime, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::append(LionStudios.Suite.Core.LeanTween.LTDescr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_append_m3236A76FEB31AC8B5403305B89DA7A0F579F26C4 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* ___0_tween, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTDescr LionStudios.Suite.Core.LeanTween.LeanTween::delayedCall(System.Single,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* LeanTween_delayedCall_m6A9E5242E2CFD714FF954260473334F1FE411DF1 (float ___0_delayTime, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTDescr LionStudios.Suite.Core.LeanTween.LTDescr::setOnCompleteParam(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* LTDescr_setOnCompleteParam_m9EFDF79B19D2A53F528D8549E85E1E2C90C4EDB2 (LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* __this, RuntimeObject* ___0_onCompleteParam, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::addOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTDescr LionStudios.Suite.Core.LeanTween.LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* LeanTween_delayedCall_mE1C750C67C1E7C6D1980EE83BCF85147A32D7A3E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, float ___1_delayTime, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_callback, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTDescr LionStudios.Suite.Core.LeanTween.LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* LeanTween_delayedCall_m893DFAC462119AD1A6DB62F4A05B925E4CC5C770 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, float ___1_delayTime, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_callback, const RuntimeMethod* method) ;
// System.Single LionStudios.Suite.Core.LeanTween.LTSeq::addPreviousDelays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LTSeq_addPreviousDelays_mA58D4BAD058DFC256ED8AEDCCAD7371E5B6D9466 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTDescr LionStudios.Suite.Core.LeanTween.LTDescr::setDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* LTDescr_setDelay_m7232D033C73E049E74DF2C0DC405634BC5B8E3D3 (LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Void LionStudios.Suite.Core.LeanTween.LTSeq::setScaleRecursive(LionStudios.Suite.Core.LeanTween.LTSeq,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_setScaleRecursive_m337767A62F0781F29F34EB878F3165A42D04A5D0 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, LTSeq_t67383246739AE03D363848926D97C09D75C87C21* ___0_seq, float ___1_timeScale, int32_t ___2_count, const RuntimeMethod* method) ;
// LionStudios.Suite.Core.LeanTween.LTDescr LionStudios.Suite.Core.LeanTween.LTDescr::setTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* LTDescr_setTime_m957079BFC083672EC2B688C39BB33B2930A1A59F (LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* __this, float ___0_time, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_Multicast(EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* currentDelegate = reinterpret_cast<EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873*>(delegatesToInvoke[i]);
		typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_OpenInst(EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_OpenStatic(EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_OpenStaticInvoker(EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_ClosedStaticInvoker(EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelegatePInvokeWrapper_EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873 (EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseTypeDelegate__ctor_m31B266F6670A0F1F08D792C64E21D689F70FC17F (EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90_Multicast;
}
// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mA1D5C8C74F4937AFA6D8EB8B36C73299458D5F90 (EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EaseTypeDelegate_BeginInvoke_m3C97A57DF70C1D27D9D4A0C66ACCC7A13B1B1529 (EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescr/EaseTypeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_EndInvoke_mE740B0909095ADF2E1AF2AD41E843D946D192665 (EaseTypeDelegate_t607333147E1186935DF52FA04C1C367C0832F873* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_Multicast(ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* currentDelegate = reinterpret_cast<ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_OpenInst(ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_OpenStatic(ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_OpenStaticInvoker(ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_ClosedStaticInvoker(ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0 (ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate__ctor_mA078883E41069249E2538A895552C0B98D82744C (ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A_Multicast;
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate_Invoke_mE4B2CBD907986F865DE235D8DA3F3A3D002FC80A (ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionMethodDelegate_BeginInvoke_m9D22A9D79BFD8A4DE34CD887CB616D437656D7A9 (ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/ActionMethodDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate_EndInvoke_m3BCC1BE289AF8D907739C5DB496A66546FBD33A3 (ActionMethodDelegate_t97911D18CDB7720F655CE38CFF78B38CC65571B0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC5AB915E671AF11C197A5B91FCB54E3DAA109901 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866* L_0 = (U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866*)il2cpp_codegen_object_new(U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9ED2EEAA97D34FDE3FA1ECA14A786E7A62C802F4(L_0, NULL);
		((U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9ED2EEAA97D34FDE3FA1ECA14A786E7A62C802F4 (U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/<>c::<setCallback>b__113_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CsetCallbackU3Eb__113_0_m458BD6E8B8FAC394E1BCC65602AC3C3FE9DF2BDB (U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866* __this, const RuntimeMethod* method) 
{
	{
		// this.initInternal = ()=>{};
		return;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescr/<>c::<setValue3>b__114_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CsetValue3U3Eb__114_0_m321EE16E56E1984267F2E60197949F26498763D1 (U3CU3Ec_t249A160E9D448767854CE78EC9755295749FC866* __this, const RuntimeMethod* method) 
{
	{
		// this.initInternal = ()=>{};
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_toTrans()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LTDescrOptional_get_toTrans_m4D9608C68BA90855BC88693E7916B2548DB2D9BD (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Transform toTrans { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtoTransU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_toTrans(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_toTrans_m3683B06E6D67D63A65C4BB4E861A15C947986637 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform toTrans { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CtoTransU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtoTransU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LTDescrOptional_get_point_m7DB4416AFAF614888921388DE23F8757F3A601ED (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CpointU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_point_mB263845D27528D7B806BFBB88BC0260CF6CEA50A (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CpointU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_axis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LTDescrOptional_get_axis_m8336094E4C72DD9208A29C9CA720D3086516DE1A (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CaxisU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_axis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_axis_m2C7950DAFF854FB7950B13FAB866DF892141A7F6 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CaxisU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Single LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_lastVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LTDescrOptional_get_lastVal_mABA5CC192C270B09C976D53CA672D9D25618D6B0 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public float lastVal { get; set; }
		float L_0 = __this->___U3ClastValU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_lastVal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_lastVal_mD8B603371437ABB3463E36F2F14F6EC6880AD026 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float lastVal { get; set; }
		float L_0 = ___0_value;
		__this->___U3ClastValU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Quaternion LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_origRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 LTDescrOptional_get_origRotation_m519117212D64CF3CDD6B5BDC2435257E2ABA20A2 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion origRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CorigRotationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_origRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_origRotation_m681F0800089228F15531FE77945160CECD0E1994 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Quaternion origRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CorigRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
// LionStudios.Suite.Core.LeanTween.LTBezierPath LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTBezierPath_t43E8C326ECF286D309EADEB29CDC8E04DBDD5073* LTDescrOptional_get_path_m2C326A2ED1B469F50C81C9482E567ED61018D407 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public LTBezierPath path { get; set; }
		LTBezierPath_t43E8C326ECF286D309EADEB29CDC8E04DBDD5073* L_0 = __this->___U3CpathU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_path(LionStudios.Suite.Core.LeanTween.LTBezierPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_path_m4C6457694B9CDA9A57222118D39EC867604BA5FC (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, LTBezierPath_t43E8C326ECF286D309EADEB29CDC8E04DBDD5073* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LTBezierPath path { get; set; }
		LTBezierPath_t43E8C326ECF286D309EADEB29CDC8E04DBDD5073* L_0 = ___0_value;
		__this->___U3CpathU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSpline LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_spline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSpline_t729993346C0921C9957F461CE2A836AE6E0939A7* LTDescrOptional_get_spline_m26396DC821302347D9572813FF387CD7BDEBED30 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public LTSpline spline { get; set; }
		LTSpline_t729993346C0921C9957F461CE2A836AE6E0939A7* L_0 = __this->___U3CsplineU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_spline(LionStudios.Suite.Core.LeanTween.LTSpline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_spline_m26B44D442281D9F80DCAFA14ECD644487CAA3A00 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, LTSpline_t729993346C0921C9957F461CE2A836AE6E0939A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LTSpline spline { get; set; }
		LTSpline_t729993346C0921C9957F461CE2A836AE6E0939A7* L_0 = ___0_value;
		__this->___U3CsplineU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsplineU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// LionStudios.Suite.Core.LeanTween.LTRect LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_ltRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTRect_t2981747D80D60A6730A393CA5A2AE877549DA6A1* LTDescrOptional_get_ltRect_m4049874F51711F5480CEADC2EBEC7852C6D139E1 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public LTRect ltRect { get; set; } // maybe get rid of this eventually
		LTRect_t2981747D80D60A6730A393CA5A2AE877549DA6A1* L_0 = __this->___U3CltRectU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_ltRect(LionStudios.Suite.Core.LeanTween.LTRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_ltRect_mE86AF4E53718521CCE240C33D4CAE155D80CA3DA (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, LTRect_t2981747D80D60A6730A393CA5A2AE877549DA6A1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LTRect ltRect { get; set; } // maybe get rid of this eventually
		LTRect_t2981747D80D60A6730A393CA5A2AE877549DA6A1* L_0 = ___0_value;
		__this->___U3CltRectU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CltRectU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Action`1<System.Single> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* LTDescrOptional_get_onUpdateFloat_mD6FAC7E569B21654282EE1174BD562F53541EFDE (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float> onUpdateFloat { get; set; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___U3ConUpdateFloatU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateFloat(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloat_mCD1418A25CBFDAE2A60BED2D699C1AECAF975F59 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float> onUpdateFloat { get; set; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ___0_value;
		__this->___U3ConUpdateFloatU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Action`2<System.Single,System.Single> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateFloatRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* LTDescrOptional_get_onUpdateFloatRatio_mC5CA32A486BD4E9C61A413B17D16327CDAC3C0FF (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float, float> onUpdateFloatRatio { get; set; }
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_0 = __this->___U3ConUpdateFloatRatioU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateFloatRatio(System.Action`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatRatio_mF7CE5F547761125B8129AA7BE1C54CAFAA76729E (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float, float> onUpdateFloatRatio { get; set; }
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_0 = ___0_value;
		__this->___U3ConUpdateFloatRatioU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatRatioU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Action`2<System.Single,System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateFloatObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* LTDescrOptional_get_onUpdateFloatObject_mC757D656EBA9690AD1B6A806D52C52BDC638C14B (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float, object> onUpdateFloatObject { get; set; }
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_0 = __this->___U3ConUpdateFloatObjectU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateFloatObject(System.Action`2<System.Single,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatObject_mA686BF5B9A0D707129E289F8A04B1FBEA86311C9 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float, object> onUpdateFloatObject { get; set; }
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_0 = ___0_value;
		__this->___U3ConUpdateFloatObjectU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatObjectU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Action`1<UnityEngine.Vector2> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* LTDescrOptional_get_onUpdateVector2_mF12B4CDB127AEB7BEDFBFFF7CFB7A428A58A57C0 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector2> onUpdateVector2 { get; set; }
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = __this->___U3ConUpdateVector2U3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateVector2(System.Action`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector2_m1E74811DAABC192E628E013C7F1E867A97E75FDF (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector2> onUpdateVector2 { get; set; }
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = ___0_value;
		__this->___U3ConUpdateVector2U3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector2U3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Action`1<UnityEngine.Vector3> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* LTDescrOptional_get_onUpdateVector3_m05E715577E131F9C72D188039983602439B8FFCA (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3> onUpdateVector3 { get; set; }
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_0 = __this->___U3ConUpdateVector3U3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateVector3(System.Action`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3_m617A4999EFA797975E6E8463A98ADB2AE91CFCDB (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3> onUpdateVector3 { get; set; }
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_0 = ___0_value;
		__this->___U3ConUpdateVector3U3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector3U3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Action`2<UnityEngine.Vector3,System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateVector3Object()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* LTDescrOptional_get_onUpdateVector3Object_m256A7B87C144E47F3AB4030F2DE3D696AEE8C4F6 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3, object> onUpdateVector3Object { get; set; }
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_0 = __this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateVector3Object(System.Action`2<UnityEngine.Vector3,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3Object_mCC635C1E59C6D9B8D1236D0D7372154D20EF1090 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3, object> onUpdateVector3Object { get; set; }
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_0 = ___0_value;
		__this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.Action`1<UnityEngine.Color> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* LTDescrOptional_get_onUpdateColor_mE7CB405A56C7A911CA39742301C5B232B4473592 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Color> onUpdateColor { get; set; }
		Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* L_0 = __this->___U3ConUpdateColorU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateColor(System.Action`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateColor_m15D9DE0B92787A56EA6405B1927A004962E5FCFE (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Color> onUpdateColor { get; set; }
		Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* L_0 = ___0_value;
		__this->___U3ConUpdateColorU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateColorU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.Action`2<UnityEngine.Color,System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateColorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* LTDescrOptional_get_onUpdateColorObject_mC81156F1BDC249EE72D10BF5EB6C6AF9B948978D (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Color, object> onUpdateColorObject { get; set; }
		Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* L_0 = __this->___U3ConUpdateColorObjectU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateColorObject(System.Action`2<UnityEngine.Color,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateColorObject_m4F81A3336C26B7FE22D2C48BA18499AE2424EEEF (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Color, object> onUpdateColorObject { get; set; }
		Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* L_0 = ___0_value;
		__this->___U3ConUpdateColorObjectU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateColorObjectU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Action LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* LTDescrOptional_get_onComplete_mA2542E78C71F869B0DEA9AF612B59014CAF93FBA (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action onComplete { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3ConCompleteU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onComplete_m5DEFCB9BD43E3C90D89D57A838C94FF2CFC40E3E (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action onComplete { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_value;
		__this->___U3ConCompleteU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Action`1<System.Object> LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onCompleteObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* LTDescrOptional_get_onCompleteObject_mF0EA88B83F4BD4D29C51BDA53AFD08D8657B2776 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<object> onCompleteObject { get; set; }
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->___U3ConCompleteObjectU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onCompleteObject(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteObject_m92613618D223C9F1FF960045E951F67F96E8D238 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<object> onCompleteObject { get; set; }
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_value;
		__this->___U3ConCompleteObjectU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteObjectU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Object LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onCompleteParam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LTDescrOptional_get_onCompleteParam_m895282A8650CA3F4224798C6A05DAAE2428A3284 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public object onCompleteParam { get; set; }
		RuntimeObject* L_0 = __this->___U3ConCompleteParamU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onCompleteParam(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteParam_mC38824C41B1A97CB415B4A172E06DCF7E997295B (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object onCompleteParam { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3ConCompleteParamU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteParamU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
// System.Object LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onUpdateParam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LTDescrOptional_get_onUpdateParam_m6EAB545A4979A838159FC88716882E8F598B18CC (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public object onUpdateParam { get; set; }
		RuntimeObject* L_0 = __this->___U3ConUpdateParamU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onUpdateParam(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateParam_mC72333C0BF148B073981B2F294993B260B8972E5 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object onUpdateParam { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3ConUpdateParamU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateParamU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
// System.Action LionStudios.Suite.Core.LeanTween.LTDescrOptional::get_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* LTDescrOptional_get_onStart_m05D2207A6664DC67F537189284FCA13325E3035A (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action onStart { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3ConStartU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::set_onStart(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onStart_mE3012A39C85062262704AD97AEADEAD6862707CE (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action onStart { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_value;
		__this->___U3ConStartU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConStartU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_reset_mABC3B31AB6BFF2F65D4D42DD70593DC9598A5CF7 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// animationCurve = null;
		__this->___animationCurve_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animationCurve_7), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		// this.onUpdateFloat = null;
		LTDescrOptional_set_onUpdateFloat_mCD1418A25CBFDAE2A60BED2D699C1AECAF975F59_inline(__this, (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)NULL, NULL);
		// this.onUpdateFloatRatio = null;
		LTDescrOptional_set_onUpdateFloatRatio_mF7CE5F547761125B8129AA7BE1C54CAFAA76729E_inline(__this, (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132*)NULL, NULL);
		// this.onUpdateVector2 = null;
		LTDescrOptional_set_onUpdateVector2_m1E74811DAABC192E628E013C7F1E867A97E75FDF_inline(__this, (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*)NULL, NULL);
		// this.onUpdateVector3 = null;
		LTDescrOptional_set_onUpdateVector3_m617A4999EFA797975E6E8463A98ADB2AE91CFCDB_inline(__this, (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)NULL, NULL);
		// this.onUpdateFloatObject = null;
		LTDescrOptional_set_onUpdateFloatObject_mA686BF5B9A0D707129E289F8A04B1FBEA86311C9_inline(__this, (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10*)NULL, NULL);
		// this.onUpdateVector3Object = null;
		LTDescrOptional_set_onUpdateVector3Object_mCC635C1E59C6D9B8D1236D0D7372154D20EF1090_inline(__this, (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C*)NULL, NULL);
		// this.onUpdateColor = null;
		LTDescrOptional_set_onUpdateColor_m15D9DE0B92787A56EA6405B1927A004962E5FCFE_inline(__this, (Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22*)NULL, NULL);
		// this.onComplete = null;
		LTDescrOptional_set_onComplete_m5DEFCB9BD43E3C90D89D57A838C94FF2CFC40E3E_inline(__this, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.onCompleteObject = null;
		LTDescrOptional_set_onCompleteObject_m92613618D223C9F1FF960045E951F67F96E8D238_inline(__this, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, NULL);
		// this.onCompleteParam = null;
		LTDescrOptional_set_onCompleteParam_mC38824C41B1A97CB415B4A172E06DCF7E997295B_inline(__this, NULL, NULL);
		// this.onStart = null;
		LTDescrOptional_set_onStart_mE3012A39C85062262704AD97AEADEAD6862707CE_inline(__this, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.point = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		LTDescrOptional_set_point_mB263845D27528D7B806BFBB88BC0260CF6CEA50A_inline(__this, L_0, NULL);
		// this.initFrameCount = 0;
		__this->___initFrameCount_8 = 0;
		// }
		return;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::callOnUpdate(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_callOnUpdate_m7FF30D6FADCD394A37F77F0FE93FD009936F9E51 (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, float ___0_val, float ___1_ratioPassed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.onUpdateFloat != null)
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0;
		L_0 = LTDescrOptional_get_onUpdateFloat_mD6FAC7E569B21654282EE1174BD562F53541EFDE_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// this.onUpdateFloat(val);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1;
		L_1 = LTDescrOptional_get_onUpdateFloat_mD6FAC7E569B21654282EE1174BD562F53541EFDE_inline(__this, NULL);
		float L_2 = ___0_val;
		NullCheck(L_1);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// if (this.onUpdateFloatRatio != null)
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_3;
		L_3 = LTDescrOptional_get_onUpdateFloatRatio_mC5CA32A486BD4E9C61A413B17D16327CDAC3C0FF_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.onUpdateFloatRatio(val, ratioPassed);
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_4;
		L_4 = LTDescrOptional_get_onUpdateFloatRatio_mC5CA32A486BD4E9C61A413B17D16327CDAC3C0FF_inline(__this, NULL);
		float L_5 = ___0_val;
		float L_6 = ___1_ratioPassed;
		NullCheck(L_4);
		Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_inline(L_4, L_5, L_6, NULL);
		return;
	}

IL_002a:
	{
		// else if (this.onUpdateFloatObject != null)
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_7;
		L_7 = LTDescrOptional_get_onUpdateFloatObject_mC757D656EBA9690AD1B6A806D52C52BDC638C14B_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// this.onUpdateFloatObject(val, this.onUpdateParam);
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_8;
		L_8 = LTDescrOptional_get_onUpdateFloatObject_mC757D656EBA9690AD1B6A806D52C52BDC638C14B_inline(__this, NULL);
		float L_9 = ___0_val;
		RuntimeObject* L_10;
		L_10 = LTDescrOptional_get_onUpdateParam_m6EAB545A4979A838159FC88716882E8F598B18CC_inline(__this, NULL);
		NullCheck(L_8);
		Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_inline(L_8, L_9, L_10, NULL);
		return;
	}

IL_0045:
	{
		// else if (this.onUpdateVector3Object != null)
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_11;
		L_11 = LTDescrOptional_get_onUpdateVector3Object_m256A7B87C144E47F3AB4030F2DE3D696AEE8C4F6_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// this.onUpdateVector3Object(LTDescr.newVect, this.onUpdateParam);
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_12;
		L_12 = LTDescrOptional_get_onUpdateVector3Object_m256A7B87C144E47F3AB4030F2DE3D696AEE8C4F6_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ((LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_StaticFields*)il2cpp_codegen_static_fields_for(LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_il2cpp_TypeInfo_var))->___newVect_47;
		RuntimeObject* L_14;
		L_14 = LTDescrOptional_get_onUpdateParam_m6EAB545A4979A838159FC88716882E8F598B18CC_inline(__this, NULL);
		NullCheck(L_12);
		Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_inline(L_12, L_13, L_14, NULL);
		return;
	}

IL_0064:
	{
		// else if (this.onUpdateVector3 != null)
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_15;
		L_15 = LTDescrOptional_get_onUpdateVector3_m05E715577E131F9C72D188039983602439B8FFCA_inline(__this, NULL);
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// this.onUpdateVector3(LTDescr.newVect);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_16;
		L_16 = LTDescrOptional_get_onUpdateVector3_m05E715577E131F9C72D188039983602439B8FFCA_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ((LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_StaticFields*)il2cpp_codegen_static_fields_for(LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_il2cpp_TypeInfo_var))->___newVect_47;
		NullCheck(L_16);
		Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline(L_16, L_17, NULL);
		return;
	}

IL_007d:
	{
		// else if (this.onUpdateVector2 != null)
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_18;
		L_18 = LTDescrOptional_get_onUpdateVector2_mF12B4CDB127AEB7BEDFBFFF7CFB7A428A58A57C0_inline(__this, NULL);
		if (!L_18)
		{
			goto IL_00a9;
		}
	}
	{
		// this.onUpdateVector2(new Vector2(LTDescr.newVect.x, LTDescr.newVect.y));
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_19;
		L_19 = LTDescrOptional_get_onUpdateVector2_mF12B4CDB127AEB7BEDFBFFF7CFB7A428A58A57C0_inline(__this, NULL);
		float L_20 = (&((LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_StaticFields*)il2cpp_codegen_static_fields_for(LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_il2cpp_TypeInfo_var))->___newVect_47)->___x_2;
		float L_21 = (&((LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_StaticFields*)il2cpp_codegen_static_fields_for(LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483_il2cpp_TypeInfo_var))->___newVect_47)->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_inline(L_19, L_22, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTDescrOptional::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional__ctor_m2190CA696FBCAE80D7456D99C27EA640BE63BD1F (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LionStudios.Suite.Core.LeanTween.LTSeq::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LTSeq_get_id_m87EEC7E32BEB9843E366B5710971AA4891EED586 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) 
{
	{
		// uint toId = _id | counter << 16;
		uint32_t L_0 = __this->____id_8;
		uint32_t L_1 = __this->___counter_6;
		// return (int)toId;
		return ((int32_t)((int32_t)L_0|((int32_t)((int32_t)L_1<<((int32_t)16)))));
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTSeq::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_reset_m29EA27FE4B7427867E11B5ADCF353D8A832EFF55 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) 
{
	{
		// previous = null;
		__this->___previous_0 = (LTSeq_t67383246739AE03D363848926D97C09D75C87C21*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previous_0), (void*)(LTSeq_t67383246739AE03D363848926D97C09D75C87C21*)NULL);
		// tween = null;
		__this->___tween_2 = (LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tween_2), (void*)(LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483*)NULL);
		// totalDelay = 0f;
		__this->___totalDelay_3 = (0.0f);
		// }
		return;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTSeq::init(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_init_m34A50172CBC26636C33876A6E1B3F3F33CFCEF49 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, uint32_t ___0_id, uint32_t ___1_global_counter, const RuntimeMethod* method) 
{
	{
		// reset();
		LTSeq_reset_m29EA27FE4B7427867E11B5ADCF353D8A832EFF55(__this, NULL);
		// _id = id;
		uint32_t L_0 = ___0_id;
		__this->____id_8 = L_0;
		// counter = global_counter;
		uint32_t L_1 = ___1_global_counter;
		__this->___counter_6 = L_1;
		// this.current = this;
		__this->___current_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)__this);
		// }
		return;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::addOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LTSeq_t67383246739AE03D363848926D97C09D75C87C21* V_0 = NULL;
	{
		// this.current.toggle = true;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_0 = __this->___current_1;
		NullCheck(L_0);
		L_0->___toggle_7 = (bool)1;
		// LTSeq lastCurrent = this.current;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_1 = __this->___current_1;
		V_0 = L_1;
		// this.current = LeanTween.sequence(true);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_2;
		L_2 = LeanTween_sequence_m5881DCD6F4CD3DA8633512CD4F476E699A3CF66A((bool)1, NULL);
		__this->___current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)L_2);
		// this.current.previous = lastCurrent;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_3 = __this->___current_1;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_4 = V_0;
		NullCheck(L_3);
		L_3->___previous_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___previous_0), (void*)L_4);
		// lastCurrent.toggle = false;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_5 = V_0;
		NullCheck(L_5);
		L_5->___toggle_7 = (bool)0;
		// this.current.totalDelay = lastCurrent.totalDelay;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_6 = __this->___current_1;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_7 = V_0;
		NullCheck(L_7);
		float L_8 = L_7->___totalDelay_3;
		NullCheck(L_6);
		L_6->___totalDelay_3 = L_8;
		// this.current.debugIter = lastCurrent.debugIter + 1;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_9 = __this->___current_1;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___debugIter_5;
		NullCheck(L_9);
		L_9->___debugIter_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// return current;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_12 = __this->___current_1;
		return L_12;
	}
}
// System.Single LionStudios.Suite.Core.LeanTween.LTSeq::addPreviousDelays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LTSeq_addPreviousDelays_mA58D4BAD058DFC256ED8AEDCCAD7371E5B6D9466 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) 
{
	LTSeq_t67383246739AE03D363848926D97C09D75C87C21* V_0 = NULL;
	{
		// LTSeq prev = this.current.previous;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_0 = __this->___current_1;
		NullCheck(L_0);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_1 = L_0->___previous_0;
		V_0 = L_1;
		// if (prev != null && prev.tween != null)
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_3 = V_0;
		NullCheck(L_3);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_4 = L_3->___tween_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return this.current.totalDelay + prev.tween.time;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_5 = __this->___current_1;
		NullCheck(L_5);
		float L_6 = L_5->___totalDelay_3;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_7 = V_0;
		NullCheck(L_7);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_8 = L_7->___tween_2;
		NullCheck(L_8);
		float L_9 = L_8->___time_14;
		return ((float)il2cpp_codegen_add(L_6, L_9));
	}

IL_002f:
	{
		// return this.current.totalDelay;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_10 = __this->___current_1;
		NullCheck(L_10);
		float L_11 = L_10->___totalDelay_3;
		return L_11;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_append_m4A019FF2A43A4B805C74E12D97271BBDB894BC55 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, float ___0_delay, const RuntimeMethod* method) 
{
	{
		// this.current.totalDelay += delay;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_0 = __this->___current_1;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_1 = L_0;
		NullCheck(L_1);
		float L_2 = L_1->___totalDelay_3;
		float L_3 = ___0_delay;
		NullCheck(L_1);
		L_1->___totalDelay_3 = ((float)il2cpp_codegen_add(L_2, L_3));
		// return this.current;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_4 = __this->___current_1;
		return L_4;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::append(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_append_mC2106A08D2C2FEFBF6B4C903C241F4ADD8DC6C79 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* V_0 = NULL;
	{
		// LTDescr newTween = LeanTween.delayedCall(0f, callback);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_1;
		L_1 = LeanTween_delayedCall_mC33706706A179EDDA57C5D0410C1B89253A4E82A((0.0f), L_0, NULL);
		V_0 = L_1;
		// return append(newTween);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_2 = V_0;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_3;
		L_3 = LTSeq_append_m3236A76FEB31AC8B5403305B89DA7A0F579F26C4(__this, L_2, NULL);
		return L_3;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::append(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_append_m18C994BFD3EFE474049B89377948883408F93482 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callback, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// append(LeanTween.delayedCall(0f, callback).setOnCompleteParam(obj));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_1;
		L_1 = LeanTween_delayedCall_m6A9E5242E2CFD714FF954260473334F1FE411DF1((0.0f), L_0, NULL);
		RuntimeObject* L_2 = ___1_obj;
		NullCheck(L_1);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_3;
		L_3 = LTDescr_setOnCompleteParam_m9EFDF79B19D2A53F528D8549E85E1E2C90C4EDB2(L_1, L_2, NULL);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_4;
		L_4 = LTSeq_append_m3236A76FEB31AC8B5403305B89DA7A0F579F26C4(__this, L_3, NULL);
		// return addOn();
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_5;
		L_5 = LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A(__this, NULL);
		return L_5;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::append(UnityEngine.GameObject,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_append_m087B0334EC2C1F7C7DFD7A93CCA2DDB02CCB5D3B (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// append(LeanTween.delayedCall(gameObject, 0f, callback));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___1_callback;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_2;
		L_2 = LeanTween_delayedCall_mE1C750C67C1E7C6D1980EE83BCF85147A32D7A3E(L_0, (0.0f), L_1, NULL);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_3;
		L_3 = LTSeq_append_m3236A76FEB31AC8B5403305B89DA7A0F579F26C4(__this, L_2, NULL);
		// return addOn();
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_4;
		L_4 = LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A(__this, NULL);
		return L_4;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::append(UnityEngine.GameObject,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_append_m41DC5685B15F8B68F4D0362118E3616D1B4418EC (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// append(LeanTween.delayedCall(gameObject, 0f, callback).setOnCompleteParam(obj));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___1_callback;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_t35FD4CCF4D5456DF9CC5B9228A99EF52DABA09B2_il2cpp_TypeInfo_var);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_2;
		L_2 = LeanTween_delayedCall_m893DFAC462119AD1A6DB62F4A05B925E4CC5C770(L_0, (0.0f), L_1, NULL);
		RuntimeObject* L_3 = ___2_obj;
		NullCheck(L_2);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_4;
		L_4 = LTDescr_setOnCompleteParam_m9EFDF79B19D2A53F528D8549E85E1E2C90C4EDB2(L_2, L_3, NULL);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_5;
		L_5 = LTSeq_append_m3236A76FEB31AC8B5403305B89DA7A0F579F26C4(__this, L_4, NULL);
		// return addOn();
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_6;
		L_6 = LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A(__this, NULL);
		return L_6;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::append(LionStudios.Suite.Core.LeanTween.LTDescr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_append_m3236A76FEB31AC8B5403305B89DA7A0F579F26C4 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* ___0_tween, const RuntimeMethod* method) 
{
	{
		// this.current.tween = tween;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_0 = __this->___current_1;
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_1 = ___0_tween;
		NullCheck(L_0);
		L_0->___tween_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tween_2), (void*)L_1);
		// this.current.totalDelay = addPreviousDelays();
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_2 = __this->___current_1;
		float L_3;
		L_3 = LTSeq_addPreviousDelays_mA58D4BAD058DFC256ED8AEDCCAD7371E5B6D9466(__this, NULL);
		NullCheck(L_2);
		L_2->___totalDelay_3 = L_3;
		// tween.setDelay(this.current.totalDelay);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_4 = ___0_tween;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_5 = __this->___current_1;
		NullCheck(L_5);
		float L_6 = L_5->___totalDelay_3;
		NullCheck(L_4);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_7;
		L_7 = LTDescr_setDelay_m7232D033C73E049E74DF2C0DC405634BC5B8E3D3(L_4, L_6, NULL);
		// return addOn();
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_8;
		L_8 = LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A(__this, NULL);
		return L_8;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::insert(LionStudios.Suite.Core.LeanTween.LTDescr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_insert_m7D99C4AB5D1009B8FA1682A387D731E66C94DBDE (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* ___0_tween, const RuntimeMethod* method) 
{
	{
		// this.current.tween = tween;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_0 = __this->___current_1;
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_1 = ___0_tween;
		NullCheck(L_0);
		L_0->___tween_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tween_2), (void*)L_1);
		// tween.setDelay(addPreviousDelays());
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_2 = ___0_tween;
		float L_3;
		L_3 = LTSeq_addPreviousDelays_mA58D4BAD058DFC256ED8AEDCCAD7371E5B6D9466(__this, NULL);
		NullCheck(L_2);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_4;
		L_4 = LTDescr_setDelay_m7232D033C73E049E74DF2C0DC405634BC5B8E3D3(L_2, L_3, NULL);
		// return addOn();
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_5;
		L_5 = LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A(__this, NULL);
		return L_5;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::setScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_setScale_m0682E06A09C02A6684E9640A99209A772B40D30B (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, float ___0_timeScale, const RuntimeMethod* method) 
{
	{
		// setScaleRecursive(this.current, timeScale, 500);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_0 = __this->___current_1;
		float L_1 = ___0_timeScale;
		LTSeq_setScaleRecursive_m337767A62F0781F29F34EB878F3165A42D04A5D0(__this, L_0, L_1, ((int32_t)500), NULL);
		// return addOn();
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_2;
		L_2 = LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A(__this, NULL);
		return L_2;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTSeq::setScaleRecursive(LionStudios.Suite.Core.LeanTween.LTSeq,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_setScaleRecursive_m337767A62F0781F29F34EB878F3165A42D04A5D0 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, LTSeq_t67383246739AE03D363848926D97C09D75C87C21* ___0_seq, float ___1_timeScale, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		// if (count > 0)
		int32_t L_0 = ___2_count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		// this.timeScale = timeScale;
		float L_1 = ___1_timeScale;
		__this->___timeScale_4 = L_1;
		// seq.totalDelay *= timeScale;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_2 = ___0_seq;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_3 = L_2;
		NullCheck(L_3);
		float L_4 = L_3->___totalDelay_3;
		float L_5 = ___1_timeScale;
		NullCheck(L_3);
		L_3->___totalDelay_3 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// if (seq.tween != null)
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_6 = ___0_seq;
		NullCheck(L_6);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_7 = L_6->___tween_2;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		// if (seq.tween.time != 0f)
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_8 = ___0_seq;
		NullCheck(L_8);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_9 = L_8->___tween_2;
		NullCheck(L_9);
		float L_10 = L_9->___time_14;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		// seq.tween.setTime(seq.tween.time * timeScale);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_11 = ___0_seq;
		NullCheck(L_11);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_12 = L_11->___tween_2;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_13 = ___0_seq;
		NullCheck(L_13);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_14 = L_13->___tween_2;
		NullCheck(L_14);
		float L_15 = L_14->___time_14;
		float L_16 = ___1_timeScale;
		NullCheck(L_12);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_17;
		L_17 = LTDescr_setTime_m957079BFC083672EC2B688C39BB33B2930A1A59F(L_12, ((float)il2cpp_codegen_multiply(L_15, L_16)), NULL);
	}

IL_004c:
	{
		// seq.tween.setDelay(seq.tween.delay * timeScale);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_18 = ___0_seq;
		NullCheck(L_18);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_19 = L_18->___tween_2;
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_20 = ___0_seq;
		NullCheck(L_20);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_21 = L_20->___tween_2;
		NullCheck(L_21);
		float L_22 = L_21->___delay_13;
		float L_23 = ___1_timeScale;
		NullCheck(L_19);
		LTDescr_tF156F8902F0D8C1235A679DD100EE3B0AF90E483* L_24;
		L_24 = LTDescr_setDelay_m7232D033C73E049E74DF2C0DC405634BC5B8E3D3(L_19, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
	}

IL_0065:
	{
		// if (seq.previous != null)
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_25 = ___0_seq;
		NullCheck(L_25);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_26 = L_25->___previous_0;
		if (!L_26)
		{
			goto IL_007d;
		}
	}
	{
		// setScaleRecursive(seq.previous, timeScale, count - 1);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_27 = ___0_seq;
		NullCheck(L_27);
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_28 = L_27->___previous_0;
		float L_29 = ___1_timeScale;
		int32_t L_30 = ___2_count;
		LTSeq_setScaleRecursive_m337767A62F0781F29F34EB878F3165A42D04A5D0(__this, L_28, L_29, ((int32_t)il2cpp_codegen_subtract(L_30, 1)), NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// LionStudios.Suite.Core.LeanTween.LTSeq LionStudios.Suite.Core.LeanTween.LTSeq::reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_t67383246739AE03D363848926D97C09D75C87C21* LTSeq_reverse_mF0E98CB2E2931F365F9AA0C51008241C95643598 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) 
{
	{
		// return addOn();
		LTSeq_t67383246739AE03D363848926D97C09D75C87C21* L_0;
		L_0 = LTSeq_addOn_m32E839DBD0A3D7E996E2C9DAEC8D42405970886A(__this, NULL);
		return L_0;
	}
}
// System.Void LionStudios.Suite.Core.LeanTween.LTSeq::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq__ctor_m29408183FCBC83D2B13FBF0851CA4629C2750A20 (LTSeq_t67383246739AE03D363848926D97C09D75C87C21* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloat_mCD1418A25CBFDAE2A60BED2D699C1AECAF975F59_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float> onUpdateFloat { get; set; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ___0_value;
		__this->___U3ConUpdateFloatU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatRatio_mF7CE5F547761125B8129AA7BE1C54CAFAA76729E_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float, float> onUpdateFloatRatio { get; set; }
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_0 = ___0_value;
		__this->___U3ConUpdateFloatRatioU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatRatioU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector2_m1E74811DAABC192E628E013C7F1E867A97E75FDF_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector2> onUpdateVector2 { get; set; }
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = ___0_value;
		__this->___U3ConUpdateVector2U3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector2U3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3_m617A4999EFA797975E6E8463A98ADB2AE91CFCDB_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3> onUpdateVector3 { get; set; }
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_0 = ___0_value;
		__this->___U3ConUpdateVector3U3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector3U3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatObject_mA686BF5B9A0D707129E289F8A04B1FBEA86311C9_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float, object> onUpdateFloatObject { get; set; }
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_0 = ___0_value;
		__this->___U3ConUpdateFloatObjectU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatObjectU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3Object_mCC635C1E59C6D9B8D1236D0D7372154D20EF1090_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3, object> onUpdateVector3Object { get; set; }
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_0 = ___0_value;
		__this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateColor_m15D9DE0B92787A56EA6405B1927A004962E5FCFE_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Color> onUpdateColor { get; set; }
		Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* L_0 = ___0_value;
		__this->___U3ConUpdateColorU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateColorU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onComplete_m5DEFCB9BD43E3C90D89D57A838C94FF2CFC40E3E_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action onComplete { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_value;
		__this->___U3ConCompleteU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteObject_m92613618D223C9F1FF960045E951F67F96E8D238_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<object> onCompleteObject { get; set; }
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_value;
		__this->___U3ConCompleteObjectU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteObjectU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteParam_mC38824C41B1A97CB415B4A172E06DCF7E997295B_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object onCompleteParam { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3ConCompleteParamU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteParamU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onStart_mE3012A39C85062262704AD97AEADEAD6862707CE_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action onStart { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_value;
		__this->___U3ConStartU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConStartU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_point_mB263845D27528D7B806BFBB88BC0260CF6CEA50A_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CpointU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* LTDescrOptional_get_onUpdateFloat_mD6FAC7E569B21654282EE1174BD562F53541EFDE_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float> onUpdateFloat { get; set; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___U3ConUpdateFloatU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* LTDescrOptional_get_onUpdateFloatRatio_mC5CA32A486BD4E9C61A413B17D16327CDAC3C0FF_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float, float> onUpdateFloatRatio { get; set; }
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_0 = __this->___U3ConUpdateFloatRatioU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* LTDescrOptional_get_onUpdateFloatObject_mC757D656EBA9690AD1B6A806D52C52BDC638C14B_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float, object> onUpdateFloatObject { get; set; }
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_0 = __this->___U3ConUpdateFloatObjectU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LTDescrOptional_get_onUpdateParam_m6EAB545A4979A838159FC88716882E8F598B18CC_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public object onUpdateParam { get; set; }
		RuntimeObject* L_0 = __this->___U3ConUpdateParamU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* LTDescrOptional_get_onUpdateVector3Object_m256A7B87C144E47F3AB4030F2DE3D696AEE8C4F6_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3, object> onUpdateVector3Object { get; set; }
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_0 = __this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* LTDescrOptional_get_onUpdateVector3_m05E715577E131F9C72D188039983602439B8FFCA_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3> onUpdateVector3 { get; set; }
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_0 = __this->___U3ConUpdateVector3U3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* LTDescrOptional_get_onUpdateVector2_mF12B4CDB127AEB7BEDFBFFF7CFB7A428A58A57C0_inline (LTDescrOptional_tF70EB6CF86D11B8C29F70D6E6D802FBD7DB43A04* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector2> onUpdateVector2 { get; set; }
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = __this->___U3ConUpdateVector2U3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_gshared_inline (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_gshared_inline (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* __this, float ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_gshared_inline (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
