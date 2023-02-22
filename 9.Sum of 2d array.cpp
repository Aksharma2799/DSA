#include <iostream>
using namespace std;

void rowWiseSum(int arr[][3], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    int sum = 0;
    for (int j = 0; j < cols; j++)
    {
      sum = sum + arr[i][j];
    }
    cout << sum << endl;
  }
}

int main()
{

  int arr[2][3];
  int rows = 2;
  int cols = 3;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr[i][j];
    }
  }

  rowWiseSum(arr, rows, cols);
  return 0;
}