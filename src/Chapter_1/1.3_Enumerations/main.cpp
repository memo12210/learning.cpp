import enums;
import std;

using namespace std;

int main() {
	// Notice there are no collisions by using C++ enums.
	PlayerType playerType { PlayerType::Fighter };
	EnemyType enemyType { EnemyType::Fighter };
	println("player: {}, enemy: {}", (int)playerType, (unsigned char)enemyType);

	return 0;
}
