#pragma once
#include <iostream>

#include "vector.hpp"

/**
 * @brief      This class describes a matrix 3 x 3 f.
 */
class Matrix3x3f {
private:
	float data[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};

public:
	Vector2f getPosition(void);
	Vector2f getRotation(void);
	Vector2f getScale(void);

	void setPosition(Vector2f position);
	void setRotation(Vector2f rotation);
	void setScale(Vector2f scale);

	// friend Matrix3x3f operator *=(Matrix3x3f lhs, Matrix3x3f rhs) {

	// }

	/**
	 * @brief      Stream insertion operator overload
	 *
	 * @param      os      The outstream
	 * @param[in]  object  The Matrix3x3f object to be inserted into the stream
	 *
	 * @return     The output stream
	 */
	friend std::ostream& operator <<(std::ostream& os, const Matrix3x3f& object);
};