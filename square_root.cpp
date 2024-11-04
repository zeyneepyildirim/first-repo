#include<iostream>
#include<iomanip> // for setprecision
#include<math.h>//for fabs 

using namespace std;

int main()
{
	float a,x,e,b,y;

		cout << "Enter a number to calculate square its root:";
		cin >> a;
		cout << "Enter an estimated number:";
		cin >> x;
		cout << "Enter an error value:";
		cin >> e;

		do
		{
			b = (a - x * x) / (2 * x);
			y = x + b;
			cout << endl << y;
			x = y;

		} while (fabs(b) > e);

		cout << "\nSquare Root:" << setprecision(3) << y << endl;

		return 0;


}