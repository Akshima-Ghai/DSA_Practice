#include <iostream>

using namespace std;

void swap(int arr[],int b,int c){
    int temp=arr[b];
    arr[b]=arr[c];
    arr[c]=temp;
}

int main()
{
    int n,evenCount=0,oddCount=0,mergeIndex=0;
    cin>>n;
    int arr[n],even[n],odd[n],mergeArray[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[evenCount]=arr[i];
            evenCount++;
        }else{
            odd[oddCount]=arr[i];
            oddCount++;
        }
    }
    
    
    for(int j=0;j<evenCount;j++){
        for(int i=0;i<evenCount-1;i++){
            if(even[i]>even[i+1]){
                swap(even,i,i+1);
            }
        }    
    }
    for(int j=0;j<oddCount;j++){
        for(int i=0;i<oddCount-1;i++){
            if(odd[i]>odd[i+1]){
                swap(odd,i,i+1);
            }
        }
    }   
    
    for(int i=0;i<evenCount;i++){
        mergeArray[mergeIndex] = even[i];
        mergeIndex++;
    }
    for(int i=0;i<oddCount;i++){
        mergeArray[mergeIndex] = odd[i];
        mergeIndex++;
    }
    for(int i=0;i<mergeIndex;i++){
        cout<<mergeArray[i]<<" ";
    }
    return 0;
}
