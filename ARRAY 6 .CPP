#include <iostream>
using namespace std;
int main() {
    int arr[] = {8, 10, 8, 8, 5, 10};
    int n= sizeof(arr) / sizeof(arr[0]);

    int search;
    cout << "enter the value to search";
    cin >> search;

    int count = 0;
    for(int i = 0;i < n;i++) {
        if(arr[i] == search) {
            count ++;

        }
        
    }
    cout << "  element "<<search<<" occurs "<<count<<" times ";

}