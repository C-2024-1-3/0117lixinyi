#include <iostream>

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    std::cout << "������һ���ַ�: ";

    // ʹ�� cin.get() ��ȡÿ���ַ�
    while ((c = std::cin.get()) != '\n') { // ѭ��ֱ����ȡ�����з�
        if (isalpha(c)) {
            ++letters; // ͳ��Ӣ����ĸ
        }
        else if (isspace(c)) {
            ++spaces; // �ո�
        }
        else if (isdigit(c)) {
            ++digits; // �����ַ�
        }
        else {
            ++others; // �����ַ�
        }
    }

    std::cout << "Ӣ����ĸ����: " << letters << std::endl;
    std::cout << "�ո����: " << spaces << std::endl;
    std::cout << "�����ַ�����: " << digits << std::endl;
    std::cout << "�����ַ�����: " << others << std::endl;

    return 0;
}