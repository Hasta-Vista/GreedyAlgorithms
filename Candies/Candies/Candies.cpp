#include <iostream>
using namespace std;
long long Places(long long candies) {
    long long used = 0, half, maxPlaces = 0;
    while (used <= candies) {
        half = used + (candies - used) / 2;
        long long sum = half * (half + 1) / 2;
        if (sum <= candies) {
            maxPlaces = half;
            used = half + 1;
        }
        else {
            candies = half - 1;
        }
    }
    return maxPlaces;
}
int main() {
    long long candies;
    cin >> candies;
    cout << Places(candies) << endl;
    return 0;
}
    
