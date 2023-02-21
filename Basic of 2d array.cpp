#include <iostream>
using namespace std;

int main() {
  //2d array


  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  //printing 2d array

  cout<<"Printing row wise value" << endl;
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      cout<<arr[i][j]<<" " ;//printing row wise value
    }
    cout<<endl;
  }

  cout<<"Printing coloum wise value" << endl;

  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      cout<<arr[j][i]<<" " ;//printing col wise value
    }
    cout<<endl;
  }
cout<<"_____________________________"<<endl;
cout<<"_____________________________"<<endl;

  //input

  int brr[2][3];
  int rows = 2;
  int cols = 3;

  for(int i = 0; i<rows; i++){
    for(int j = 0; j<cols; j++){
      cin >> brr[i][j];
    }
  }

  for(int i = 0; i<2; i++){
    for(int j = 0; j<3; j++){
      cout<< brr[i][j] << " ";
    }
    cout<<endl;
  }
  return 0;
}