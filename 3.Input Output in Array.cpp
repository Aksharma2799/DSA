#include <iostream>
using namespace std;

int main() {



int arr[5];
//Taking input in array
cout<<"Enter the values of array" << endl;
for(int i = 0; i<5; i++){
  cin >> arr[i];
}

//Print the values of array
for(int i = 0; i<5; i++){
  cout<<arr[i]<<endl;
}
  return 0;
}
