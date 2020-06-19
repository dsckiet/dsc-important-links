//Find unique element from n times repetation of numbers in array.

//C++ Code

#include <bits/stdc++.h>
using namespace std;

int main() {
   
   int n;cin >> n;
   
   int total = 4; //The only change variable here
   int ar[n];
   for(int i=0;i<n;i++){
      cin >> ar[i];
   }
   int count[32]={0};
   
   for(int i=0;i<n;i++){
      int number = ar[i];
      int j=0;
      while(number>0){
         count[j] += (number&1); //incrementing the counter for every number
         j++;
         number = number >> 1;
      }
   }
   int ans=0,pos=1;
   for(int i=0;i<32;i++){
      count[i]%=total; //total same numbers
      ans += count[i]*pos;
      pos = pos << 1;
   }
   cout << ans ;
   
   
   
}
