//search element in 2d array

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    int array[n][m];
    //  cin>>n>>m;
    for(int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<m ; j++){
            cin>>array[i][j];
        }
    }
    
    for(int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<m ; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }
    int x;
    cin>>x;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(array[i][j] == x){
                cout<<"element is found"<<endl;
                cout<<i<<" "<<j;
            }
        }
    }

return 0;
}