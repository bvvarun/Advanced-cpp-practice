#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {

    map< string, vector<int> > TrackList;

    TrackList["car1"] = {0, 0, 0};
    TrackList["car2"] = {0, 10, 0};
    TrackList["car3"] = {10, 10, 0};
    TrackList["car4"] = {10, 0, 0};

    //inserting using pair. map is made up of collection of pairs
    TrackList.insert(pair< string,vector<int> >("car5", {0, 20, 0}));

    //print the list of map using a loop
    for (map<string, vector<int>>::iterator it = TrackList.begin(); it != TrackList.end(); it++)
    {
        cout << it->first << ": ";

        for (int i = 0; i < it->second.size(); i++)
        {
            cout << it->second[i] << ",";
        }

        cout << endl;    
    }
    
    return 0;
}