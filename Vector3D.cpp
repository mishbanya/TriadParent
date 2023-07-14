#include "Vector3D.h"

Vector3D::Vector3D(int a, int b,int c) : Triad(a, b,c) {};

Vector3D Vector3D::operator+(Vector3D const& other) {
    return Vector3D(a + other.a, b + other.b, c + other.c);
}

int Vector3D::ScalAdd(Vector3D const& other) {
    return a * other.a + b * other.b + c * other.c;
}
