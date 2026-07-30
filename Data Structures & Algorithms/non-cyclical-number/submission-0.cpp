class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visit;

        while (visit.find(n) == visit.end()) {
            visit.insert(n);
            n = sumOfSquares(n);
            if (n==1) {
                return true;
            }
        }
        return false;
    }

    int sumOfSquares(int num) {
        int sum = 0;
        while (num > 0) {
            sum += (num%10) * (num%10);
            num /= 10;
        }
        return sum;
    }
};
