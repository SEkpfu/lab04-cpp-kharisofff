#include <iostream>
using namespace std;
int faktorial(int);
int stepen(int, int);
int main() {
    int N, M;
    cout << "Введите N и M: ";
    cin >> N >> M;
    cout << "Результат = " << (faktorial(N) * faktorial(M)) / faktorial(N + M) << endl;
    cout << "Степень числа (пример): " << stepen(2, 10) << endl;
    return 0;
}
int faktorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) res *= i;
    return res;
}
int stepen(int x, int n) {
    int res = 1;
    for (int i = 0; i < n; i++) res *= x;
    return res;
}