#include <iostream>
using namespace std;
int main() {
    int k;
    for(int i = 1; i <= 5;i++){
        for(int j = 1;j <= 9;j++)
        {
            if(j >= 6 - i && j <= 4 + i && k == 1){
                cout << "*";
                k = 0;
            }
            else{
                cout << " ";
                k = 1;
            }
        }
        cout << "\n";
        
        
    }
}