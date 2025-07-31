#pragma once

#include <iostream>
#include <cmath>

class Vector2f {
private:

public:
	float x = 0;
	float y = 0;

	Vector2f (void) {}
	Vector2f (float _x, float _y) : x{_x}, y{_y} {}

	/**
	 * @brief      Gets the angle of the vector
	 *
	 * @return     The angle in radians
	 */
	float getAngle(void);

	/**
	 * @brief      Gets the magnitude of the vector
	 *
	 * @return     The magnitude
	 */
	float getMagnitude(void);

	/**
	 * @brief      Gets the normalized version of the vector
	 *
	 * @return     The normalized vector
	 */
	Vector2f normalized(void);

	/**
	 * @brief      Addition assignment operator.
	 *
	 * @param      lhs   The left hand side
	 * @param[in]  rhs   The right hand side
	 *
	 * @return     The result of the addition assignment
	 */
	friend Vector2f& operator +=(Vector2f& lhs, const Vector2f& rhs);

	/**
	 * @brief      Subtraction assignment operator.
	 *
	 * @param      lhs   The left hand side
	 * @param[in]  rhs   The right hand side
	 *
	 * @return     The result of the subtraction assignment
	 */
	friend Vector2f& operator -=(Vector2f& lhs, const Vector2f& rhs); 

	/**
	 * @brief      Multiplication assignment operator.
	 *
	 * @param      lhs   The left hand side
	 * @param[in]  rhs   The right hand side
	 *
	 * @return     The result of the multiplication assignment
	 */
	friend Vector2f& operator *=(Vector2f& lhs, float rhs);
	
	/**
	 * @brief      Division assignment operator.
	 *
	 * @param      lhs   The left hand side
	 * @param[in]  rhs   The right hand side
	 *
	 * @return     The result of the division assignment
	 */
	friend Vector2f& operator /=(Vector2f& lhs, float rhs);

	/**
	 * @brief      Addition operator.
	 *
	 * @param[in]  lhs   The left hand side
	 * @param[in]  rhs   The right hand side
	 *
	 * @return     The result of the addition
	 */
	friend Vector2f operator +(Vector2f lhs, const Vector2f& rhs);

	/**
	 * @brief      Subtraction operator.
	 *
	 * @param[in]  lhs   The left hand side
	 * @param[in]  rhs   The right hand side
	 *
	 * @return     The result of the subtraction
	 */
	friend Vector2f operator -(Vector2f lhs, const Vector2f& rhs);

	/**
	 * @brief      Multiplication operator.
	 *
	 * @param[in]  lhs   The left hand side
	 * @param[in]  rhs   The right hand side
	 *
	 * @return     The result of the multiplication
	 */
	friend Vector2f operator *(Vector2f lhs, float rhs);

	/**
	 * @brief      Division operator.
	 *
	 * @param[in]  lhs   The left hand side
	 * @param[in]  rhs   The right hand side
	 *
	 * @return     The result of the division
	 */
	friend Vector2f operator /(Vector2f lhs, float rhs);

	/**
	 * @brief      Stream insertion operator.
	 *
	 * @param      os      The output stream
	 * @param[in]  object  The object to be inserted into the stream
	 *
	 * @return     The output stream
	 */
	friend std::ostream& operator <<(std::ostream& os, const  Vector2f& object);
};