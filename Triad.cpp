#include "Triad.h"

Triad::Triad(int a, int b,int c) : a(a), b(b), c(c) { };

std::string Triad::toString() {
    return "(" + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + ")";
};

Triad Triad::operator+ (int other) {
    return Triad(a + other, b + other, c+other);
};

Triad Triad::operator* (int other) {
    return Triad(a * other, b * other, c*other);
};

bool operator==(const Triad& tr1, const Triad& tr2) {
    return tr1.a == tr2.a && tr1.b == tr2.b && tr1.c == tr2.c;
};