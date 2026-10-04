export module arrays;
import std;

export void cArray() {
	// Zero-initialized C-style array.
	int scores[5] {};

	std::println("size of scores: {}", std::size(scores)); // as of C++17, we can get its size easily.
	std::println("size of scores: {}", sizeof(scores) / sizeof(int)); // older way to get the size.
	std::println("value of scores[0]: {}", scores[0]);

	std::println();
}

export void stdArray() {
	// A wrapper around C-style array, which also knows its size.
	std::array<int, 5> scores { 2, 3, 5, 8, 10 };
	std::println("size of scores: {}", scores.size());
	std::println("value of scores[0]: {}", scores[0]);
	std::println("scores array: {}", scores); // we can print it directly as well.

	std::println();
}

export void stdVector() {
	// A dynamically growing/shrinking C++ container.
	std::vector<int> numbers { 10, 20 };
	numbers.push_back(30);
	numbers.push_back(40);
	std::println("size of numbers: {}", numbers.size());
	std::println("value of numbers[0]: {}", numbers[0]);
	std::println("numbers array: {}", numbers);

	std::println();
}

export void arrayDecay(int* cArr) {
	std::println("arrays decay into regular pointers when passed as a function parameter.");
}
