#include <iostream>
using namespace std;
int main() {
	double a, b, c, d, e, f;
	double delta, deltax, deltay;
    double x,y,k,n;

	cin >> a >> b >> c >> d >> e >> f;

	delta = a * d - c * b;    //определитель системы
    deltax = e*d-f*b;
    deltay = a*f-c*e;

	if (delta != 0) {    //единственное решение
		deltax = (e*d - f * b) / delta;
		deltay = (a*f - c * e) / delta;
		cout << 2 << " " << deltax << " " << deltay;
		return 0;
	}
	else 
    {
		if(deltax == 0 && deltay == 0)
       	{
            if(a == 0 && b==0 && c==0 && d==0)
            {
                if(e != 0 || f!=0)
                {
                    cout<<0;
                }
                else
                {
                    cout<<5;
                }
            }
            else if(a == 0 && c==0)
            {
                if(b != 0)
                {
                    y = e/b;
                }
                else
                {
                    y = f/d;
                }
                cout<<4<<" "<<y;
             }
             else if(b==0 && d==0)
			 {
                 if(a!=0)
                 {
                     x = e/a;
                 }		
                 else
                 {
                     x = f/c;
                 }
                 cout<<3<<" "<<x;
              }
              else 
              {
                 if (b != 0) {
                    n = e / b;
                    k = -a / b;
                }
                else {
                    n = f / d;
                    k = -c / d;
                }
                 cout<<1<<" "<<k<<" "<<n;
                }
            }
            else
            {
                cout<<0;
            }
	}
	return 0;
}
