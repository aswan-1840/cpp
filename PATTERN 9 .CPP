#include <iostream>
using namespace std;
int main() {
    int rows,i,j;
    cout << "enter number of rows";
    cin >> rows;

    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= rows;j++)
        {
            if(i == 1 || i == rows || j == 1 || j == rows){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}