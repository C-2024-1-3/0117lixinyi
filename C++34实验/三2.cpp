/*����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool is_prime(int num), ���num��������������true�����򷵻�false��
���ú���is_prime�ҳ�ǰ200������������ÿ��10�������*/
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

    // ��ÿ��10�����ǰ200������
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


