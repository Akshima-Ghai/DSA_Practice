#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int sp=2*n-3,num_count=1,val=1;
    for(int i=1;i<=n;i++){
        val=1;
        for(int j=1;j<=num_count;j++){
            cout<<val<<"\t";
            if(j<num_count){
                val++;     
            }
           
        }
        for(int j=1;j<=sp;j++){
            cout<<"\t";
        }
        
        for(int j=1;j<=num_count;j++){
            if(val==n){
                val--;
                continue;
            }
            cout<<val<<"\t";
            val--;
        }
        num_count++;
        sp-=2;
        cout<<endl;
    }
    //write your code here
    
}
