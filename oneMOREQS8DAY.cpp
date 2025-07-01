#include <iostream>
using namespace std;
int main() {
    int number,largestdigit = 0,lastdigit;
    cout << "enter your number:";
    cin >>number;
    while(number > 0) {
       lastdigit = number % 10;

       if(lastdigit > largestdigit) {
        lastdigit = largestdigit;
       }
       number= number/10;
       

    }
    cout << "largest digit is," <<largestdigit;
}