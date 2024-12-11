/*
(1)编写函数检查字符串s1是否为字符串s2的子串，
若是，返回第一次匹配的下标，
否则返回-1。
在主程序中输入字符串s1与s2，调用函数实现。
函数原型：int indexof(const char *s1,const char *s2);
*/
#include <iostream>
int text(const char* s1, const char* s2);
int main()
{
    const int mmun = 81;
    char s1[mmun], s2[mmun];

    std::cout << "请输入字符串s1：";
    std::cin.getline(s1, mmun);
    std::cout << "请输入字符串s2：";
    std::cin.getline(s2, mmun);
    int index = text(s1, s2);
    if (index != -1) 
    {
        std::cout << "s1是s2的子串，第一次匹配的下标是：" << index << std::endl;
    }
    else {
        std::cout << "s1不是s2的子串。" << std::endl;
    }
    return 0;
}
int text(const char* s1, const char* s2)
{
    for (int i = 0; s2[i] != '\0'; ++i)
    {
        int j = 0;
        while (s1[j] != '\0' && s2[i + j] != '\0' && s1[j] == s2[i + j])
        {
            j++;
        }
        if (s1[j] == '\0')
        {
            return i; 
        }
    }
    return -1; 
}