#include <iostream>
using namespace std;
int main() {
    int num = 66754;
    int digit = 0;

    while(num > 0){
        num = num / 10;
        digit = digit + 1;
    }
    cout<<digit;
}