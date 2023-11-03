#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter any year: ";
  cin>>n;

  if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){     
    
    //Time complexity is O(1)
    //Space complexity is also O(1)
    
    cout<<"This is a leap year.";
  }
  else{
    cout<<"This is not a not leap year.";
  }
  
}