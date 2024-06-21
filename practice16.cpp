// rotate array for k times 

#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(int array[] , int k , int n){
    vector<int> ans(4);

    for(int i = 0;i<n;i++){
        ans[(i+k)%n] = array[i];
    }
    return ans;
}
void print(vector<int> ans ,int n){
    for(int i = 0 ; i<n; i++){
        cout<<ans[i]<<" ";
    }
}


int main(){
int array[4] = {1, 2, 3, 4};
int k = 2;

print(rotateArray(array , k , 4) , 4);
return 0;
}