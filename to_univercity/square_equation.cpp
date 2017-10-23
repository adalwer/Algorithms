#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double a, b, c;
	cin >> a >> b >> c;
	double delta = b * b - 4 * a * c;
	if (delta < 0) 
		cout << "equation has no solution" << endl;
	else if (delta == 0) {
		cout << (-b)/(2*a) << endl;
	} else {
		double d = sqrt(delta);
		cout << (-b - d) / (2 * a) << endl;
		cout << (-b + d) / (2 * a) << endl;
	}
	return 0;
}
