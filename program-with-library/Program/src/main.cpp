#include <cstdio>
#include "SomeLibrary/my_function.hpp"
#include "program.hpp"

int main() {
	SomeLibrary::cool_function();
	std::printf("%d\n", P::return_eight());
	return 0;
}
