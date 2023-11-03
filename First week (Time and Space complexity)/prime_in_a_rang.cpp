#include<iostream>
using namespace std;

int isPrime(int n){
for(int i=2;i*i<=n;i++){
  if(n%i==0)
  return 0;
}
return 1;
}

int main(){
  int n1,n2,count=0;
  cout<<"Enter first number: ";
  cin>>n1;
  cout<<"Enter second number: ";
  cin>>n2;

  cout<<"The prime number between "<<n1<<" "<<n2<<" are: ";
  for(int i=n1;i<=n2;i++){                 // Time complexity is O(1)
                                         // Space complexity is O(1)
    if(isPrime(i))
    cout<<i<<" ";
  }
  
}