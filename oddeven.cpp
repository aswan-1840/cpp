#include <iostream>
using namespace std;
int main(){
char symbol;
int num1,num2,result;
cout << "enter your number";
cin >> num1 >> num2 ;
cout << "enter the operator";
cin >> symbol;
if(symbol == '+') {
    result = num1 + num2;
}
else if(symbol == '-') {
    result = num1 - num2;
}
else if(symbol == '/') {
    result = num1 / num2;
}
else if(symbol == '*') {
    result = num1 * num2;
}
else {
      cout << "invalid";  
}
    cout << "result" << result;






}

