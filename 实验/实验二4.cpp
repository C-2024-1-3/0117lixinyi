#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "�������һ����: ";
    cin >> num1;

    cout << "����������� (+, -, *, /, %): ";
    cin >> op;

    cout << "������ڶ�����: ";
    cin >> num2;

    switch (op) {
    case '+':
        cout << "�����: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "�����: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "�����: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "�����: " << num1 / num2 << endl;
        }
        else {
            cout << "����: ��������Ϊ 0." << endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            cout << "�����: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
        else {
            cout << "����: ��������Ϊ 0." << endl;
        }
        break;
    default:
        cout << "����: �Ƿ��������." << endl;
    }

    return 0;
}