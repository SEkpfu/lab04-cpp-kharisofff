#include <iostream>
using namespace std;
double sum(double, double);
double razn(double, double);
double umn(double, double);
int main() {
    double a, b;
    cout << "Введите два вещественных числа: " << endl;
    cin >> a >> b;
    double f = sum(umn(5, sum(razn(a, 2), b)), umn(1000, a));
    cout << "Result = " << f << endl;
    return 0;
}
double sum(double x, double y) { return x + y; }
double razn(double x, double y) { return x - y; }
double umn(double x, double y) { return x * y; }
