#include <iostream>
using namespace std;
int main() {
        int n = 6,i;
    int arr[n] = {12, 35, 1, 10, 34, 1};
    int largest = arr[0],secondlargest = -1;
    for(int i = 1;i < n;i++) {

        if(arr[i] > largest) {
            secondlargest = arr[i];
        }
        else if(arr[i] > secondlargest) {
            secondlargest = arr[i];

        }

    }
    cout << "secondlargest number is" <<secondlargest;

}