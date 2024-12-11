/*
(2)��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10��������
�����������в��ԡ�
����ԭ�� int parseHex(const char *const hexString);
�磺���ú��� parseHex(��A5��);����165
*/
#include <iostream>
#include <cstring> 
int parseHex(const char* const hexString);
int main() 
{
    const int maxl = 100; 
    char hexString[maxl]; 

    std::cout << "������һ��16��������";
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