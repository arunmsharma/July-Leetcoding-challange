class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        prison(cells,1);
        prison(cells,(N-1)%14);
        return cells;
        
    }
    void prison(vector<int>&cells,const int &N){
        for(int i=0;i<N;i++){
            vector<int>v(8,0);
            for(int j=1;j<=6;j++){
                v[j]=!(cells[j-1]^cells[j+1]);
            }
            cells=v;
        }
    }
};
