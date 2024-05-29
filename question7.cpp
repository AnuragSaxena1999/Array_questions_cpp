// insert element at specific position in array

#include<iostream>
using namespace std;
int main(){
int n;
int array[10];
cin>>n;
for(int i =0 ; i<n ; i++){
    cin>>array[i];
}
int index = 2 , element = 100 ;
for(int i = n-1 ; i>=index ; i--){
    array[i+1] =array[i];
}
array[index] = element;
n= n+1;
for(int i=0 ; i<n ; i++)
{
    cout<<array[i]<<" ";
}
return 0;
}