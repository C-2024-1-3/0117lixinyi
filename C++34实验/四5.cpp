/*
检验子串：
编写如下函数，检验C字符串s1是否是C字符串s2的子串。
如果匹配，返回s1在s2中的下标，
          否则返回–1。
int indexOf(const char s1[], const char s2[])
编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。
*/
#include <iostream>

// 检验C字符串s1是否是C字符串s2的子串的函数
int indexOf(const char s1[], const char s2[]) {
    int len1 = 0, len2 = 0;
    const char* p1, * p2;

    // 计算两个字符串的长度
    for (len1 = 0; s1[len1] != '\0'; len1++);
    for (len2 = 0; s2[len2] != '\0'; len2++);

    // 如果s1比s2长，则不可能是子串
    if (len1 > len2) return -1;

    // 遍历s2，检查是否有匹配的子串
    for (p1 = s1, p2 = s2; *p2 != '\0'; p2++) {
        if (*p1 == *p2) {
            for (int i = 0; i < len1; i++) {
                if (*(p2 + i) == '\0' || *(p1 + i) != *(p2 + i)) {
                    break;
                }
            }
            if (*p1 == '\0') {
                return static_cast<int>(p2 - s2); // 找到匹配的子串，返回下标
            }
        }
    }
    return -1; // 未找到匹配的子串，返回-1
}

int main() {
    const int MAX_SIZE = 81; // 最大字符串长度为80，加1用于存储'\0'
    char s1[MAX_SIZE], s2[MAX_SIZE];

    std::cout << "请输入第一个C字符串：";
    std::cin.getline(s1, MAX_SIZE);

    std::cout << "请输入第二个C字符串：";
    std::cin.getline(s2, MAX_SIZE);

    int result = indexOf(s1, s2);
    if (result != -1) {
        std::cout << "C字符串 '" << s1 << "' 是C字符串 '" << s2 << "' 的子串，下标为：" << result << std::endl;
    }
    else {
        std::cout << "C字符串 '" << s1 << "' 不是C字符串 '" << s2 << "' 的子串。" << std::endl;
    }

    return 0;
}
