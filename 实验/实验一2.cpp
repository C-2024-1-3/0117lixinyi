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
	cout << "����Բ׶�İ뾶" << endl;
	cin >> a;
	cout << "����Բ׶�ĸ�" << endl;
	cin >> b;
	cout << v(a, b) << endl;
	return 0;









}
