/*
利用起泡排序算法编写一个排序函数。
起泡排序算法分若干趟对数组进行处理。
每趟处理中，对相邻元素进行比较。若为降序，则交换；否则，保持原顺序。
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
    std::cout << "请输入10个双精度数字：" << std::endl;
    for (int i = 0; i < 10; ++i)
      {
        std::cin >> list[i];
       }
    bubbleSort(list, 10);
    std::cout << "排序后的数字为：" << std::endl;
    for (double num : list) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}