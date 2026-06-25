
class Solution {
public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> prefix;
            vector<int> sufix(n);
            sufix[n-1] = 1;
            vector<int> answer;
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    prefix.push_back(1);
                    continue;
                }

                // [0,1,2]
                // [2,3,4]
                // 0-> 1
                // 1-> 1*2 = 2
                // 2-> 2*3 =6

                else {
                    prefix.push_back(prefix[i - 1]*nums[i-1]);
                }
            }
                //sufix
                 for (int i =n-2;i >= 0; i--) {
                // [0,1,2]
                // [2,3,4]
                // [12,4,1]
                // 0-> 3*4 =12
                // 1-> 4*1 =4
                // 2-> 1

                    sufix[i]=sufix[i + 1] * nums[i+1];


            }
                for (int i=0;i<n;i++) {
                    answer.push_back(prefix[i]*sufix[i]);
                }
            return answer;
        }
};
