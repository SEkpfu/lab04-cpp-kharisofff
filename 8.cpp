#include <iostream>
#include <cmath>
using namespace std;
bool kvur(double a, double b, double c, double* x1, double* x2);
int main() {
    double x1, x2;
    if (kvur(4, -5, 1, &x1, &x2))
        cout << "Корни уравнения 4х^2-5x+1=0: " << x1 << ", " << x2 << endl;
    else
        cout << "Нет действительных корней" << endl;
    if (kvur(13, 2, 5, &x1, &x2))
        cout << "Корни уравнения 13х^2+2x+5=0: " << x1 << ", " << x2 << endl;
    else
        cout << "Нет действительных корней" << endl;
    if (kvur(1, -4, 4, &x1, &x2))
        cout << "Корни уравнения х^2-4x+4=0: " << x1 << ", " << x2 << endl;
    else
        cout << "Нет действительных корней" << endl;
    return 0;
}
bool kvur(double a, double b, double c, double* x1, double* x2) {
    double d = b * b - 4 * a * c; 
    if (d < 0) return false; 
    if (d == 0) {
        *x1 = *x2 = -b / (2 * a); 
    } else {
        *x1 = (-b + sqrt(d)) / (2*a);
        *x2 = (-b - sqrt(d)) / (2*a); 
    }
    return true;
}