#include <iostream>
#include <vector>
int main() 
{
    std::vector<int> numbers;
    int input;
    const int SIZE = 10; 
    std::cout << "������10������" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> input;
        bool exists = false;
        for (int num : numbers) {
            if (num == input) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            numbers.push_back(input);
        }
    }
    std::cout << "��ͬ�����У�" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}