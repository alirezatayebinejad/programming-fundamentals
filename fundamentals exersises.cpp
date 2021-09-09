#include <iostream>
using namespace std;

/*
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
*/

/*
// example 2
int main()
{
	int a,mohit,masahat;
	cin >> a;
	mohit = a * 4;
	masahat = a * a;
	cout << "masahat: " << masahat << endl;
	cout << "mohit: " << mohit << endl;
	
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/

/*
//example 3
int main()
{
	int arz,tool, mohit, masahat;
	cout << "arz ra vared kon:\n";
	cin >> arz;
	cout << "tool ra vared kon:\n";
	cin >> tool;
	mohit = (arz + tool) * 2;
	masahat = arz * tool;
	cout << "masahat: " << masahat << endl;
	cout << "mohit: " << mohit << endl;


	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 4
int main()
{
	float shoa, mohit, masahat;

	cout << "shoa dayere ra vared kon:\n";
	cin >> shoa;

	mohit = 2*3.14*shoa; // 3.14 adad pi hast
	masahat = 3.14*shoa*shoa;
	cout << "masahat: " << masahat << endl;
	cout << "mohit: " << mohit << endl;


	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 5
int main()
{
	float zfizik, nfizik, zriazi, nriazi, zamar, namar;
	cout << "nomre va zarib riazi fizik va amar ra vared konid: \n";

	cout << "fizik\n" << "zarib:";
	cin >> zfizik;
	cout << "nomre:";
	cin >> nfizik;

	cout << "riazi\n" << "zarib:";
	cin >> zriazi;
	cout << "nomre:";
	cin >> nriazi;

	cout << "amar\n" << "zarib:";
	cin >> zamar;
	cout << "nomre:";
	cin >> namar;

	float moadel = ((zfizik * nfizik) + (zriazi * nriazi) + (zamar * namar)) / (zfizik + zriazi + zamar);

	cout << "moadel shoma: "<< moadel;
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 6
int main()
{

	int year, birthyear, age;
	cout << "what year is today?\n";
	cin >> year;
	cout << "what is your birthyear?\n";
	cin >> birthyear;

	age = year - birthyear;
	cout << "your age is: " << age;

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/

/*
//example 7
int main()
{

	int number, age;
	float tall;
	string name;

	cout << "enter your information:\n";
	cout << "age: ";
	cin >> age;
	cout << "name: ";
	cin >> name;
	cout << "number: ";
	cin >> number;
	cout << "how tall are you?";
	cin >> tall;

	cout <<" your information:\n" <<"name: "<<name<<endl<< "age: " << age << endl << "number: " << number << endl << "tall: " << tall;


	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 8
int main()
{
	int number;
	cout << "enter a positive number:\n";
	cin >> number;
	if (number < 0) {
		cout << "your number is not positive;";
	}
	else {
		cout << "correct";
	}
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 9
int main()
{
	int number;
	cout << "enter a number:\n";
	cin >> number;
	if (number == 0) {
		cout << "your number is zero";
	}
	else if(number<0) {
		cout << "your number is negetive";
	}
	else {
		cout<< "your number is positive";
	}
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 10
int main()
{
	int number;
	cout << "adad do raghami vared konid:\n";
	cin >> number;
	if (number <= 99 && number>=10 ) {
		cout << "true";
	}
	else {
		cout << "adad shoma do raqami nist";
	}
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 11 if else
int main()
{
	int a,b;
	char c;
	cout << "do adad ra vared konid:\n";
	cin >> a>>b;
	cout << "enter * or - or + \n";
	cin >> c;
	if (c=='*') {
		cout << a*b;
	}
	else if(c=='+') {
		cout << a+b;
	}
	else if (c == '-') {
		cout << a - b;
	}
	else {
		cout << "incorrect input";
	}
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 11 switch case
int main()
{
	int a, b;
	char c;
	cout << "do adad ra vared konid:\n";
	cin >> a >> b;
	cout << "enter * or - or + \n";
	cin >> c;
	switch (c) {
	case '+': cout << a + b; break;
	case '-': cout << a - b; break;
	case '*': cout << a * b; break;
	default: cout << "invalid input";
	}
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 12
int main()
{
	int a, b;
	cout << "do adad vared konid:\n";
	cin >> a >> b;
	if (a > b)
		cout << a << " bozorgtar ast ";
	else if (a < b)
		cout << b << " bozorgtar ast";
	else
		cout << "barabar ast.";
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 13
int main()
{
	int a, b;
	cout << "do adad vared konid:\n";
	cin >> a >> b;
	if (a > b)
		cout << a << " bozorgtar az " << b << " hast.";
	else if (a < b)
		cout << b << " bozorgtar az " << a << " hast.";
	else
		cout << a << " ba " << b << " barabar ast.";
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 14
int main()
{
	int a;
	cout << "yek adad vared konid:\n";
	cin >> a ;
	if (a%2==0)
		cout << a << " zoj ast ";
	else
		cout << a << " fard ast ";
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 15
int main()
{
	int a, b, c;
	cout << "se adad vared konid:\n";
	cin >> a >> b >> c;

	int min;
	min = a;

	if (b < min)
		min = b;
	if (c < min)
		min = c;

	cout << "min: " << min;

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 16
int main()
{
	int a, b,temp=0;
	cout << "do adad vared konid:\n";
	cin >> a >> b;


	if (a < b)
		cout << a << " " << b;
	else if (b < a) {
		temp = a;
		a = b;
		b = temp;
		cout <<a<<" "<<b;
	}
		

	

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/