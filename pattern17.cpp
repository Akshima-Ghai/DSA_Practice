#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    int sp=n/2,st=1;
    for(int i=1;i<=n;i++){
        if(i==(n/2+1)){
            for(int j=1;j<=n;j++){
                cout<<"*\t";
            }
            st--;
        }else if(i<(n/2+1)){
            for(int j=1;j<=sp;j++){
                cout<<"\t";
            }
            for(int j=1;j<=st;j++){
                cout<<"*\t";
            }
            st++;
        }else{
            for(int j=1;j<=sp;j++){
                cout<<"\t";
            }
            for(int j=1;j<=st;j++){
                cout<<"*\t";
            }
            st--;
        }
        cout<<endl;
    }
    //write your code here
    
}
