/*#My Leet Code id = im-yash21
#Runtime:528 ms , Memory Usage: 11.7 MB */
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
         vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                count++;
                for (int j = 2 * i; j < n; j = j + i) {
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};