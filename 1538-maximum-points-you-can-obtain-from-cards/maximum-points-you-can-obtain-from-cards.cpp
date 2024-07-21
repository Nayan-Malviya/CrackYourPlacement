class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int alt = sum;
        for(int i=k-1;i>=0;i--){
            alt-=cardPoints[i];
            alt+=cardPoints[n-k+i];

            sum = max(alt,sum);
        }
        return sum;
    }
};