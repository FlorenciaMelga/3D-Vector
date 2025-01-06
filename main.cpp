#include <iostream>
#include <cmath>

using namespace std;

class Vector {
private:
    double x, y, z;

public:
    // Constructor to initialize the vector
    Vector(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

    // Method to print the vector
    void print() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    // Operator to add two vectors
    Vector operator+(const Vector& v) const {
        return Vector(x + v.x, y + v.y, z + v.z);
    }

    // Operator to subtract two vectors
    Vector operator-(const Vector& v) const {
        return Vector(x - v.x, y - v.y, z - v.z);
    }

    // Dot product of two vectors
    double dotProduct(const Vector& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // Normalize the vector
    Vector normalize() const {
        double length = sqrt(x * x + y * y + z * z);
        if (length == 0) return Vector(0, 0, 0);
        return Vector(x / length, y / length, z / length);
    }

    // Getters for accessing coordinates
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }
};

int main() {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    cout << "Vector 1: ";
    v1.print();

    cout << "Vector 2: ";
    v2.print();

    // Operations with vectors
    Vector sum = v1 + v2;
    Vector diff = v1 - v2;

    cout << "Sum of vectors: ";
    sum.print();

    cout << "Difference of vectors: ";
    diff.print();

    // Dot product
    double dotProd = v1.dotProduct(v2);
    cout << "Dot product: " << dotProd << endl;

    // Normalizing the vector
    Vector normalized = v1.normalize();
    cout << "Normalized Vector 1: ";
    normalized.print();

    return 0;
}
