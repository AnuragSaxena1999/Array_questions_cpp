//Sqrt of any number with 3 decimal values

#include<bits/stdc++.h>
using namespace std;

long long int Sqrt(int number){
        int s = 0;
        int e = number;
        long long int ans = -1;
        while(s<=e){
            long long int mid = (s+e)/2;
            if(mid*mid==number){
                return mid;
            }
            if(mid*mid < number){
                ans = mid;
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return ans;
}
double preciseValue(int number , int precision , int tempSol){
    double ans = tempSol;
    double factor = 1;
    for(int i = 0; i<precision ; i++){
         factor = factor/10;
         for(double j = ans ; j*j<number ;j=j+factor){
            ans = j;
         }
    }
    return ans;
}
int main(){
    int n ;
    cout<<"enter your number"<<endl;
    cin>>n;

    int tempSol= Sqrt(n);
    cout<<preciseValue(n,3,tempSol)<<endl;
return 0;
}