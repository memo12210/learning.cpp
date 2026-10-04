export module functions;
import std;

// A function declaration introduces the signature to the compiler.
export int add(int a, int b);

// You can overload a function if the parameters differ.
export double add(double a, double b);

// A function definition supplies its implementation.
int add(int a, int b) {
	std::println("current function: {}", __func__);
	return a + b;
}

double add(double a, double b) { return a + b; }
