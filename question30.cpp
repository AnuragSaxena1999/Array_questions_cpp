#include<iostream>
#include<algorithm>
using namespace std;
int min_diff(int array[], int n, int m){
 if(m==0 || n==0)
 return 0;
 if(n<m)
 return -1;
 sort(array , array+n);


 int min = INT_MAX;
 for(int i = 0 ; i+m-1<n ; i++){
    int diff = array[i+m-1]-array[i];
    if(diff<min){
        min = diff;
    }
 }return min;
}
int main(){
    int n;
    cin>>n;
   int  array[n];
   for(int i=0 ; i<n ; i++){
    cin>>array[i];
   }
   int m = 3; 
   cout<< min_diff(array , n , m);
   

return 0;
}