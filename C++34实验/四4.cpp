/*
�ϲ��������кõ����飺
��д���º������ϲ��������кõ����飬�γ�һ���µ����кõ����顣
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
ʹ��size1+size2�αȽ�ʵ�ֺ�������д���Գ�����ʾ�û������������кõ����飬����ʾ�ϲ��Ժ�����顣������һ������������
ע�⣬�������ݵĵ�һ�������������Ԫ�����������������һ���֡��ٶ������С������80��

*/
#include <iostream>
int indexOf(const char s1[], const char s2[]);
int main() 
{
    const int MAX_LEN = 1000;
    char s1[MAX_LEN], s2[MAX_LEN];
    std::cout << "�������һ���ַ���: ";
    std::cin.getline(s1, MAX_LEN); 
    std::cout << "������ڶ����ַ���: ";
    std::cin.getline(s2, MAX_LEN);
    int index = indexOf(s1, s2); 
    if (index != -1)
    {
        std::cout << "�ַ��� '" << s1 << "' ���ַ��� '" << s2 << "' �е��±�Ϊ: " << index << std::endl;
    }
    else {
        std::cout << "�ַ��� '" << s1 << "' �����ַ��� '" << s2 << "' ���Ӵ���" << std::endl;
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