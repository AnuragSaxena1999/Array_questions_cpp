// transpose of a matrix(2d array)

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    int array[n][m];
    for(int i= 0 ; i<n ; i++){
        for(int j =0 ; j<m ; j++){
            cin>> array[i][j];
        }
    }
    
    for(int i= 0 ; i<n ; i++){
        for(int j =0 ; j<m ; j++){
            cout<< array[i][j]<< " ";
        }cout<<"\n";
    }

    for(int i =0 ; i<n ; i++){
        for(int j=i ; j<m ; j++){
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
    for(int i= 0 ; i<n ; i++){
        for(int j =0 ; j<m ; j++){
            cout<< array[i][j]<< " ";
        }cout<<"\n";
    }
return 0;
}