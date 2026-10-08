#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> fares = {500, 700, 1000, 1500, 2500}; //boda boda fares one per stage(UGX)
    vector<string> stops = {"Wandegeya", "Bwaise", "Kalerwe", "Kawempe", "Kyebando",};// matching stage names with pages
cout<< stops[0] << ": " << fares[0] << "UGX\n"; // first stage
cout<< stops[4] << ":" << fares[4] << "UGX\n"; // last stage
    return 0;
}
