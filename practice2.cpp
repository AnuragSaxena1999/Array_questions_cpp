#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int first , second;
    first = INT_MIN;
    second = INT_MIN;
    if(n<=2){
        cout<<"invalid input";
        return;
    }
    for(int i = 0 ; i<n ; i++){
        if(first<array[i]){
            second = first;
            first = array[i];
        }else if(second<array[i]){
            second = array[i];
        }
    }
    cout<<second;
    return 0;
}