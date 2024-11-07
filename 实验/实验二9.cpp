#include <iostream>
using namespace std;

int main() {
    const double apple_price = 0.8;
    int apples_per_day = 2;
    int total_apples = 2;
    double total_cost = 2 * apple_price;
    int days = 1;

    while (apples_per_day <= 100) {
        apples_per_day *= 2; 
        total_apples += apples_per_day; 
        total_cost += apples_per_day * apple_price; 
        days++; 
    }
    double average_cost = total_cost / days;

    cout << "平均每天花费: " << average_cost << " 元" << endl;

    return 0;
}