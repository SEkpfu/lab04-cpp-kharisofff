#include <iostream>
#include <cmath>
using namespace std;
int s_treug(int storona, int vysota);
double s_treug(int a, int b, int ugol_grad);
double s_treug(double a, double b, double c);
int main() {
    cout << "Площадь (по стороне и высоте): " << s_treug(10, 6) << endl;
    cout << "Площадь (по 2 сторонам и углу): " << s_treug(4, 7, 30) << endl;
    cout << "Площадь (по 3 сторонам): " << s_treug(3.0, 4.0, 5.0) << endl;
    return 0;
}
int s_treug(int storona, int vysota) {
    return (storona * vysota) / 2;
}
double s_treug(int a, int b, int ugol_grad) {
    double ugol_rad = ugol_grad * M_PI / 180.0;
    return 0.5 * a * b * sin(ugol_rad);
}
double s_treug(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}