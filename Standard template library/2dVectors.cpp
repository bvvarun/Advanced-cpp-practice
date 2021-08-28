#include <iostream>
#include <vector>

using namespace std;

int main() {

    // A 2d vector is initialized using vector within a vector
    vector< vector<int> > grid(3, vector<int>(4, 7));
    
    //To add more elements to 2nd row
    grid[1].push_back(8);

    //Iterate over both dimensions to display elements
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j] << flush;
        }

        cout << endl;
        
    }
    
    

    return 0;
}