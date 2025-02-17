class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    
        if (n == 0) return true;
    
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 1) continue;
            else{
                if(flowerbed[i] == 0){
                    if(flowerbed.size() == 1 && n <= 1) return true;
                    if(i == flowerbed.size() - 1){
                        if(flowerbed[i-1] != 1){
                            flowerbed[i] = 1;
                            n--;
                        }
                    }
                    else if(i == 0){
                        if(flowerbed[i+1] != 1){
                            flowerbed[i] = 1;
                            n--;
                        }
                    }
                    else{
                        if(flowerbed[i+1] != 1 && flowerbed[i-1] != 1){
                            flowerbed[i] = 1;
                            n--;
                        }
                    }
                }
            }
        }
    
        if (n > 0) return false;
        else return true;
    
        }
    };