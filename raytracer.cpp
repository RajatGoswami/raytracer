#include <iostream>
#include <cmath>
using namespace std;

class Vector3
{
    public:
        Vector3(float x, float y, float z): x(x), y(y), z(z) {};
        
        float magnitude()
        {
            return sqrt((x * x) + (y * y) + (z * z));
        }

        Vector3& normalize()
        {
            float length = magnitude();
            x = x / length;
            y = y / length;
            z = z / length;
            return *this;
        }
        
        float x;
        float y;
        float z;
};

int main()
{
    Vector3 v = Vector3(1, 2, 3);

    cout << "Vector length: " << v.magnitude() << endl;

    v.normalize();

    cout << "Normalized vector length: " << v.magnitude() << endl;

    return 0;
} 