#include "Triad.h"

class Vector3D : public Triad {
public:
    Vector3D(int a, int b,int c);
    Vector3D operator+ (Vector3D const& other);
    int ScalAdd (Vector3D const& other);
};