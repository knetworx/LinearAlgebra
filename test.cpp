#include "types/Vec3.hpp"
#include "types/VecN.hpp"
#include <iostream>

using namespace std;

int main() {
	Vec3 v = Vec3(1, 2, 3);
	Vec3 w = Vec3(-1, 5, 1);
	cout << "v = " << v << endl;
	cout << "w = " << w << endl;
	cout << "v + w = " << v + w << endl;
	cout << "Dot product = " << v * w << endl;
	cout << "Cross product = " << (v ^ w) << endl;
	cout << "Normalized v = " << ~v << endl;
	cout << "Normalized w = " << ~w << endl;
	cout << "|v| = " << !v << endl;
	cout << "|w| = " << !w << endl;
	cout << "Origin = " << VEC3_ORIGIN << endl;

	VecN v4{1, 2, 3, 4};
	VecN w4{5, -1, 3, 7};
	cout << "v4 = " << v4 << endl;
	cout << "w4 = " << w4 << endl;
	cout << "v4 + w4 = " << v4 + w4 << endl;
	cout << "Dot product = " << v4 * w4 << endl;
	cout << "Normalized v4 = " << ~v4 << endl;
	cout << "Normalized w4 = " << ~w4 << endl;
	cout << "|v4| = " << !v4 << endl;
	cout << "|w4| = " << !w4 << endl;
	cout << "-w4 = " << -w4 << endl;
	cout << "w4 == w4 ? " << (w4 == w4) << endl;
	cout << "w4 == -w4 ? " << (w4 == -w4) << endl;
	cout << "w4 != w4 ? " << (w4 != w4) << endl;
	cout << "w4 != -w4 ? " << (w4 != -w4) << endl;
}