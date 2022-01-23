#include <iostream>
#include <string>
#include <list>

using namespace std;

struct Channel{
    string Name;
    int Subs;

    Channel(string name, int subs){
        Name = name;
        Subs = subs;
    }
    bool operator==(const Channel& channel) const{
        return this->Name == channel.Name;
    }
};

struct Collection{
    list<Channel> myChannels;

    void operator+=(Channel& ch){
        this->myChannels.push_back(ch);
    }
    void operator-=(Channel& ch){
        this->myChannels.remove(ch);
    }
};


ostream& operator<<(ostream& COUT, Channel& ch){
    COUT << "Name: " << ch.Name << endl;
    COUT << "Subs: " << ch.Subs << endl;
    return COUT;
}


ostream& operator<<(ostream& COUT, Collection& myCollection){
    for(Channel ytChannel:myCollection.myChannels)
        COUT << ytChannel << endl;
        return COUT;
}

int main(){
    Channel ch1 = Channel("ferit", 4);
    Channel ch2 = Channel("memet", 5);
    Collection myCol;
    myCol += ch1;
    myCol += ch2;
    cout << myCol;
    myCol-=ch2;
    cout << myCol;
    return 0;
}