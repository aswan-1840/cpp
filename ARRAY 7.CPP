#include <iostream>
using namespace std;
int main() {
   int arr[3][3]={
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

    for(int i = 0;i < 3;i++) {
        int rowsum = 0;

        for(int j=0;j < 3;j++) {


            rowsum += arr[i][j];

        }

        cout << "sum of row" << i + 1 << ":" << rowsum <<endl;

    }
   
}


