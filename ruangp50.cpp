#include <iostream>
using namespace std;

int main() {
    float kg , cpkg , total;
    cout << "How many kilograms of apple do you want to buy? : ";
    cin >> kg;
    cout << "How much is the price per kilogram? : ";
    cin >> cpkg;
    total = kg * cpkg;
    cout << "The total price is : " << total << endl;
    return 0;
}