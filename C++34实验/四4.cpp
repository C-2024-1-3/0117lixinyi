/*
合并两个排列好的数组：
编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
使用size1+size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。下面是一个运行样例。
注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。

*/
#include <iostream>
int indexOf(const char s1[], const char s2[]);
int main() 
{
    const int MAX_LEN = 1000;
    char s1[MAX_LEN], s2[MAX_LEN];
    std::cout << "请输入第一个字符串: ";
    std::cin.getline(s1, MAX_LEN); 
    std::cout << "请输入第二个字符串: ";
    std::cin.getline(s2, MAX_LEN);
    int index = indexOf(s1, s2); 
    if (index != -1)
    {
        std::cout << "字符串 '" << s1 << "' 在字符串 '" << s2 << "' 中的下标为: " << index << std::endl;
    }
    else {
        std::cout << "字符串 '" << s1 << "' 不是字符串 '" << s2 << "' 的子串。" << std::endl;
    }
    return 0;
}
int indexOf(const char s1[], const char s2[]) 
{
    int len1 = 0, len2 = 0;
    const char* p1 = s1;
    const char* p2 = s2;
    p1 = s1;
    if (s1 == nullptr || s2 == nullptr) return -1; 
    while (*p1++) len1++;
    while (*p2++) len2++;
    for (int i = 0; i <= len2 - len1; i++)
    {
        const char* s2Ptr = s2 + i;
        int j;
        for (j = 0; j < len1; j++) 
        {
            if (s2Ptr[j] != s1[j])
            {
                break;
            }
        }
        if (j == len1)
        { 
            return i;
        }
    }

    return -1; 
}