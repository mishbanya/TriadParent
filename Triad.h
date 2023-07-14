#include <string>

class Triad {
protected:
    int a, b, c;
public:
    Triad(int a, int b, int c);
    std::string toString();
    friend bool operator==(const Triad& tr1, const Triad& tr2);
    Triad operator+ (int other);
    Triad operator* (int other);
};