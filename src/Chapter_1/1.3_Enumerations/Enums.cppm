export module enums;

// Use C++-style enums, which provide scope.
// By default, underlying type of enums are `int`.
export enum class PlayerType { Monk = 1, Bard, Paladin, Fighter, Wizard };

// We can change the underlying type like this:
export enum class EnemyType : unsigned char { Barbarian, Warlock, Fighter, Rogue };
