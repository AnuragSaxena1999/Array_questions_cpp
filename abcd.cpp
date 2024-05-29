// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int start_date;
   cin>>start_date;
   int end_date;
   cin>>end_date;
   int k;
   cin>>k;
    int count = 0;
   for(int i = start_date ; i<=end_date ; i++){
      int temp = i;
       int reverse = 0;
       while(i!=0){
       int rem = i%10;
       reverse = (reverse*10)+rem;
       i = i/10;
        }
       int diff = abs(temp-reverse) ;
       int bd = diff%k;
       if(bd == 0){
          count++;
      }
   }
   cout<<count;
    return 0;
}
