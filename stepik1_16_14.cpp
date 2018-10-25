#include <iostream>
using namespace std;
int main() {
	double a, b, c, d, e, f;
	double delta, deltax, deltay;

	cin >> a >> b >> c >> d >> e >> f;

	delta = a * d - c * b;    //определитель системы

	if (delta != 0) {    //решение единственное
		deltax = (e*d - f * b) / delta;
		deltay = (a*f - c * e) / delta;
		cout << 2 << " " << deltax << " " << deltay;
		return 0;
	}
	else {
		//решений нет, графики не пересекаются.
		/*if(a==0 && c== 0 && e != f){
			cout<<0;
		}
		else if(b==0 && d==0 && e!=f){
			cout<<0;
		}*/
		//решения есть
		if (b == 0 && d == 0 && (e / a) == (f / c)) {
			double x_min = e / a;
			cout << 3 << " " << x_min;
		}
		else if (a == 0 && c == 0 && (e / b) == (f / d)) {
			double y_min = e / b;
			cout << 4 << " " << y_min;
		}
		else if (((e / b) && (e / a)) == ((f / d) && (f / c))) {    //y = kx+n;
			double k_min = a / b;
			double n_min = e / b;
			cout << 1 << " " << -k_min << " " << n_min;
		}
		else if (a == 0 && b == 0 && c == 0 && b == 0) {
			cout << 5;
		}
		else if(a==0 && c== 0 && e != f){
			cout<<0;
		}
		else if(b==0 && d==0 && e!=f){
			cout<<0;
		}
		else
		{
			cout << 0;
		}
		return 0;
	}
	return 0;
}