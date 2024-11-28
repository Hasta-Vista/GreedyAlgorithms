
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
static bool comparator(const vector<int>& to1, const vector<int>& to2) {
    return to1[1] < to2[1];
}
int main() {
    int residents, from, to;
    cin >> residents;
    vector<vector<int>> intervals;
    for (int i = 0; i != residents; ++i) {
        if (cin >> from >> to) {
            intervals.push_back({ from, to });
        }
    }
    sort(intervals.begin(), intervals.end(), comparator);
    vector<int> result;
    int time = 0;
    for (int i = 0; i != intervals.size(); ++i) {
        if (time < intervals[i][0]) {
            time = intervals[i][1];
            result.push_back(time);
        }
    }
    cout << result.size() << endl;
    copy(result.begin(), result.end() - 1, ostream_iterator <int>(cout, " "));
    cout << result.back() << endl;
    intervals.clear();
    result.clear();
    return 0;
}
