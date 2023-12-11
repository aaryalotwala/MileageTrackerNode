#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
    // References for MileageTrackerNode objects
    MileageTrackerNode* headNode;
    MileageTrackerNode* currNode;
    MileageTrackerNode* lastNode;

    double miles;
    string date;
    int i;
    int count;

    // Front of nodes list
    headNode = new MileageTrackerNode();
    lastNode = headNode;

    // TODO: Read in the number of nodes
    cin >> count;

    // TODO: For the read in number of nodes, read
    //       in data and insert into the linked list

    for (i = 0; i < count; i++){
        cin >> miles;
        cin >> date;
        currNode = new MileageTrackerNode(miles, date);

        lastNode-> InsertAfter(currNode);
        currNode-> PrintNodeData();
        lastNode = currNode;
    }

    // TODO: Call the PrintNodeData() method
    //       to print the entire linked list



    // MileageTrackerNode Destructor deletes all
    //       following nodes

    delete headNode;
}