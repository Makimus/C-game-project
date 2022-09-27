#pragma once
#include <iostream>

class Vec2
{
public:
	Vec2();
	Vec2(int _x, int _y);
	Vec2(const Vec2& other);

	Vec2 operator+(const Vec2& other);
	Vec2 operator-(const Vec2& other);
	friend std::ostream& operator<<(std::ostream& os, const Vec2& point);

private:
	int x;
	int y;
};

