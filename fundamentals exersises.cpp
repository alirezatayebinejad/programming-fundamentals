#include <iostream>
using namespace std;

// example 1
int main()
{
	int a, b;

	cout << "enter two number\n";
	cin >> a;
	cin >> b;

	cout <<"jam: " << a + b << '\n';
	cout <<"zarb: " << a * b << '\n';
	cout <<"taqsim: " << a / b << '\n';
	cout <<"menha: " << a - b << '\n';

	
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
