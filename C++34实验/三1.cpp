
/*********输入自然数m和n，
（1）求他们的最大公约数（或称最大公因数）。
 要求输入、输出在主函数中进行，求公约数由函数实现。
（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）******************/
#include <iostream>
using namespace std;
int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int main() 
{
    int a, b;
    cout << "请输入两个自然数：" << endl;
    cin >> a >> b; 
    int result = gcd(a, b);
    cout << a << " 和 " << b << " 的最大公因数是 " << result << endl;
    int bei = a * b / result; 
    cout << "最小公倍数是: " << bei << endl;

    return 0;
}