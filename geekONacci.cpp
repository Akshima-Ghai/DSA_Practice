#include<iostream>
using namespace std;
int geek(int a,int b,int c,int n){
    if(n==4){
	   int sum=a+b+c;
	   cout<<sum<<endl;
	   return 0;
	}
	geek(b,c,a+b+c,--n);
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,n;
	    cin>>a>>b>>c>>n;
	    geek(a,b,c,n);
	}
	
	return 0;
}
