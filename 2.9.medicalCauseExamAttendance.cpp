#include <iostream>

using namespace std;

int main()
{
    
    int classHeld,classAttended,attendance;
    string medical;
    cout<<"Number of Classes held"<<endl;
    cin>>classHeld;
    cout<<"Number of Classes attended"<<endl;
    cin>>classAttended;
    attendance = (classAttended/classHeld)*100;
    if(attendance<75){
        cout<<"Do You have any medical Cause?"<<endl;
        cin>>medical;
        if(medical=="yes"){
            cout<<"You are allowed to give the examionation.";
        }
        else{
            cout<<"Not allowed to sit in examionation";
        }
    }else{
        cout<<"All the best for your paper";
    }
    return 0;
}
