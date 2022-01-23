#include "list.h"
#include "list.cpp"
#include <cstdlib>

using namespace std;


int main(){
    List Ferit;

    Ferit.addNode(3);
    Ferit.addNode(4);
    Ferit.addNode(5);
    Ferit.printList();
    Ferit.delNode(3);
    Ferit.printList();

    return 0;
}