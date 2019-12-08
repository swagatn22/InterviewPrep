//Submission 1
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>::iterator it ;
        unordered_map <int,int> M;
        for(int i = 0; i < nums.size(); i++) {
            if(M.find(nums[i]) != M.end())
            {
                it = M.find(nums[i]);
                M.erase(it);
            } else {
                M[nums[i]] = i;
            }
        }
        int x;
        for (it = M.begin(); it != M.end(); ++it) { 
            x = it->first;
        }
        return x;
    }
};

//Submission 2
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set <int> s;
        set<int>::iterator it;
        int sum = 0;
        int vecSum = 0;
        for(int i = 0; i < nums.size(); i++){
            vecSum += nums[i];
            s.insert(nums[i]);
        }
        
        for (it = s.begin(); it != s.end(); ++it) {
            sum += *it;
        }
        sum = 2*sum;
        return sum - vecSum;
    }
};

//Submission 3
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s = 0;
        for(int i = 0; i < nums.size(); i++){
            s = s^nums[i];
        }
        return s;
    }
};
