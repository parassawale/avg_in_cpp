#include<iostream>
using namespace std;

int main()
{
 
  double arr[5]; 
  double sum; // to store sum 
  double avg; // to store result


  cout << "Enter five numbers: ";
  for (int i = 0; i < 5; ++i)
  {
    cin >> arr[i];
  }
  
  
  sum = 0;
  for (int i = 0; i < 5; ++i)
  {
    sum += arr[i];
  }


  avg = sum/5;

  cout << "Sum = " << sum << endl;
  cout << "Average = " << avg << endl;

  return 0;
}
