#include <iostream>
using namespace std;
int main() {
    int mark;
    cout << "enter your mark:";
    cin >> mark;
    if(mark < 25){
        cout << "F";
    }
    else if(mark >= 25 && mark < 45){
        cout << "D";
    }
    else if(mark >= 45 && mark < 60){
        cout << "C";
    }
    else if(mark >= 60 && mark < 80){
        cout << "B";
    }
    else if(mark >= 80 && mark < 100){
        cout << "A";
    }
    return 0;
}
