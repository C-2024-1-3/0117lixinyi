/*
�������������㷨��дһ����������
���������㷨�������˶�������д���
ÿ�˴����У�������Ԫ�ؽ��бȽϡ���Ϊ�����򽻻������򣬱���ԭ˳��
*/
#include <iostream>
#include <vector>
void swap(double& a, double& b) 
{
    double temp = a;
    a = b;
    b = temp;
}
void bubbleSort(std::vector<double>& list, int listSize)
{
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}
int main()
{
    std::vector<double> list(10);
    std::cout << "������10��˫�������֣�" << std::endl;
    for (int i = 0; i < 10; ++i)
      {
        std::cin >> list[i];
       }
    bubbleSort(list, 10);
    std::cout << "����������Ϊ��" << std::endl;
    for (double num : list) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}