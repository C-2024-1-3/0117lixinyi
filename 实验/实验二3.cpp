#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    cout << "�����������ε�������: " << endl;
    cin >> a >> b >> c;

    // ����Ƿ���Թ���������
    if (a + b > c && a + c > b && b + c > a) {
        // �����ܳ�
        double perimeter = a + b + c;
        cout << "�����ε��ܳ���: "  << perimeter << endl;

        // �ж��Ƿ�Ϊ����������
        if (a == b || b == c || a == c) {
            cout << "���������ǵ��������Ρ�" << endl;
        }
        else {
            cout << "�������β��ǵ��������Ρ�" << endl;
        }
    }
    else {
        cout << "�������߲��ܹ��������Ρ�" << endl;
    }

    return 0;
}