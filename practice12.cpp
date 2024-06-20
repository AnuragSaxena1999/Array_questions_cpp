//book allocation problem
//painter problem
//Aggressive cows problem all three are similar to each other


#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& nums, int mid ,int k){
        int n = nums.size();
        int studentCount =1;
        int pageSum = 0;
        for(int i = 0; i<n;i++){
            if(pageSum + nums[i] <= mid){
                pageSum+=nums[i];
            }
            else{
                studentCount++;
                if(studentCount>k || mid < nums[i]){
                    return false;
                }
                pageSum = nums[i];
            }
        }
        return true;
    }
 int bookAllocation(vector<int>& nums,  int k) {
        int n = nums.size();
        int s = 0;
        int sum = 0;
        int ans = -1;
        for(int i = 0; i<n ; i++){
            sum += nums[i];
        }
        int e = sum;
        
        while(s<=e){
            int mid = (s+e)/2;
            if(isPossible(nums,mid ,k)) {
                ans = mid;
                e = mid-1;
            }else{
                s= mid+1;
            }
        }
        return ans;
    }
int main(){
    vector<int> nums{ 1,2,3,4,5};
    int k = 2;
    cout<<bookAllocation(nums , k);

return 0;
}