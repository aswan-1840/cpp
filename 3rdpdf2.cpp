#include <iostream>
using namespace std;
int main() {
    int mark;
    cout << "enter your mark";
    cin >> mark;
    if(mark >= 40){
        cout << "pass the exam";
    }
    else{
       cout << "fail";
    }
}