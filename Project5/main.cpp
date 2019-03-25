#include "Complex1.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int chc, n, z, x;
	float max = 0;
	ifstream fin;
	fin.open("complex.txt");
	if (!fin.is_open())
		cout << "Файл не может быть открыт" << endl;
	else 
	{
		fin >> n;
		Complex *a = new Complex[n];
		for (int i = 0; i < n; i++) 
		{
			fin >> z >> x;
			Complex m{ z, x };
			a[i] = m;
			cout << a[i].re << " + i" << a[i].im << endl;
			if (sqrt(pow(a[i].re, 2) + pow(a[i].im, 2)) > max)
				max = sqrt(pow(a[i].re, 2) + pow(a[i].im, 2));
		}
		cout << max << endl;
	}
	system("pause");
}
