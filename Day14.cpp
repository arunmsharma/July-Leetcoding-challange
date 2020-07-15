class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double hr=(hour + minutes/60.0)*(30);
        
        double mn=(minutes*6.0);
        
        double ans=abs(hr-mn);
        return min(ans,360-ans);
    }
};
