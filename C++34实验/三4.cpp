/*���ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ����
�ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ����
�Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ�����ӣ�
�ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣�*/
#include <iostream>
int peaches(int day)
{
    if (day == 1)
    {
        return 1;
    }
    else {
        return (peaches(day - 1) + 1) * 2;
    }
}
int main()
{
    int totalPeaches = peaches(10); 
    std::cout << "��һ����ӹ�ժ�� " << totalPeaches << " ������" << std::endl;
    return 0;
}

