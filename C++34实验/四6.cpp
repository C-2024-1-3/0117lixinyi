/*
字符串中每个字母出现的次数：
请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
void count(const char s[], int counts[])
counts是一个有26个元素的整数数组。
const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。
字母不分大小写，例如字母A和字母a都被看作a。
编写测试程序，读入字符串并调用count函数，显示非零的次数。*/
#include <iostream>
#include <cctype> 
void count(const char s[], int counts[]);
int main() {
    const int SIZE = 26; 
    int counts[SIZE] = { 0 }; 
    char s[81]; 
    std::cout << "请输入一个字符串：";
    std::cin.getline(s, 81); 
    count(s, counts); 
    std::cout << "每个字母出现的次数为：" << std::endl;
    for (int i = 0; i < SIZE; ++i)
    {
        if (counts[i] > 0) 
        {
            std::cout  << char('a' + i) <<":" << counts[i] << " times" << std::endl;
        }
    }

    return 0;
}
void count(const char s[], int counts[])
{
    for (int i = 0; s[i] != '\0'; ++i)
    {
        char ch = tolower(s[i]); 
        if (ch >= 'a' && ch <= 'z') 
        { 
            counts[ch - 'a']++; 
        }
    }
}