#include <iostream>
#include <cmath>
using namespace std;
int main()  {
    int num , original,digits = 0;
    double sum = 0;
    
    cout << "enter your number";
    cin >>num;

    original = sum;
    int temp = sum;

    while(temp > 0) {
        digits = digits + 1;
        temp =temp / 10;
    }
    temp = num;
    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit,digits);
        temp /= 10;
    }
    if(sum == original)
        cout << original << "is an amstrong number"<<endl;
    else
        cout << original << "is not an amstrong number"<<endl;
}
