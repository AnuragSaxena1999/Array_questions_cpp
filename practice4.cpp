//find the most frequent element in the array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int array[n];
    for(int i = 0; i<n ; i++){
        cin>>array[i];
    }
    int freq = 1;
   
    int element;
    for(int i = 0; i<n-1 ; i++ ){
        int count = 1;
        for(int j = i+1 ; j<n;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(count>freq){
            freq= count;
            element = array[i];
        }
    }
    cout<<element;
return 0;
}