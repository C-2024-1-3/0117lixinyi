#include <iostream>
#include <cmath>   // ����ֵ
using namespace std;
int main()
{
    double a, x0, xn, xn1;
    int maxIter = 1000; // ����������
    double tolerance = 1e-10; // ����
    int i; 

    cout << "������һ������ a: ";
    cin >> a;
    if (a < 0) { a = -a; }
    // �� a ��Ϊ��ʼ�²�ֵ
    x0 = a;

       for (i = 0; i < maxIter; ++i) 
    {
        xn1 = (x0 + a / x0) / 2;
       if (fabs(xn1 - x0) < tolerance) {
            cout << "a ��ƽ������: "  << xn1 << endl;
            break;
        }
        x0 = xn1;
    }
    return 0;
}