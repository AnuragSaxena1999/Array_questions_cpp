// find the maximum and minimum number of array


#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int array[n];
for(int i =0 ; i<n ; i++){
    cin>>array[i];
    cout<<endl;
}
int max= INT_MIN;
for(int i = 0 ; i<n ; i++){
   if(max< array[i])
   {
    max= array[i];
   }   
}
int min = INT_MAX;
 for(int i = 0 ; i<n ; i++){
   if(min > array[i])
   {
    min= array[i];
   }   
}
cout<<max<<endl;
cout<<min;

return 0;
}
