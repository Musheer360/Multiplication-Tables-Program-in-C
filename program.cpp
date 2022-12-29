#include <iostream>
using namespace std;

int main() {

    int n, i = 0;

    cout << "Enter number to print its multiplication table: ";
    cin >> n;
    cout << "\n";

    while(i < 10) {
        i++;
        cout << n << " x " << i << " = " << n * i << "\n";
    }

    return 0;
}
