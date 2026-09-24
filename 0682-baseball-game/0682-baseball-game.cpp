class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>res;
        for(auto &op :operations){
            if(op=="C"){
                res.pop_back();
            }
            else if(op=="D"){
                int n=res.back()*2;
                res.push_back(n);
            }
            else if(op=="+"){
                int m=res[res.size()-1]+res[res.size()-2];
                res.push_back(m);
            }
            else {
                res.push_back(stoi(op));
            }

        }
        int s=0;
        for(int i=0;i<res.size();i++){
            s+=res[i];
        }
        return s;
        
    }
};