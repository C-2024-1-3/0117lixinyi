#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    cout << "请输入三角形的三条边: " << endl;
    cin >> a >> b >> c;

    // 检查是否可以构成三角形
    if (a + b > c && a + c > b && b + c > a) {
        // 计算周长
        double perimeter = a + b + c;
        cout << "三角形的周长是: "  << perimeter << endl;

        // 判断是否为等腰三角形
        if (a == b || b == c || a == c) {
            cout << "该三角形是等腰三角形。" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形。" << endl;
        }
    }
    else {
        cout << "这三条边不能构成三角形。" << endl;
    }

    return 0;
}