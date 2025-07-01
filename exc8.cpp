#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter your age";
    cin >> age;
    if(age <= 12) {
        cout << "child";
    }
    else if(age <= 17) {
        cout << "teenager";
    }
    else{
        cout << "adult";
    }
    return 0;
}