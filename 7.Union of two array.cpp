#include <iostream>
#include <vector>
using namespace std;


//Union of 2 array
//Note : without using any condition like dublicate, sorted and etc...
int main() {
  int arr[] = {1,3,5,7,9};
  int sizea = 5;
  int brr[] = {2,4,6,8};
  int sizeb = 4;

  vector<int> ans;

  //pushing array in arr
  for(int i = 0; i<sizea; i++){
    ans.push_back(arr[i]);

  }
  //pushing array in brr

  for(int i = 0; i<sizeb; i++){
    ans.push_back(brr[i]);
  }

  //print union of 2 array

  for(int i = 0; i<ans.size(); i++){
    cout<<ans[i]<< " ";
  }
  
}