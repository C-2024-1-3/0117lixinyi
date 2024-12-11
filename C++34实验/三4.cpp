/*猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃一个，
以后每天如此，到第10天，发现只剩最后一个桃子，
问，第一天猴子共摘多少桃子（用递归实现）*/
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
    std::cout << "第一天猴子共摘了 " << totalPeaches << " 个桃子" << std::endl;
    return 0;
}

