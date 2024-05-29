// searching in 2d array 
// row and colums should be sorted 
// we start searching from top right elemnt in the array

#include<iostream>
using namespace std;
int main(){
int n1 , n2;
cin>>n1>> n2;
int array[n1][n2];
for(int i=0 ; i<n1 ; i++){
    for(int j=0 ; j<n2 ; j++){
        cin>>array[i][j];
    }
}
for(int i=0 ; i<n1 ; i++){
    for(int j=0 ; j<n2 ; j++){
        cout<<array[i][j]<<" ";
    }cout<<"\n";
}
int target;
cin>>target;
bool found = false;

int r = 0 , c =n2-1; // initialise the row and coloum which is top right elemrnt
while(r<n1 && c>=0){
    if(array[r][c]==target){
        found = true;
        break ;
    }
    if(array[r][c] > target){
        c--;
    }
    else{
        r++;
    }
}
if (found== true){
   cout<<" element found at" <<r<< " "<< c;
}
else{
    cout<<" element not found";
}

return 0;
}