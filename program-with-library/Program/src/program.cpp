#include "SomeLibrary/my_function.hpp"

namespace P {
	int return_eight() {
		return SomeLibrary::return_four() + 4;
	}
}
