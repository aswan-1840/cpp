#include <iostream>
using namespace std;
int main() {
    int k = 0,rows,n;
    cout << "enter number of rows";
    cin >>rows;
    n = (rows +1)/2;

    for(int i = 1;i <= rows;i++){
        i <= n ?k++ : k --;
        int num= 1;
        for(int j = 1;j <= rows;j++){
         if(j >= (n + 1)- k && j <= (n -1)+k)   {
            cout << num;
            j <=n ? num ++ : num --;
         }
         else{
            cout << " ";
         }
        }
        cout << "\n";
    }
}
