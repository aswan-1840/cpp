#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the number of elements in array :";
    cin >> n;
    int arr[n];

    cout << "enter elements :";
    for(int i = 0;i < n;i++){
        cin>> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n;i++){
        if(arr[i] %2 == 1){
            sum = sum + arr[i];
        }
    }
    cout << "total sum is"<<sum;
}
