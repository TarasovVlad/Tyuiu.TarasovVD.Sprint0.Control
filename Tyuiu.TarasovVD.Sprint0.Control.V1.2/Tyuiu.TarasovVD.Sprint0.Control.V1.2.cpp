// Tyuiu.GurevskayaVE.Sprint0.Control.V1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.TarasovVD.Sprint0.Control.V1.2.Lib/Tyuiu.TarasovVD.Sprint0.Control.V1.2.Lib.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cout << "������� �������� ���������� x: ";
    cin >> x;
    int y;
    cout << "������� �������� ���������� y: ";
    cin >> y;
    int z;
    cout << "������� �������� ���������� z: ";
    cin >> z;
    float a = 5 + ((2 * x - z) / (3 + pow(y, 2)));
    cout << "���������: " << a << endl;
}





