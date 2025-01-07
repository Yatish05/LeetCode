class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;

        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i==j){
                    continue;
                }
                if(isSubstring(words[i],words[j])){
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
        
    }
    bool isSubstring(const string & small,const string& large){
    if(small.size()>large.size()){
        return false;
    }

    for (int i=0;i<=large.size()-small.size();i++){
        bool match=true;
        for (int j=0;j<small.size();j++){
            if(large[i+j]!=small[j]){
                match=false;
                break;
            }
        }
        if(match)
        return true;
    }
    return false;
    }
};



