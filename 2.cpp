#include <iostream>
#include <cmath>
using namespace std;
double rasstoyanie(double x1, double y1, double x2, double y2);
double s_treug(double a, double b, double c);
int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    //a)
    cout << "Введите координаты первой точки (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки (x2 y2): ";
    cin >> x2 >> y2;
    double dlina = rasstoyanie(x1, y1, x2, y2);
    //b)
    double do_nachala1 = rasstoyanie(x1, y1, 0, 0);
    double do_nachala2 = rasstoyanie(x2, y2, 0, 0);
    cout << "Длина отрезка между точками = " << dlina << endl;
    cout << "Расстояние от первой точки до начала координат = " << do_nachala1 << endl;
    cout << "Расстояние от второй точки до начала координат = " << do_nachala2 << endl;
    //c)
    cout << "Введите координаты третьей точки (x3 y3): ";
    cin >> x3 >> y3;
    double st1 = rasstoyanie(x1, y1, x2, y2);
    double st2 = rasstoyanie(x2, y2, x3, y3);
    double st3 = rasstoyanie(x3, y3, x1, y1);
    double S = s_treug(st1, st2, st3);
    cout << "Площадь треугольника S = " << S << endl;
    //d)
    cout << "Введите координаты четвертой точки (x4 y4): ";
    cin >> x4 >> y4;
    double s1 = rasstoyanie(x1, y1, x3, y3);
    double s2 = rasstoyanie(x3, y3, x4, y4);
    double s3 = rasstoyanie(x4, y4, x1, y1);
    double S2 = s_treug(s1, s2, s3);
    double S4 = S + S2;
    cout << "Площадь четырехугольника S4 = " << S4 << endl;
    return 0;
}
double rasstoyanie(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}
double s_treug(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}