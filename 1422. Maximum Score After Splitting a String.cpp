class Solution {
public:
    int maxScore(string s) {
       int n=s.size();
       int oc=0;
       for(int i=0;i<n;i++){
        if(s[i]=='1'){
            oc++;
        }
       }
        int zc=0;
        int max_score=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                oc--;
            }
            else{
                zc++;
            }

            max_score=max(max_score,oc+zc);
        } 
       return max_score;
    }
};