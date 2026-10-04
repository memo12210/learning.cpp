import attributes;
import std;

using namespace std;

int main() {
	// We cannot ignore the return value.
	auto returnValue { attributes::someOperation(true) };
	println("the return value of someOperation: {}", returnValue);

	// attributes::oldOperation();
	println("{}", attributes::divideBy32(4));
	attributes::erroneousOperation();

	return 0;
}
