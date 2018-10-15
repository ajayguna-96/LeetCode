class Solution {
public:
    bool checkPerfectNumber(int num) {
    int sum = 1;
    for (int d = 2; sum <= num && d < sqrt(num); ++d) {
        if(num % d == 0){
            sum += (d + num / d);
        }
    }
    return (1 < num && sum == num);
    }
};
