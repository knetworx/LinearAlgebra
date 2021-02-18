#ifndef __VECN__
#define __VECN__

#include <cmath>
#include <cstdarg>
#include <initializer_list>
#include <ostream>
#include <vector>

struct VecN {
	std::vector<double> elems;

	VecN(std::initializer_list<double> l) : elems(l) {}
	VecN(const VecN &v)
	{
		elems = v.elems;
	}

	VecN &operator =(const VecN &v) { elems = v.elems; return *this; }

	bool operator ==(const VecN &v)
	{
		for (uint i = 0; i < elems.size(); ++i)
		{
			if (elems[i] != v.elems[i])
			{
				return false;
			}
		}
		return true;
	}

	bool operator !=(const VecN &v)
	{
		for (uint i = 0; i < elems.size(); ++i)
		{
			if (elems[i] == v.elems[i])
			{
				return false;
			}
		}
		return true;
	}

	VecN operator -()
	{
		VecN n = VecN(*this);
		for (uint i = 0; i < elems.size(); ++i)
		{
			n.elems[i] = -elems[i];
		}
		return n;
	}

	VecN operator -(const VecN &v)
	{
		VecN n = VecN(*this);
		for (uint i = 0; i < elems.size(); ++i)
		{
			n.elems[i] -= v.elems[i];
		}
		return n;
	}
	
	VecN &operator -=(const VecN &v)
	{
		for (uint i = 0; i < elems.size(); ++i)
		{
			elems[i] -= v.elems[i];
		}
		return *this;
	}

	VecN operator +(const VecN &v)
	{
		VecN n = VecN(*this);
		for (uint i = 0; i < elems.size(); ++i)
		{
			n.elems[i] += v.elems[i];
		}
		return n;
	}

	VecN &operator +=(const VecN &v)
	{
		for (uint i = 0; i < elems.size(); ++i)
		{
			elems[i] += v.elems[i];
		}
		return *this;
	}

	VecN operator /(const double d)
	{
		VecN n = VecN(*this);
		for (uint i = 0; i < elems.size(); ++i)
		{
			n.elems[i] /= d;
		}
		return n;
	}

	VecN &operator /=(double d)
	{
		for (uint i = 0; i < elems.size(); ++i)
		{
			elems[i] /= d;
		}
		return *this;
	}

	VecN operator *(const double d)
	{
		VecN n = VecN(*this);
		for (uint i = 0; i < elems.size(); ++i)
		{
			n.elems[i] *= d;
		}
		return n;
	}

	VecN &operator *=(double d)
	{
		for (uint i = 0; i < elems.size(); ++i)
		{
			elems[i] *= d;
		}
		return *this;
	}

	double operator *(const VecN &v) // dot product
	{
		double dot = 0;
		for (uint i = 0; i < elems.size(); ++i)
		{
			dot += elems[i] * v.elems[i];
		}
		return dot;
	}
	
	double operator !() { return sqrt(*this * *this); } // magnitude
	
	VecN operator ~() // normalize
	{
		double mag = !*this; if (mag == 0) { return *this; } return *this / mag;
	}
	
	double dotProduct(VecN &v) { return *this * v; }
	double magnitude() { return !*this; }
	VecN normalized() { return ~*this; }
};

std::ostream &operator<<(std::ostream& os, const VecN &v)
{
	if (v.elems.size() == 0)
	{
		os << "()";
		return os;
	}
	os << "(" << v.elems[0];
	for (uint i = 1; i < v.elems.size(); ++i)
	{
		os << ", " << v.elems[i];
	}
	os << ")";
	return os;
}

#endif // __VECN__