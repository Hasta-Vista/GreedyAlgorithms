#include <iostream>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    int kings = 0;
    if (r * c < 2) 
    {
        kings = 0;
    }
    else if (r == 1 || c == 1)
    {
        int area = max(r, c);
        if (area % 2 == 0)
        {
            kings = area / 2;
        }
        else
        {
            kings = (area / 2) + 1;
        }
    }
    else 
    {
        int rowFull = r - (r / 3 + (r % 3 != 0 ? 1 : 0));
        int partlyFullRow = r - rowFull;
        int partlyFullColumn = c - (c / 3 + (c % 3 != 0 ? 1 : 0));
        kings = rowFull * c + partlyFullRow * partlyFullColumn;
    }
    cout << kings << "\n";
    return 0;
}
