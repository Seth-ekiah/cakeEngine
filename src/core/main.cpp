#include <iostream>

#include "../math/matrix.hpp"

int main(int argc, char const *argv[])
{
	// Vector2f test{1, 1};
	// Vector2f test2{2, 4};

	// std::cout << test.normalized() << std::endl;

	Matrix3x3f test;
	test.setPosition({69, 420});
	std::cout << test.getRotation() << std::endl;
	return 0;
}