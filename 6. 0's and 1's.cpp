#include <iostream>
using namespace std;

int main() {
  
  int arr[] = {1,0,0,0,1,1,0,1,0,1,1,1,1,1,0};

  int size = 15;
  int zero = 0;
  int one = 0;

  for(int i = 0; i < size; i++){
    if(arr[i] == 0){
      zero++;
    }
    if(arr[i] == 1){
      one++;
    }

  }

  cout<<"Number of zero's : "<<zero<<endl;
  cout<<"Number of one's : "<<one<<endl;
  return 0;
}