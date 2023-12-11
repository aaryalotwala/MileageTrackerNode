//Copyright 2022
//
// Created by jinesh patel on 2/14/22.
//

#ifndef MILEAGETRACKERNODE_MILEAGETRACKERNODE_H
#define MILEAGETRACKERNODE_MILEAGETRACKERNODE_H


#include <string>
//using namespace std;

class MileageTrackerNode {
public:
    /*
     * function for constructor
     */
    MileageTrackerNode(); // Constructor

    /*
     * function for destructor
     */
    ~MileageTrackerNode(); // Destructor

    /*
     * function for constructor and assigning the variable
     */
    MileageTrackerNode(double milesInit, std::string dateInit);   // Constructor


    /*
     * function for constructor and assigning the variable
     */
    MileageTrackerNode(double milesInit, std::string dateInit, MileageTrackerNode* nextLoc); // Constructor

    /* Insert node after this node.
    Before: this -- next
    After:  this -- node -- next
    */
    void InsertAfter(MileageTrackerNode* nodeLoc);

    /*
     * Get location pointed by nextNodeRef
     */
    MileageTrackerNode* GetNext();

    /*
     * function for printing out the info
     */
    void PrintNodeData();

    /*
     * Get miles
     */
    double GetMiles();

    /*
     * get date
     */
    std::string GetDate();

private:
    double miles;         // Node data
    std::string date;          // Node data
    MileageTrackerNode* nextNodeRef; // Reference to the next node
};


#endif //MILEAGETRACKERNODE_MILEAGETRACKERNODE_H
