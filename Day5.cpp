class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=0;
        for(int i=30;~i;--i){
            int a=x&(1<<i);
            int b=y&(1<<i);
            if(a!=b){
                c++;
            }
        }
        return c;
    }
};
