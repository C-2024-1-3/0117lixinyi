#include <iostream>
#include <cmath>   // 绝对值
using namespace std;
int main()
{
    double a, x0, xn, xn1;
    int maxIter = 1000; // 最大迭代次数
    double tolerance = 1e-10; // 精度
    int i; 

    cout << "请输入一个正数 a: ";
    cin >> a;
    if (a < 0) { a = -a; }
    // 以 a 作为初始猜测值
    x0 = a;

       for (i = 0; i < maxIter; ++i) 
    {
        xn1 = (x0 + a / x0) / 2;
       if (fabs(xn1 - x0) < tolerance) {
            cout << "a 的平方根是: "  << xn1 << endl;
            break;
        }
        x0 = xn1;
    }
    return 0;
}