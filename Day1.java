class Solution {
    public int arrangeCoins(long n) {
        return (int)Math.floor((-1+Math.sqrt(1+8*n))/2);
    }
}