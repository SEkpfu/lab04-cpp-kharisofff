#include <iostream>
using namespace std;
bool bilet1(int);
bool bilet2(int,int,int,int,int,int);
bool bilet3(int,int);
int main() {
    cout << bilet1(123321) << endl;
    cout << bilet2(1,2,3,3,2,1) << endl;
    cout << bilet3(123,321) << endl;
    return 0;
}
bool bilet1(int n) {
    int a1=n/100000%10,a2=n/10000%10,a3=n/1000%10,a4=n/100%10,a5=n/10%10,a6=n%10;
    return (a1+a2+a3)==(a4+a5+a6);
}
bool bilet2(int a1,int a2,int a3,int a4,int a5,int a6){
    return (a1+a2+a3)==(a4+a5+a6);
}
bool bilet3(int x,int y){
    int a1=x/100%10,a2=x/10%10,a3=x%10,a4=y/100%10,a5=y/10%10,a6=y%10;
    return (a1+a2+a3)==(a4+a5+a6);
}