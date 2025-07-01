#include <iostream>
using namespace std;
int main() {
    int n = 6;
    int arr[n];
    cout << "enter the numbers of array";
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int smallest = arr[0];
    for(int j = 0;j < n; j++) {
        if(smallest > arr[j]){
            smallest = arr[j];
        }
    }
    cout << "smallest element of array is" << smallest;
}