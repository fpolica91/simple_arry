#include <iostream>
#include <iostream>
using namespace std;

int main() {
  int nums [6] = {1,40,3,5,6,0};
  int min_number = numeric_limits<int>::max();
  int max_number = numeric_limits<int>::min();
  int sum_arr = 0;
  for(int elem:nums){
    sum_arr += elem;
    if(elem < min_number){
      min_number = elem;
    }

    if(elem > max_number){
      max_number = elem;
    }
    // cout<<"the smallest number is "<< min_number<<endl;
  }
  cout<<"the smallest number is "<< min_number<<endl;
  cout<<"the largest number is "<< max_number<<endl;
  cout<<"the sum of the array is "<< sum_arr<<endl;
  return 0;
}

