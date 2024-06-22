//add two array

#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> ans){
    int s = 0;
    int e = ans.size()-1;
   while(s<e){
        swap(ans[s],ans[e]);
        s++;
        e--;
    }
    return ans;
}
vector<int> addArray(vector<int> a ,vector<int> b ){
    int i = a.size()-1;
    int j = b.size()-1;
    int carry =0;
    vector<int> ans;
    while(i>=0 && j>=0){
        int sum = a[i] +b[j] +carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = a[i]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;

    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);

    }
    return (reverse(ans));
    
    
}
void print(vector<int> ans){
    
    for(int i = 0; i< ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<int> a{1, 2, 3, 4};
    vector<int> b{9,3,4,5};
    // vector<int> c = ;
    print(addArray(a,b));

return 0;
}