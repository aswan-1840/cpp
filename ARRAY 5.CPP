#include <iostream>
using namespace std;
int main(){
    
    int arr[] ={10, 11, 12, 13, 14, 15};
    int n =sizeof(arr) / sizeof(arr[0]);

    cout << "reversed array is";
    for(int i = n -1;i>= 0;i--){
        cout << arr[i] <<"  ";

    }
    return 0;
}