namespace Features.CharacterMovement
{
    public interface ISFighter
    {
        public int HitPower { get; set; }
        public int Health { get; set; }
        int GiveDamage(int value);
        void Attack(ISFighter fighter);
        void Death();
    }
}