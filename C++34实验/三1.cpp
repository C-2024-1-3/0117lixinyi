
/*********������Ȼ��m��n��
��1�������ǵ����Լ������������������
 Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
��2���ں����������Լ������С������������ʾ��ʹ�����ò�����******************/
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
    cout << "������������Ȼ����" << endl;
    cin >> a >> b; 
    int result = gcd(a, b);
    cout << a << " �� " << b << " ����������� " << result << endl;
    int bei = a * b / result; 
    cout << "��С��������: " << bei << endl;

    return 0;
}