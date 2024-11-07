
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	unsigned int testUint = 65534; // 0xFFFE
	cout << "output in unsigned int type: " << testUint << endl;
	cout << "output in char type: " << static_cast<char>(testUint) << endl;
	cout << "output in short type: " << static_cast<short>(testUint) << endl; // 为什么结果为-2?
	cout << "output in int type: " << static_cast<int>(testUint) << endl;
	cout << "output in double type: " << static_cast<double>(testUint) << endl;
	cout << "output in double type: " << setprecision(4) << static_cast<double>(testUint) << endl;
	cout << "output in Hex unsigned int type: " << hex << testUint << endl; // 16进制输出
	cout << "output in octal type: " << oct << testUint << endl; // 8进制输出
	system("pause");
	return 0;
}