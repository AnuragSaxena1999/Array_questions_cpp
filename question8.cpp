// delete the specific element in an array

#include<iostream>
using namespace std;
int main(){
    int n;
int array[100];
cin>> n;
for(int i=0 ; i<n ; i++){
    cin>> array[i];
}
int index = 3;
for(int i = index ; i<n-1 ; i++){
    array[i] = array[i+1];
}
for(int i=0 ; i<n-1 ; i++){
    cout<<array[i] <<" ";
}
return 0;
}