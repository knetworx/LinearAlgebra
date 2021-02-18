#ifndef __VEC3__
#define __VEC3__

#include <cmath>
#include <ostream>

class Vec3 {
public:
	double x, y, z;

	Vec3() : x(0), y(0), z(0) {}
	Vec3(double x, double y, double z) : x(x), y(y), z(z) {}
	Vec3(const Vec3 &v) : x(v.x), y(v.y), z(v.z) {}

	Vec3 &operator =(const Vec3 &v) { x = v.x; y = v.y; z = v.z; return *this; }
	bool operator ==(const Vec3 &v) { return x == v.x && y == v.y && z == v.z; }
	bool operator !=(const Vec3 &v) { return x != v.x || y != v.y || z != v.z; }
	Vec3 operator -() { return Vec3(-x, -y, -z); }
	Vec3 operator -(const Vec3 &v) { return Vec3(x - v.x, y - v.y, z - v.z); }
	Vec3 &operator -=(const Vec3 &v) { x -= v.x; y -= v.y; z -= v.z; return *this; }
	Vec3 operator +(const Vec3 &v) { return Vec3(x + v.x, y + v.y, z + v.z); }
	Vec3 &operator +=(const Vec3 &v) { x += v.x; y += v.y; z += v.z; return *this; }
	Vec3 operator /(const double d) { return Vec3(x / d, y / d, z / d); }
	Vec3 &operator /=(const double d) { x /= d; y /= d; z /= d; return *this; }
	Vec3 operator *(const double d) { return Vec3(x * d, y * d, z * d); }
	Vec3 &operator *=(const double d) { x *= d; y *= d; z *= d; return *this; }

	double operator *(const Vec3 &v) { return x * v.x + y * v.y + z * v.z; } // dot product
	Vec3 operator ^(const Vec3 &v) { return Vec3(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x); } // cross product
	double operator !() { return sqrt(*this * *this); } // magnitude
	Vec3 operator ~() { double mag = !*this; if (mag == 0) { return *this; } return *this / mag; } // normalize
	
	double dotProduct(Vec3 &v) { return *this * v; }
	Vec3 crossProduct(Vec3 &v) { return *this ^ v; }
	double magnitude() { return !*this; }
	Vec3 normalized() { return ~*this; }
};

static const Vec3 VEC3_ORIGIN;

std::ostream &operator<<(std::ostream& os, const Vec3 &v)
{
	os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
	return os;
}

#endif // __VEC3__