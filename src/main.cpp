import std;
using namespace std;

optional<int> foo() {
#ifdef NDEBUG
  return 42;
#else
  return nullopt;
#endif
}

int main() {
  auto x { foo() };
  println("{}", x.value_or(0));
  return 0;
}
