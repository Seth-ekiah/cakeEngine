#include "vector.hpp"

float Vector2f::getAngle(void) {
	return std::atan2(this->y, this->x);
}

float Vector2f::getMagnitude(void) {
	return std::sqrt(this->x * this->x + this->y * this->y);
}

Vector2f Vector2f::normalized(void) {
	return *this / this->getMagnitude();
}

Vector2f& operator +=(Vector2f& lhs, const Vector2f& rhs) {
	lhs.x += rhs.x;
	lhs.y += rhs.y;
	return lhs;
}

Vector2f& operator -=(Vector2f& lhs, const Vector2f& rhs) {
	lhs.x -= rhs.x;
	lhs.y -= rhs.y;
	return lhs;
}

Vector2f& operator *=(Vector2f& lhs, float rhs) {
	lhs.x *= rhs;
	lhs.y *= rhs;
	return lhs;
}

Vector2f& operator /=(Vector2f& lhs, float rhs) {
	lhs.x /= rhs;
	lhs.y /= rhs;
	return lhs;
}

Vector2f operator +(Vector2f lhs, const Vector2f& rhs) {
	return lhs += rhs;
}

Vector2f operator -(Vector2f lhs, const Vector2f& rhs) {
	return lhs -= rhs;
}

Vector2f operator *(Vector2f lhs, float rhs) {
	return lhs *= rhs;
}

Vector2f operator /(Vector2f lhs, float rhs) {
	return lhs /= rhs;
}

std::ostream& operator <<(std::ostream& os, const  Vector2f& object) {
	os << "{" << object.x << ", " << object.y <<  "}";
	return os;
} 