/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

 class Solution {
    public:
        int guessNumber(int n) {
            int res, idx = n/2;
            int num = n;
            while(true){
                res = guess(num);
                if(res == -1){
                    num = num-idx;
                    idx=idx/2;
                    if(idx == 0) idx = 1;
                }
                else if(res == 1){
                    num = num+idx;
                    idx=idx/2;
                    if(idx == 0) idx = 1;
    
                }
                else return num;
            }
        }
    };