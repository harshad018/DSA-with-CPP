//solved with brut force myself, just saw the optimal solution from the notes.


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {


        int n = nums.size();

        vector<vector<int>> ans;

        //sort the array

        sort(nums.begin(), nums.end());

        for ( int i = 0; i < n ; i++){

            if ( i > 0 && nums[i] == nums[i-1]) continue;


            int left = i + 1;

            int right = n - 1;

            while ( left < right){



                int sum = nums[i] + nums[left] + nums[right];


                if ( sum == 0){




                    ans.push_back({nums[i], nums[left], nums[right]});


                    //avoid duplicate

                    while ( left < right && nums[left] == nums[left+1]) left++;

                    while ( left < right && nums[right] == nums[right-1]) right--; 



                    //next elements

                    left++;
                    right--;
                }

                else if ( sum < 0){

                    left++;
                }else{

                    right--;
                }
            }


        }

        return ans;

        

       


       
        
    }
};