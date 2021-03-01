#include "types/Vec2.hpp"
#include "types/Vec3.hpp"
#include "types/VecN.hpp"
#include <iostream>

using namespace std;

int main() {
	cout << "----- Vec2 -----" << endl;

	Vec2 v2(5, 0);
	Vec2 w2(0, -2);
	cout << "v2 = " << v2 << endl;
	cout << "w2 = " << w2 << endl;
	cout << "v2 + w2 = " << v2 + w2 << endl;
	cout << "Dot product = " << v2 * w2 << endl;
	cout << "Normalized v2 = " << ~v2 << endl;
	cout << "Normalized w2 = " << ~w2 << endl;
	cout << "|v2| = " << !v2 << endl;
	cout << "|w2| = " << !w2 << endl;
	cout << "w2 == w2 ? " << (w2 == w2) << endl;
	cout << "w2 == -w2 ? " << (w2 == -w2) << endl;
	cout << "w2 != w2 ? " << (w2 != w2) << endl;
	cout << "w2 != -w2 ? " << (w2 != -w2) << endl;
	cout << "Origin = " << VEC2_ORIGIN << endl;

	cout << "----- Vec3 -----" << endl;

	Vec3 v3(1, 2, 3);
	Vec3 w3(-1, 5, 1);
	cout << "v3 = " << v3 << endl;
	cout << "w3 = " << w3 << endl;
	cout << "v3 + w3 = " << v3 + w3 << endl;
	cout << "Dot product = " << v3 * w3 << endl;
	cout << "Cross product = " << (v3 ^ w3) << endl;
	cout << "Normalized v3 = " << ~v3 << endl;
	cout << "Normalized w3 = " << ~w3 << endl;
	cout << "|v3| = " << !v3 << endl;
	cout << "|w3| = " << !w3 << endl;
	cout << "w3 == w3 ? " << (w3 == w3) << endl;
	cout << "w3 == -w3 ? " << (w3 == -w3) << endl;
	cout << "w3 != w3 ? " << (w3 != w3) << endl;
	cout << "w3 != -w3 ? " << (w3 != -w3) << endl;
	cout << "Origin = " << VEC3_ORIGIN << endl;

	Vec3 right(5, 0, 0);
	Vec3 forward(0, 5, 0);
	Vec3 up(0, 0, 5);
	cout << "Right = " << right << " = " << ~Vec3::getRightVec(forward, up) << endl;
	cout << "Forward = " << forward << " = " << ~Vec3::getForwardVec(up, right) << endl;
	cout << "Up = " << up << " = " << ~Vec3::getUpVec(forward, right) << endl;

	cout << "----- VecN -----" << endl;

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
	cout << "Origin = " << VecN(4) << endl;
}