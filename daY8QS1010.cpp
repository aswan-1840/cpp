#include <iostream>
using namespace std;
int main() {
    int num = 6536;
    int digits = 0;

    while(num > 0) {
        num = num / 10;
        digits = digits + 1;
    }
    cout <<digits;
}