// maximum value at every index of an array

#include<iostream>
using namespace std;
int main(){
int n;
int array[n];
cin>>n;
for(int i=0; i<n; i++){
    cin>>array[i];
}
//for(int i=0; i<n; i++){
  //  cout<<array[i]<<" ";
//}
 for(int i=1; i<n ; i++){
     int j = i-1;
     if(array[i]<array[j]){
         array[i]= array[j];
     }
     //cout<<array[j]<<" ";
     else{
         array[i]= array[i];
     }
     }
for(int i=0; i<n; i++){
    cout<<array[i]<<" ";
}

     
 
return 0;
}
//another method for this question
/* for(int i =0 ; i<n ; i++){
    int mx = INT_min;
    mx = max(mx , array[i]);
    cout<<mx<< endl;
}*/

