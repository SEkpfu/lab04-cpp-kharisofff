#include <iostream>
using namespace std;
double fareng(double celsiy);
double kelv(double celsiy);
void farengicelv(double celsiy, double& farengeyt, double& kelvin);
int main() {
    double t1, t2;
    cout << "Введите первую температуру в Цельсиях: ";
    cin >> t1;
    cout << "Введите вторую температуру в Цельсиях: ";
    cin >> t2;
    cout << "Первая температура: " << fareng(t1) << " F, " << kelv(t1) << " K" << endl;
    double f2, k2;
    farengicelv(t2, f2, k2);
    cout << "Вторая температура: " << f2 << " F, " << k2 << " K" << endl;
    return 0;
}
double fareng(double celsiy) {
    return (9.0/5.0) * celsiy + 32;
}
double kelv(double celsiy) {
    return celsiy + 273;
}
void farengicelv(double celsiy, double& farengeyt, double& kelvin) {
    farengeyt = (9.0/5.0) * celsiy + 32;
    kelvin = celsiy + 273;
}