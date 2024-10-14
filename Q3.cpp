#include <iostream>
using namespace std;
int main()
{
    int row, col, rownum, colnum ,tran,rows,cols;
    cout << "enter the row : ";
    cin >> row;
    cout << "enter the col : ";
    cin >> col;

    int arr[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << "Enter the value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
           cout << arr[i][j];
        }
        cout << endl;
    }

    cout << "Enter the row :";
    cin >> rownum;

    for(int k=0; k < rows; k++){
        tran = arr[colnum][k];
    }

    cout << "Enter the col :";
    cin >> colnum;

    for(int k=0; k < rows; k++){
        tran = arr[k][colnum];
    }
   

    return 0;
}