#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int sp=n/2,st=1,num_time=1,num=1,val=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++){
            cout<<"\t";
        }
        num=num_time;
        for(int j=1;j<=st;j++){
            cout<<num<<"\t";
            if(j<=st/2){
                num++;    
            }else{
                num--;
            }
            
            
        }
        cout<<endl;
        if(i<=n/2){
            sp--;
            st+=2;
            num_time++;
        }else{
            sp++;
            st-=2;
            num_time--;
        }
    }
    //write your code here
    
}
