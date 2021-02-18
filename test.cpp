#include "types/Vec3.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	Vec3 v = Vec3(0, 0, 0);
	Vec3 w = Vec3(5, 5, 5);
	cout << "v = " << v << endl;
	cout << "w = " << w << endl;
	cout << "Dot product = " << v * w << endl;
	cout << "Cross product = " << (v ^ w) << endl;
	cout << "Normalized v = " << ~v << endl;
	cout << "Normalized w = " << ~w << endl;
	cout << "|v| = " << !v << endl;
	cout << "|w| = " << !w << endl;
	cout << "Origin = " << VEC3_ORIGIN << endl;
}