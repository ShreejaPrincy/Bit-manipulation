//Time Complexity: O(log n * log n)
//Space Complexity: O(1)
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if(dividend==divisor)   return 1;

        bool sign=true;
        if(dividend>=0 && divisor<0) sign=false;
        if(dividend<0 && divisor>=0) sign=false;
        
        long long n=llabs((long long)dividend);
        long long d=llabs((long long)divisor);

        long long ans=0;
        while(n>=d){
            int cnt=0;
            while(n>=(d<<(cnt+1))){
                cnt++;
            }
            ans+=1LL<<cnt;
            n=n-(d<<cnt);
        }
        
        ans=sign?ans:(-ans);
        return (int)ans;
    }
};
