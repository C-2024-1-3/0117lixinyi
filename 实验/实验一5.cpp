#include <iostream>
using namespace std;
#include <iomanip>
int main()

{
	float h;
	cout << "请输入华氏温度" << endl;
	cin >> h;
	float s;
	s = (h - 32) * 5.0/9.0;
	cout << "摄氏温度为："<<fixed <<setprecision(2) <<s<<endl;











}