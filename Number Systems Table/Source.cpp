#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int binary(int);
int octal(int);
string hexadecimal(int);

void main()
{
	cout << "This program prints a table of the binary, octal and hexadecimal equivalents of the decimal numbers in the range 1–256." << endl;

	system("pause");
	system("CLS");

	cout << left << setw(20) << "Decimal Number " << left << setw(20) << "Binary Number" << left << setw(20) << "Octal Number" << left << setw(20) << "Hexadecimal Number" << endl;

	for (int a = 1; a <= 256; a++)
	{
		cout << left << setw(20) << a << left << setw(20) << binary(a)  << left << setw(20) << octal(a) << left << setw(20) << hexadecimal(a) << endl;
	}
	system("pause");
}

int binary(int n1)
{
	int bin = 0;

	for (int a = 0; n1 >= 1; a++)
	{
		bin += (n1 % 2)*(pow(10, a));
		n1 /= 2;
	}
	return bin;
}

int octal(int n2)
{
	int oct = 0;

	for (int a = 0; n2 >= 1; a++)
	{
		oct += (n2 % 8)*(pow(10, a));
		n2 /= 8;
	}
	return oct;
}

string hexadecimal(int n3)
{
	string hex = "", digit;

	while (n3 >= 1)
	{
		digit = to_string(n3 % 16);
		{
			if (digit == "10")
				digit = "A";
			if (digit == "11")
				digit = "B";
			if (digit == "12")
				digit = "C";
			if (digit == "13")
				digit = "D";
			if (digit == "14")
				digit = "E";
			if (digit == "15")
				digit = "F";
		}
		hex = digit + hex;

		n3 /= 16;
	}
	if (hex == "")
		hex = "0";
	return hex;
}