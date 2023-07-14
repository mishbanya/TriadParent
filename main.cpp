/* 20. Создать базовый класс Triad (тройка чисел) с операциями сложения с чис -
лом, умножения на число, проверки на равенство.Создать производный класс
Vector3D, задаваемый тройкой координат.Должны быть реализованы : опера -
ция сложения векторов, скалярное произведение векторов.
*/

#include <iostream>
#include <cmath>
#include "Vector3D.h"
using namespace std;

int main()
{
    Triad t1{ 5, 8, 7 };
    Triad t2{ 2, 3, 4 };
    std::cout << "t1 + 1: " << (t1 + 1).toString() << '\n';
    std::cout << "t1 * 2: " << (t1 * 2).toString() << '\n';
    std::cout << "t1 == t2: " << (t1 == t2) << '\n';

    Vector3D v1{ 2, 3, 6 };
    Vector3D v2{ 3, 4, 5 };
    std::cout << "v1 + v2: " << (v1 + v2).toString() << '\n';
    std::cout << "v1 * v2: " << v1.ScalAdd(v2) << '\n';
    std::cout << "v1 == v2: " << (v1 == v2) << '\n';
}