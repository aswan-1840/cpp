#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "enter size of matrix";
    cin >> n;
    int arr[n][n];

    cout << "enter the elements";
    for(i = 0;i < n;i++) {
        for(j = 0;j < n;j++) {
            cin >> arr[i][j];
        }
    }

    cout << "secondary diagonal elements are ";
    for(i = 0;i <n;i ++) {
       cout << arr[i][n - i - 1]; 
    }
    cout << endl;
}