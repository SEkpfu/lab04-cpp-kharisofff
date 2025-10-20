#include <iostream>
using namespace std;
void kvadrat4x4();
void kvadrat_n(int);
void kvadrat_n_m(int, int);
int main() {
    kvadrat4x4();
    kvadrat_n(6);
    kvadrat_n_m(5, 4);
    return 0;
}
void kvadrat4x4() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) cout << "*";
        cout << endl;
    }
}
void kvadrat_n(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << "*";
        cout << endl;
    }
}
void kvadrat_n_m(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << " ";
        for (int j = 0; j < n; j++) cout << "*";
        cout << endl;
    }
}