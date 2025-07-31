#include "matrix.hpp"

void Matrix3x3f::setPosition(Vector2f position) {
	this->data[2] = position.x;
	this->data[5] = position.y;
}

Vector2f Matrix3x3f::getPosition() {
	return {this->data[2], this->data[5]};
}

Vector2f Matrix3x3f::getRotation(void) {
	return (Vector2f{this->data[4], this->data[3]}).normalized();
}

Vector2f Matrix3x3f::getScale(void) {
	return {1, 1};
}

void Matrix3x3f::setRotation(Vector2f rotation) {

}

void Matrix3x3f::setScale(Vector2f scale) {

}


std::ostream& operator <<(std::ostream& os, const Matrix3x3f& object) {
	os << "| " << object.data[0] << ", " << object.data[1] << ", " << object.data[2] << " |\n" <<
	 "| " << object.data[3] << ", " << object.data[4] << ", " << object.data[5] << " |\n" <<
	 "| " << object.data[6] << ", " << object.data[7] << ", " << object.data[8] << " |";

	 return os;
}