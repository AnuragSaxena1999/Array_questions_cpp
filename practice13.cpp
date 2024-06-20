//Reverse the array by using Swap function

#include<bits/stdc++.h>
using namespace std;

vector<int> mainfunction(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s] , v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> ans){
        for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
}
int main(){
vector<int> v{1,2,3,4,5};
vector<int> ans = mainfunction(v);
print(ans);



return 0;
}