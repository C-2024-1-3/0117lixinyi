#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "������һ���ַ�: ";
    cin >> ch; 

    if (ch >= 'a' && ch <= 'z') {
      
        ch = ch - 'a' + 'A';
        cout << "ת��Ϊ��д��ĸ: " << ch << endl;
    }
    else {
       cout << "����ַ��� ASCII ��ֵ: " << static_cast<int>(ch + 1) <<endl;
    }

    return 0;
}