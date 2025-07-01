#include <iostream>
using namespace std;
int main() {
    int rows = 2,cols = 3;
    int matrix[2][3] = {{1, 2, 3},{4, 5, 6}};
    int transporse[3][2];
    int i,j;

    for(i = 0;i < rows;i++) {
        for(j = 0;j < cols;j++) {
            transporse[j][i] = matrix[i][j];
        }
    }
    cout << "transporsed matrix  : "<<endl;
    for(i = 0;i < cols;i++) {
        for(j = 0;j < rows;j++) {
            cout << transporse[i][j];

        }
        cout << endl;
    }
        
}