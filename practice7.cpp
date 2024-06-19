//delete element of specific index in an array

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
    for(int i = index; i<n-1 ; i++){
        array[i] = array[i+1];
    }
    n= n-1;
    for(int i = 0 ; i<n ; i++){
        cout<<array[i]<<" ";
    }


return 0;
}