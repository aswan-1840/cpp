#include <iostream>
using namespace std;
int main() {
    int rows,i,j;
    cout << "enter number of rows";
    cin >> rows;

    for(j=1; i <= rows;i++) {
        char ch = 'A' + i - 1;
        
        for(j =1;j <= (rows *2)-1;j++){
            if(j==rows - i  +1 || j == rows +i -1 || i == 5){
                cout <<ch;
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}
