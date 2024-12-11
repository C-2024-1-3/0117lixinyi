/*
�����Ӵ���
��д���º���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ���
���ƥ�䣬����s1��s2�е��±꣬
          ���򷵻بC1��
int indexOf(const char s1[], const char s2[])
��д���Գ��򣬶�������C�ַ���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ���
*/
#include <iostream>

// ����C�ַ���s1�Ƿ���C�ַ���s2���Ӵ��ĺ���
int indexOf(const char s1[], const char s2[]) {
    int len1 = 0, len2 = 0;
    const char* p1, * p2;

    // ���������ַ����ĳ���
    for (len1 = 0; s1[len1] != '\0'; len1++);
    for (len2 = 0; s2[len2] != '\0'; len2++);

    // ���s1��s2�����򲻿������Ӵ�
    if (len1 > len2) return -1;

    // ����s2������Ƿ���ƥ����Ӵ�
    for (p1 = s1, p2 = s2; *p2 != '\0'; p2++) {
        if (*p1 == *p2) {
            for (int i = 0; i < len1; i++) {
                if (*(p2 + i) == '\0' || *(p1 + i) != *(p2 + i)) {
                    break;
                }
            }
            if (*p1 == '\0') {
                return static_cast<int>(p2 - s2); // �ҵ�ƥ����Ӵ��������±�
            }
        }
    }
    return -1; // δ�ҵ�ƥ����Ӵ�������-1
}

int main() {
    const int MAX_SIZE = 81; // ����ַ�������Ϊ80����1���ڴ洢'\0'
    char s1[MAX_SIZE], s2[MAX_SIZE];

    std::cout << "�������һ��C�ַ�����";
    std::cin.getline(s1, MAX_SIZE);

    std::cout << "������ڶ���C�ַ�����";
    std::cin.getline(s2, MAX_SIZE);

    int result = indexOf(s1, s2);
    if (result != -1) {
        std::cout << "C�ַ��� '" << s1 << "' ��C�ַ��� '" << s2 << "' ���Ӵ����±�Ϊ��" << result << std::endl;
    }
    else {
        std::cout << "C�ַ��� '" << s1 << "' ����C�ַ��� '" << s2 << "' ���Ӵ���" << std::endl;
    }

    return 0;
}
