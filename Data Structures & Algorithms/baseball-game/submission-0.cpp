class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        vector<int> test;
        for(int i=0;i<n;i++){
            if(operations[i]=="+") test.push_back(test[test.size()-1] + test[test.size()-2]);
            else if(operations[i]=="D") test.push_back(2*test[test.size()-1]);
            else if(operations[i]=="C") test.pop_back();
            else test.push_back(stoi(operations[i]));
        }
        int j=test.size();
        int ans=0;
        for(int i=0;i<j;i++){
              ans+=test[i];
        }
        return ans;

    }
};