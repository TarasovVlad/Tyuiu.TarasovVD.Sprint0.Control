// Tyuiu.GurevskayaVE.Sprint0.Control.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.TarasovVD.Sprint0.Control.V1.Lib/Tyuiu.TarasovVD.Sprint0.Control.V1.Lib.cpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	cout << "������� 3-� ������� �����: ";
	cin >> a;
	int b = a / 100;
	int c = (a / 10) % 10;
	int d = a % 10;
	int e = a * b * c;
	cout << "������������ ���� �����: " << e << endl;


}


