/*
(2)编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，
并在主函数中测试。
函数原型 int parseHex(const char *const hexString);
如：调用函数 parseHex(“A5”);返回165
*/
#include <iostream>
#include <cstring> 
int parseHex(const char* const hexString);
int main() 
{
    const int maxl = 100; 
    char hexString[maxl]; 

    std::cout << "请输入一个16进制数：";
    std::cin.getline(hexString, maxl); 
    int decimalValue = parseHex(hexString); 
    std::cout << "The decimal value of " << hexString << " is " << decimalValue << std::endl;
    return 0;
}
int parseHex(const char* const hexString)
{
    if (hexString == nullptr) 
        return 0; 
    int decimal = 0;
    const char* temp = hexString; 
    while (*temp)
    { 
        char ch = *temp; 
        int value = 0;
        if (ch >= '0' && ch <= '9')
        {
            value = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F')
        {
            value = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f')
        {
            value = ch - 'a' + 10;
        }
        else {
            return 0; 
        }
        decimal = decimal * 16 + value; 
        temp++; 
    }
    return decimal;
}