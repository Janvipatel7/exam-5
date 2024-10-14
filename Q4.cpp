#include <iostream>
using namespace std;
int main()
{
    int rownum, colnum, rowSize,  colSize, sum =0,row,col;

    cout << "enter the row : ";
    cin >> row;
    cout << "enter the col : ";
    cin >> col;

    int arr[row][col];
    for (int i = 0; i < rowSize; i++){
        for (int j = 0; j < colSize; j++){
            cout << "Enter the value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < rowSize; i++){
        for (int j = 0; j < colSize; j++){
           cout << arr[i][j];
        }
        cout << endl;
    }
  
    cout << endl << "Enter row number :";
    cin >> rownum;
    
    for(int k = 0; k < rowSize; k++){
       sum = sum + arr[rownum][k];
    }
    cout << " sum of row : " << sum << endl;
    
    sum = 0;

    cout << endl << "Enter col number : ";
    cin >> colnum;
    
    for(int k = 0; k < colSize; k++){
       sum = sum + arr[k][colnum];
    }
    cout << " sum of col : " << sum << endl;

    
    return 0;
}

