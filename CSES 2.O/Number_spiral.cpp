#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long row, col;
        cin>>row>>col;
        if(row > col){
            if(row%2 == 0){
                cout<<(row*row)-col+1;
            }
            else{
                row = row-1;
                cout<<(row*row)+col;
            }
        }
        else{
            if(col%2 == 0){
                col = col-1;
                cout<<(col*col)+row;
            }
            else{
                cout<<(col*col)-row+1;
            }
        }
        cout<<endl;
    }
    return 0;
}