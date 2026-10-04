import audio;
import std;
using namespace std;

// Creating an alias to avoid typing the full namespace
namespace audio = game::audio;

int main() {
	audio::playSound();
	return 0;
}
