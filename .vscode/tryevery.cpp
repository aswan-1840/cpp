#include <iostream>
using namespace std;
int main() {
   int age;
   cout << "enter  your age";
   cin >> age;
   bool isbanned = true;
   if(!(age >= 18 && age <= 55)){
    cout << "the person have valid licence";

   }
   else{
    cout << "the person have not a valid licence";
   }
   return 0;
}