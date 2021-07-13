class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       if(n==0){
           return 0;
       }
       int x = josephus(n-1,k);
       int y = (x+k-1)%n;
       return y+1;
    }
};
