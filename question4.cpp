/* question = find the number of record breaking days
1] it should be strictly greater than all previous days
2] it should be strictly greater than next day */


#include<iostream>
using namespace std;
int main(){
int n ; 
int array[n];
cin>> n;
for(int i = 0 ; i <n ; i++){
    cin>> array[i];
}
int mx = 0;
int answer = 0;
for(int i=0 ; i<n; i++){
    if(array[i]> mx && array[i]> array[i+1]){
        answer++;
        //mx = max(mx , array[i]);
    }
    mx = max(mx , array[i]);

}
cout<<answer<<endl;

return 0;
}