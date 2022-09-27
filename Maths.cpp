#include "Maths.h"

Vec2::Vec2() :
	x(0), y(0)
{
}

Vec2::Vec2(int _x, int _y):
	x(_x), y(_y)
{
}

Vec2::Vec2(const Vec2& other) :
	x(other.x), y(other.y)
{
}

Vec2 Vec2::operator+(const Vec2& other)
{
	return Vec2(this->x + other.x, this->y + other.y);
}

Vec2 Vec2::operator-(const Vec2& other)
{
	Vec2 result;
	result.x = this->x - other.x;
	result.y = this->y - other.y;
	return Vec2();
}

std::ostream& operator<<(std::ostream& os, const Vec2& point) {
	os << point.x << ", " << point.y;
	return os;
}