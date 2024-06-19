//find the second smallest element in the array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int array[n];
    for(int i = 0; i<n ; i++){
        cin>>array[i];
    }
    int first,second;
    first = second = INT_MAX;
    if(n<=2){
        cout<<"invalid input";
    }
    for(int i = 0 ; i<n ; i++){
        if(first>array[i]){
            second = first;
            first = array[i];
        }else if(second>array[i]){
            second = array[i];
        }
    }
    cout<<second;
return 0;
}