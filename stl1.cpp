#include <bits/stdc++.h>
using namespace std;

// Pairs  // pairs --> inside utility library
void explainPair(){

    pair<int,int> p={1,3};

    cout<< p.first <<" "<<p.second;

    pair<int , pair<int ,int >> P={1,{3,4}};

    cout<< P.first <<" "<<P.second.second <<" "<<P.second.first;

    pair<int,int>arr[]={{1,2},{3,4},{5,6}};

    cout<< arr[1].second;

}

int main(){
    cout<<"Hello World!!\n";
    explainPair();
    return 0;
}