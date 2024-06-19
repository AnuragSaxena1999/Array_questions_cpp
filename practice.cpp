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
    int max = INT_MIN;
    for(int i = 0; i<n ; i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    cout<<max;
    




return 0;
}