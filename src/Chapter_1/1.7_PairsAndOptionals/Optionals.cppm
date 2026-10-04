export module optionals;
import std;

// std::optional safely holds a value or nothing at all.
export std::optional<int> someOperation(bool someCondition) {
	if (!someCondition)
		return std::nullopt; // returning an empty state instead of a value like -1.

	return 42;
}
