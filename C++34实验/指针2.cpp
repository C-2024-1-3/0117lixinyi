#include<iostream>
int main()   
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;    
    for (i = 0; i < 3; i++)
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多，增加了分行效果
}