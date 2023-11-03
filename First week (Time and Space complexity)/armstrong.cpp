#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int n) {
  int count = 0;
  while (n) {
    count++;
    n /= 10;
  }
  return count;
}

bool Armstrong(int num, int digit) {
  int n = num, ans = 0, rem;
  while (n) {
    rem = n % 10;
    n /= 10;
    ans = ans + pow(rem, digit);
  }

  if (ans == num)
    return true;
  else
    return false;
}

int main() {
  int num;
  cout << "Enter any number: ";
  cin >> num;

  int digit = countdigit(num);
  cout << Armstrong(num, digit) << endl;
}



//Time complexity is O(log10n)
//Space compelxity is O(1)