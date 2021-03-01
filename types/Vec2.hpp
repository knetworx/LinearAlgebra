#ifndef __VEC2__
#define __VEC2__

#include <cmath>
#include <ostream>

struct Vec2 {
	double x, y;

	Vec2() : x(0), y(0) {}
	Vec2(double x, double y) : x(x), y(y) {}
	Vec2(const Vec2 &v) : x(v.x), y(v.y) {}

	Vec2 &operator =(const Vec2 &v) { x = v.x; y = v.y; return *this; }
	bool operator ==(const Vec2 &v) { return x == v.x && y == v.y; }
	bool operator !=(const Vec2 &v) { return x != v.x || y != v.y; }
	Vec2 operator -() { return Vec2(-x, -y); }
	Vec2 operator -(const Vec2 &v) { return Vec2(x - v.x, y - v.y); }
	Vec2 &operator -=(const Vec2 &v) { x -= v.x; y -= v.y; return *this; }
	Vec2 operator +(const Vec2 &v) { return Vec2(x + v.x, y + v.y); }
	Vec2 &operator +=(const Vec2 &v) { x += v.x; y += v.y; return *this; }
	Vec2 operator /(const double d) { return Vec2(x / d, y / d); }
	Vec2 &operator /=(const double d) { x /= d; y /= d; return *this; }
	Vec2 operator *(const double d) { return Vec2(x * d, y * d); }
	Vec2 &operator *=(const double d) { x *= d; y *= d; return *this; }

	double operator *(const Vec2 &v) { return x * v.x + y * v.y; } // dot product
	double operator !() { return sqrt(*this * *this); } // magnitude
	Vec2 operator ~() { double mag = !*this; if (mag == 0) { return *this; } return *this / mag; } // normalize
	
	double dotProduct(Vec2 &v) { return *this * v; }
	double magnitude() { return !*this; }
	Vec2 normalized() { return ~*this; }
};

static const Vec2 VEC2_ORIGIN;

std::ostream &operator<<(std::ostream& os, const Vec2 &v)
{
	os << "(" << v.x << ", " << v.y << ")";
	return os;
}

#endif // __VEC2__