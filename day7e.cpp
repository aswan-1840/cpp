#include <iostream>
using namespace std;
int main() {
    int percentage,attanded,totalclasses;
    cout << "enter your attended and percentage and  total classes ";
    cin >> percentage>> attanded >> totalclasses;
    if(percentage >= 75) {
        cout << "student is allowed to exam";     
    }
    else{
        cout << "student is not allowed exam";
    }

}
