#include <iostream>

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    std::cout << "请输入一行字符: ";

    // 使用 cin.get() 读取每个字符
    while ((c = std::cin.get()) != '\n') { // 循环直到读取到换行符
        if (isalpha(c)) {
            ++letters; // 统计英文字母
        }
        else if (isspace(c)) {
            ++spaces; // 空格
        }
        else if (isdigit(c)) {
            ++digits; // 数字字符
        }
        else {
            ++others; // 其他字符
        }
    }

    std::cout << "英文字母个数: " << letters << std::endl;
    std::cout << "空格个数: " << spaces << std::endl;
    std::cout << "数字字符个数: " << digits << std::endl;
    std::cout << "其他字符个数: " << others << std::endl;

    return 0;
}