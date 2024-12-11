/*
(3)主程序中建立一动态数组（使用new），
数组元素及元素个数由键盘输入，
动态调试观察指针及指针指向的内容；
设计一个函数对数组由小到大排序；
主程序中用指针方式输出数组元素；
最后释放数组内存（delete）。
*/
#include <iostream>
void sortArray(int* arr, int size);
void printArray(const int* arr, int size);
int main()
{
    int size;
    std::cout << "请输入数组的元素个数: ";
    std::cin >> size; 
    int* arr = new int[size];
    std::cout << "请输入 " << size << " 个整数: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i]; 
    }
    sortArray(arr, size);
    std::cout << "排序后的数组元素为: ";
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