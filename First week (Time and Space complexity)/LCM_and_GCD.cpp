#include <iostream>
using namespace std;
int main() {
  int a,b,L,H;
  cout<<"Enter two numbers: ";
  cin>>a>>b;

  for(L=1;L<=a*b;L++){          // Time complexity is O(a*b)
    if(L%a==0&&L%b==0){         // Space complexity is O(1)
      break;
    }
  }

  for(H=a<b?a:b;H>=1;H--){      // Time complexity is O(max(a,b))
    if(a%H==0 && b%H==0){       // Space complexity is O(1)
      break;
    }
  }

  cout<<"LCM is "<<L<<endl;
  cout<<"GCD is "<<H;
}







// #include <iostream>
// using namespace std;
// int main() {
//   int a,b,L;
//   cout<<"Enter two numbers: ";
//   cin>>a>>b;
  
//   for(L=L=a>b?a:b;L<=a*b;L+=(a>b?a:b)){
//     if(L%a==0&&L%b==0){
//       break;
//     }
//   }

//   cout<<"LCM is "<<L;
// }