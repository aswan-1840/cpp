#include <iostream>
using namespace std;
int main() {
    int rows,mid;
    cout << "enter number of rows";
    cin >> rows;
    mid = (rows + 1)/2;

    for(int i = 1;i <= rows;i++) {
        for(int j = 1;j <= rows;j++) {
            if(i == mid || j == mid){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    
}