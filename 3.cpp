#include <iostream>
#include <cmath>
using namespace std;
double f(double);
int main() {
    double a, b;
    cout << "Введите a и b: ";
    cin >> a >> b;
    double rezultat = 12.5 + f(2) - f(4)*f(10) + f(a) - f(b) + f(a*b);
    cout << "Результат выражения = " << rezultat << endl;
    return 0;
}
double f(double x) {
    if (x < 0) return pow(x, 3);
    else if (x >= 0 && x <= M_PI/2) return sin(3*x);
    else return 2 + x*x;
}