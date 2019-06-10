#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    //pair
    
    pair<int,int> pair1,pair3;
    pair<int,string> pair2;

    pair1=make_pair(1,2);
    pair2=make_pair(1,"test");
    pair3=make_pair(2,4);

    cout<<pair1.first<<"\n";
    cout<<pair2.second<<"\n";

    swap(pair1,pair3);
    cout<<pair1.first<<"\n";

    
    // tuple

    tuple<int, int, int> tuple1;
    tuple<int, string, string> tuple2;

    tuple1 = make_tuple(1, 2, 3); 
    tuple2 = make_tuple(1, "Tuple", "Pair Eg");

    int id;
    string first_name, last_name;

    tie(id, first_name, last_name) = tuple2;
   
    cout << id << " " << first_name << " " << last_name;

    return 0;
}