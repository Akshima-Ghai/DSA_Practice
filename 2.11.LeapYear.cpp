#include <iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;
    //(year%4==0) ? ((year%100==0) ? ((year%400==0) ? cout<<year<<" is a leap year" : cout<<year<<" is not a leap year") : cout<<year<<" is a leap year") : cout<<year<<" is not a leap year";
    if((year%400==0)||(year%4==0 && year%100!=0))
		cout<<year<<" is Leap year"<<endl;
	else
		cout<<year<<" is not Leap year"<<endl;
    return 0;
}
