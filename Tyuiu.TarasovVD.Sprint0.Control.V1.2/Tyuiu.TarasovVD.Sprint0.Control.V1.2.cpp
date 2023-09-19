

#include <iostream>
#include "../Tyuiu.TarasovVD.Sprint0.Control.V1.2.Lib/Tyuiu.TarasovVD.Sprint0.Control.V1.2.Lib.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cout << "¬ведите значение переменной x: ";
    cin >> x;
    int y;
    cout << "¬ведите значение переменной y: ";
    cin >> y;
    int z;
    cout << "¬ведите значение переменной z: ";
    cin >> z;
    float a = 5 + ((2 * x - z) / (3 + pow(y, 2)));
    cout << "–езультат: " << a << endl;
}





