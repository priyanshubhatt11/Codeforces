#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>> vec(n, vector<char> (n));
        int x=0, one[2], two[2];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>vec[i][j];
                if(vec[i][j] == '*'){
                    one[x] = i;
                    two[x] = j;
                    x++;
                }
            }
        }
        // cout<<one[0]<<" "<<two[0];
        // cout<<one[1]<<" "<<two[1];
        if(one[0] == one[1]){
            if(one[0] + 1 < n){
                vec[one[0] +1][two[0]] = '*';
                vec[one[0] +1][two[1]] = '*';
            }
            else{
                vec[one[0] -1][two[0]] = '*';
                vec[one[0] -1][two[1]] = '*';
            }
        }
        else if(two[0] == two[1]){
            // cout<<"fffffffffff";
            if(two[0] + 1 < n){
                vec[one[0]][two[0] +1] = '*';
                vec[one[1]][two[1] +1] = '*';
            }
            else{
                vec[one[0]][two[0] -1] = '*';
                vec[one[1]][two[1] -1] = '*';
            }
        }
        else{
            vec[one[1]][two[0]] = '*';
            vec[one[0]][two[1]] = '*';
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<vec[i][j];
            }
            cout<<endl;
        }
    }
}