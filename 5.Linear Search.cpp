#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
  for(int i = 0; i < size; i++){
    if(arr[i] == key)
    return true;
  }

  return false;
}

int main() {
  int arr[] = {1,4,6,7,9};

  int size = 5;
  cout << "Enter key" << endl;

  int key;
  cin >> key;

  if(linearSearch(arr, size, key)){
    cout<<"found" <<endl;
  }
  else{
    cout<<"Not found"<<endl;
  }


}