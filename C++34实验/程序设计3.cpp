/*
(3)�������н���һ��̬���飨ʹ��new����
����Ԫ�ؼ�Ԫ�ظ����ɼ������룬
��̬���Թ۲�ָ�뼰ָ��ָ������ݣ�
���һ��������������С��������
����������ָ�뷽ʽ�������Ԫ�أ�
����ͷ������ڴ棨delete����
*/
#include <iostream>
void sortArray(int* arr, int size);
void printArray(const int* arr, int size);
int main()
{
    int size;
    std::cout << "�����������Ԫ�ظ���: ";
    std::cin >> size; 
    int* arr = new int[size];
    std::cout << "������ " << size << " ������: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i]; 
    }
    sortArray(arr, size);
    std::cout << "����������Ԫ��Ϊ: ";
    printArray(arr, size);
    delete[] arr;
    return 0;
}
void sortArray(int* arr, int size) 
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(const int* arr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}