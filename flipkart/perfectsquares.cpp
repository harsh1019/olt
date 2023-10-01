// ques1 solution 
// time complexity -> o(LogN) 
#include<bits/stdc++.h>
using namespace std;

bool isperfect(int x)
{
  int sq = sqrt(x);
  return (sq*sq == x);
}

int main()
{
   int n;
   cin>>n;
   
   if(isperfect(n)){
     cout<<1<<"\n";
     return 0;
   }
   
   for(int j=1;j<=sqrt(n);j++){
      if(isperfect(n-(j*j))){
         cout<<2<<"\n";
         return 0;
      }
   }
   
   while(n%4 == 0){
     n >>= 2;
   }
   
   if(n%8 == 7){
     cout<<4<<"\n";
     return 0;
   }
   
   cout<<3<<"\n";
   return 0;
}