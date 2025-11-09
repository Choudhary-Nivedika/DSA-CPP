#include <iostream>
using namespace std;

int main(){
    int row = 2, column = 3;
    int matrix[][column] = {{11,12,13},
                       {21,22,23}};

    //Transpose the matrix
    int transpose[column][row] = {{0}};

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            transpose[j][i]= matrix[i][j];
        }
    }

    //print the transpose
    for(int i = 0; i<column; i++){
        for(int j=0; j<row; j++){
            cout<< transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}   