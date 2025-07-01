#include <iostream>
using namespace std;
int main() {
    int n = 6;
    int arr[n];
    cout << "enter the elements of your  array";

    for (int i =0;i < n;i++ ){
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int j = 0;j < n ;j++) {
        if(arr[j] > largest){
            largest = arr[j];

        }
        
    }
    cout << "largest element of the array is"<< largest;
    
}
