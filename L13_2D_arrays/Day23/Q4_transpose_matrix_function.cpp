#include <iostream>
using namespace std;

void transposeMatrix(int mat[][3], int rows, int cols){
    int transposed[3][2];

    for(int i=0; i<rows;  i++){
        for(int j=0; j<cols; j++){
            //mat[i][j] ---> this is the current element
            transposed[j][i] = mat[i][j];
        }
    }

    cout<<"original matrix"<<endl;
    for(int i = 0; i< rows; i++){
        for(int j = 0; j<cols; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Transposed matrix"<<endl;
    for(int i =0; i<cols; i++){
        for(int j= 0; j<rows; j++){
            cout<<transposed[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    int rows = 2;
    int cols = 3;

    transposeMatrix(matrix, rows, cols);
    
    return 0;
}