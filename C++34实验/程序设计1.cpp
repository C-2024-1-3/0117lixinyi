/*
(1)��д��������ַ���s1�Ƿ�Ϊ�ַ���s2���Ӵ���
���ǣ����ص�һ��ƥ����±꣬
���򷵻�-1��
���������������ַ���s1��s2�����ú���ʵ�֡�
����ԭ�ͣ�int indexof(const char *s1,const char *s2);
*/
#include <iostream>
int text(const char* s1, const char* s2);
int main()
{
    const int mmun = 81;
    char s1[mmun], s2[mmun];

    std::cout << "�������ַ���s1��";
    std::cin.getline(s1, mmun);
    std::cout << "�������ַ���s2��";
    std::cin.getline(s2, mmun);
    int index = text(s1, s2);
    if (index != -1) 
    {
        std::cout << "s1��s2���Ӵ�����һ��ƥ����±��ǣ�" << index << std::endl;
    }
    else {
        std::cout << "s1����s2���Ӵ���" << std::endl;
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