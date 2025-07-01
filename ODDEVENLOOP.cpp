#include <iostream>
using namespace std;
int main() {
    int number = 24839,lastdigit;
    int evensum = 0,oddsum = 0;
     while(number > 0) {

        lastdigit = number % 10;
        if(lastdigit % 2 == 0) {
            evensum = evensum + lastdigit;
        }
        else{
            oddsum = oddsum + lastdigit;
        }
        number = number/ 10;
     }
     cout <<evensum<<endl<<oddsum;

}