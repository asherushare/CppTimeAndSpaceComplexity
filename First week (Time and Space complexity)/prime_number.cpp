#include<iostream>
using namespace std;
int main(){
  int n,count=0;
  cout<<"Enter any integer number here: ";
  cin>>n;

  if(n<=1){
    cout<<"Eneter a positve number which is greater than 1.";
  }
  for(int i=1;i<=n;i++){                 // Time complexity is O(1)
                                         // Space complexity is O(1)
    if(n%i==0)
    count++;
  }
  if(count==2){
    cout<<"The number is prime."<<endl;
  }
  else{
    cout<<"The number is not prime.";
  }
}