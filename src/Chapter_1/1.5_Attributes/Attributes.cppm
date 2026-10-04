export module attributes;
import std;

export namespace attributes {
	// This function's return value is important!
	[[nodiscard("Return value of someOperation() must not be ignored!")]]
	int someOperation(bool someCondition) {
		if (!someCondition)
			return 0; // operation failed

		return 1; // operation was successful
	}

	// This function may not be used anywhere.
	[[maybe_unused]]
	void optionalOperation() {
		std::println("yay! someone called me.");
	}

	// This function is deprecated.
	[[deprecated("Use newOperaton() instead.")]]
	void oldOperation() {
		std::println("I'm getting too old for this.");
	}

	// This function never returns back to the call site.
	[[noreturn]] void erroneousOperation() {
		std::println("we are never going back to the main().");
		std::exit(1);
	}

	int divideBy32(int x) {
		[[assume(x >= 0)]]; // compiler can optimize division into a bit-shift.
		return x / 32;
	}

}; // namespace attributes
