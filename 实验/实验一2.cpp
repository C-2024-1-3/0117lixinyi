#include <iostream>
using namespace std;
#define PI 3.1415926
 float v(float r,float h)
{
	float v;
	v = PI * r * r * h * 1 / 3;
		return v;

}
int main()
{
	float a, b;
	cout << "ÊäÈëÔ²×¶µÄ°ë¾¶" << endl;
	cin >> a;
	cout << "ÊäÈëÔ²×¶µÄ¸ß" << endl;
	cin >> b;
	cout << v(a, b) << endl;
	return 0;









}
