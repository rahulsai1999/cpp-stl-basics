#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rows, cols, s;
    vector<int> oned;
    vector<vector<int>> twod;
    cout << "\nEnter number of rows: ";
    cin >> rows;
    cout << "\nEnter number of cols: ";
    cin >> cols;

    for (int i = 0; i < rows; ++i)
    {
        vector<int> temp;
        temp.clear();
        for (int j = 0; j < cols; ++j)
        {
            cin >> s;
            temp.push_back(s);
        }
        twod.push_back(temp);
    }

    for (int i = 0; i < rows; ++i)
    {
        cout << "\n";
        for (int j = 0; j < cols; ++j)
        {
            cout << twod[i][j]<<" ";
        }
    }

    return 0;
}
