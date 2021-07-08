#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    int sp=0,st=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++){
            cout<<"\t";
        }
        for(int j=1;j<=st;j++){
            if(i>1 && i<=n/2 && j>1 && j<st){
                cout<<"\t";
            }else{
                cout<<"*\t";
            }
            
        }
        cout<<endl;
        if(i<=(n/2)){
            st-=2;
            sp++;
        }else{
            st+=2;
            sp--;
        }
    }
    //write your code here
    
}
