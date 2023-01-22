// Time: O(n*log(n)), quick sort

class Solution {
public:
    vector<int> merge(vector<int> vL, vector<int> vR) {
      vector<int> vCur (vL.size() + vR.size(), 0);
      int iL = 0, iR = 0, iCur = 0;
      
      while (iL < vL.size() && iR < vR.size()) {
        if (vL[iL] < vR[iR]) vCur[iCur++] = vL[iL++]; // элемент из левого подмассива записываем, двигаем индексы
        else vCur[iCur++] = vR[iR++];
      }

      while (iL < vL.size()) {
        vCur[iCur++] = vL[iL++];
      }

      while (iR < vR.size()) {
        vCur[iCur++] = vR[iR++];
      }
      return vCur;
    }


    vector<int> sortArray(vector<int>& nums) {
      if (nums.size() < 2) return nums;
      int pivot = nums.size() / 2; // индекс опорного элемента - средний элемент
      
      vector<int> vLeft = vector<int>(nums.begin(), nums.begin() + pivot);
      vector<int> vRight = vector<int>(nums.begin() + pivot, nums.end()); // pivot в этом векторе

      vector<int> sortvL = sortArray(vLeft); 
      vector<int> sortvR = sortArray(vRight); 

      return merge(sortvL, sortvR);
    }
};
