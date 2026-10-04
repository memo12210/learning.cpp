export module variables;
import std;

export void literals() {
	// Uninitialized primitives contain whatever value was in memory.
	int uninitialized;
	std::println("uninitialized: {}", uninitialized);

	int initialized {}; // value initialized to 0
	std::println("initialized: {}", initialized);

	// Uniform initialization prevents narrowing conversions.
	int veryLargeNumber { 1234'5678'90 };
	float precise { 0.123'456f };

	std::println("very large number: {}", veryLargeNumber);
	std::println("precise: {}", precise);
}

export void typeLimits() {
	// To inspect numerical limits, we use <limits>.
	std::println("Max int: {}", std::numeric_limits<int>::max());
	std::println("Min int: {}", std::numeric_limits<int>::min());
	std::println("Lowest double: {}", std::numeric_limits<double>::lowest());
}
