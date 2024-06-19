// insertion at specifc position in the array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int array[n];
    for(int i = 0; i<n ; i++){
        cin>>array[i];
    }
    int index = 3;
    int element = 100;
    for(int i = n-1 ; i>=index ; i--){
        array[i+1]= array[i];

    }
    n = n+1;
    array[index]=element;
    for(int i = 0 ; i<n; i++){
        cout<<array[i]<<" ";
    }

return 0;
} 