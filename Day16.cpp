//problem link:-https://leetcode.com/explore/featured/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3392/

double myPow(double x, long long  n){
    double temp;
    if(n==0){
        return 1.0;
    }
    temp=myPow(x,n/2);
    if(n%2==0){
        return temp*temp;
    }
    else{
        if(n>0){
            return temp*temp*x;
        }
        else{
            return temp*temp/x;
        }
    }
    
}
