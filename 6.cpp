#include <iostream>
#include <string>
using namespace std;
char znak(int);
string chislo_v_slovo(int);
int main() {
    int n;
    cin >> n;
    cout << znak(n);
    if (n < 0) n = -n;
    cout << chislo_v_slovo(n);
    return 0;
}
char znak(int x) {
    return (x >= 0) ? '+' : '-';
}
string chislo_v_slovo(int n) {
    string slova[11] = {"ноль","один","два","три","четыре","пять","шесть","семь","восемь","девять","десять"};
    if (n >= 0 && n <= 10) return slova[n];
    return "?";
}