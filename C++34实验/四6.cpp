/*
�ַ�����ÿ����ĸ���ֵĴ�����
��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
void count(const char s[], int counts[])
counts��һ����26��Ԫ�ص��������顣
const[0]��const[1]������const[25]�ֱ��¼a��b������z���ֵĴ�����
��ĸ���ִ�Сд��������ĸA����ĸa��������a��
��д���Գ��򣬶����ַ���������count��������ʾ����Ĵ�����*/
#include <iostream>
#include <cctype> 
void count(const char s[], int counts[]);
int main() {
    const int SIZE = 26; 
    int counts[SIZE] = { 0 }; 
    char s[81]; 
    std::cout << "������һ���ַ�����";
    std::cin.getline(s, 81); 
    count(s, counts); 
    std::cout << "ÿ����ĸ���ֵĴ���Ϊ��" << std::endl;
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