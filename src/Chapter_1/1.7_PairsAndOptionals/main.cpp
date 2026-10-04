import pairs;
import optionals;
import std;

using namespace std;

int main() {
	// Using structured bindings, we can decompose pairs and more.
	auto [xPos, yPos] { returnCoordinates() };
	println("({}, {})", xPos, yPos);

	auto optionalReturn { someOperation(true) };
	std::println("return is: {}", optionalReturn.value_or(0)); // fallback value
}
