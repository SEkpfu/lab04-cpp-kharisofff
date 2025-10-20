#include <iostream>
#include <cmath>
using namespace std;
bool f(double, double&);
int main() {
    double a, b, r;
    cout << "Введите a и b: ";
    cin >> a >> b;

    double f2, f0, fa, f2a, f6, fab;
    if (f(2, f2) && f(0, f0) && f(a, fa))
        cout << "f(2)-f(0)*f(a)=" << f2 - f0*fa << endl;
    if (f(2*a, f2a) && f(6, f6) && f(a*b, fab))
        cout << "f(2a)-f(6)+f(ab)=" << f2a - f6 + fab << endl;
    return 0;
}
bool f(double x, double& rez) {
    if (x <= 2) rez = 1.0/(3 - x);
    else if (x > 2 && x < 5) rez = pow(x,2)/10;
    else rez = x*x - 3*x + 7;
    return true;
}