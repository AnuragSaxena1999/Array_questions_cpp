#include<bits/stdc++.h>
using namespace std;
int  firstocc(int array[] , int n , int key){
    int s = 0;
    int e = n;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(array[mid]==key){
            ans = mid;
            e = mid-1;
        }else if(array[mid]>key){
            e=mid-1;
        }else if(array[mid]<key){
            s= mid+1;
        }
    }
    return ans;
}
int lastocc(int array[] , int n , int key){
    int s = 0;
    int e = n;
    int ans=-1;
    while(s<=e){
        int mid = (e+s)/2;
        if(array[mid]==key){
            ans = mid;
            s = mid+1;
        }else if(array[mid]>key){
            e = mid-1;
        }
        else{
            s= mid+1;
        }
    }
    return ans;
}

int main(){
    // int n ;
    // cin>>n;
    int array[10] = {1,2,2,2,2,2,2,2,4,9};
    // for(int i = 0; i<n ; i++){
    //     cin>>array[i];
    // }
    // int key;
    // cin>>key;
    cout<<firstocc(array,10,2)<<" "<<lastocc(array,10,2);
    cout<<"total number of occurence is:"<<lastocc(array,10,2)-firstocc(array,10,2)+1;
    
return 0;
}