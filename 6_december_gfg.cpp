#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool isCellValid(vector<vector<int>> &grid, int i, int j)
    {
        if (i >= 0 and i < grid.size() and j >= 0 and j < grid[0].size() and grid[i][j] == INT_MAX)
            return true;
        return false;
    }

    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
