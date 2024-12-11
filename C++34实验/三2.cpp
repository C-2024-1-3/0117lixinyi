/*声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：*/
#include <iostream>
#include <vector>
bool is_prime(int num) 
{
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
int main() 
{
    std::vector<int> primes;
    int count = 0;
    for (int num = 2; count < 200; ++num)
    {
        if (is_prime(num))
        {
            primes.push_back(num);
            ++count;
        }
    }

    // 按每行10个输出前200个素数
    for (int i = 0; i < primes.size(); i += 10)
    {
        for (int j = i; j < i + 10 && j < primes.size(); ++j)
        {
            std::cout << primes[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


