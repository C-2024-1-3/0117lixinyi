#include <iostream>
using namespace std;
int main() {
    int a; a = 1;
        int b; b = 1;
    int y = 1; 
    int c = 1; 
    cout << "����������������a, b ";
    cin >> a >> b;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            y = i; 
        }
    }
    c = (a * b) / y; 
    cout << "a, b�����Լ��Ϊ " << y << endl;
    cout << "a, b����С������Ϊ " << c << endl;
    return 0;
}