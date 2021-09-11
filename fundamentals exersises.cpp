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
/*
//example 17
int main()
{
	int moadel;
	cout << "moadel ra vared konid:\n";
	cin >> moadel;


	if (moadel < 12)
		cout << "mashroot shodid";
	else
		cout << "mashrot nistid";


	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 18
int main()
{
	int moadel;
	cout << "moadel ra vared konid:\n";
	cin >> moadel;


	if (moadel > 17 && moadel <= 20)
		cout << "A";
	else if (moadel > 15 && moadel <= 17)
		cout << "B";
	else if (moadel > 10 && moadel <= 15)
		cout << "C";
	else if (moadel >= 0 && moadel <= 10)
		cout << "D";
	else
		cout << "your number is out of range";


	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 19
int main()
{
	int pass;
	cout << "password ravared konid:\n";
	cin >> pass;
	cout << "hala ba passwordi ke entekhab kardid vared shavid\n";
	int passcheck;
	cin >> passcheck;

	if (passcheck == pass)
		cout << "welcome";
	else
		cout << "incorrect password";

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 20
int main()
{
	int a,b;
	cout << "do adad do raqami vared konid:\n";
	cin >> a >> b;

	if (a>=10 && a<=99 && b>=10 && b<=99)

		cout << "true";
	else
		cout << "false";

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 21
int main()
{
	int i,sum=0;
	for(i = 1; i <= 3; i++) {
		sum = sum+i;
	}
	cout << "sum: " << sum;

	cin.get(); //to prevent from closing the console if needed
	cin.get(); 
	return 0;
}
*/
/*
//example 22
int main()
{
	cout << "enter 5 numbers:\n";
	int i,a, sum = 0;
	for (i = 0; i <= 4; i++) {
		cin >> a;
		sum = sum + a;
	}
	cout << "sum: " << sum;

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 23
int main()
{
	cout << "enter 5 numbers:\n";
	int i, a, sum = 0;
	for (i = 0; i <= 4; i++) {
		cin >> a;
		if (a % 2 == 0)
	 		cout << "zoj ast";
		else
			cout << "fard ast";
	}
	cout << "sum: " << sum;

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 24
int main()
{
	cout << "enter a number:\n";
	int i, n ;
	cin >> n;

	cout << "maqsum alay ha:\n";
	for (i = n; i >= 1; i--) {

		if (n%i==0) {
			cout << i << "\n";
		}

	}

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 25
int main()
{	
	for (int i = 100; i <= 999; i++) {

		if (i%2==0) {
			cout << i<<"\n";
		}

	}

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 26
int main()
{
	for (int i = 1000; i <= 9999; i++) {

		if (i % 2 == 0) {
			cout << i << "\n";
		}

	}

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 27
int main()
{
	for (int i = 100; i <= 999; i++) {

		if (i % 5 == 0) {
			cout << i << "\n";
		}

	}

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 28
int main()
{
	int zarb = 1;
	for (int i = 1; i <= 5; i++) {
		zarb = zarb * i;
	}
	cout << "zarb 1 ta 5: " << zarb;
	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 29
int main()
{	
	int a,zarb=1;
	for (int i = 1; i <= 5; i++) {

		cin >> a;
		zarb *= a; //zarb=zarb*a;
	}
	cout <<"zarb 5 adad shoma: "<< zarb;

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 30
int main()
{
	int n, zarb = 1;
	cout << "enter a number: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		zarb *= i; //zarb=zarb*a;
	}
	cout << "zarb 5 adad shoma: " << zarb;

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 31
int main()
{
	int a;

	for (int i = 1; i <= 5; i++) {
		cout << "enter a number: ";
		cin >> a;
		cout << "maqsum alay:\n";
		for (int j = 1; j <= a; j++) {
			if (a % j == 0)
				cout << j << "\n";
		}
	}

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 32
int main()
{
	int a;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i* j<<"\t";
		}
		cout << "\n";
	}

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/
/*
//example 33
int main()
{

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i * j << "\t";
		}
		cout << "\n";
	}

	cin.get(); //to prevent from closing the console if needed
	cin.get();
	return 0;
}
*/