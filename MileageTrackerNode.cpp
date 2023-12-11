//Copyright 2022
//
// Created by Arya Lotwala on 2/14/22.
//

#include "MileageTrackerNode.h"
#include <iostream>

/*
 * function to setting default constructor
 */
MileageTrackerNode::MileageTrackerNode() { // Constructor
    miles = 0.0;
    date = "";
    nextNodeRef = nullptr;
}


/*
 * function for deleting the nextNodeRef
 */
MileageTrackerNode::~MileageTrackerNode() { // Destructor
//    if (nextNodeRef != nullptr) {
//        delete nextNodeRef;
//    }
}

/*
 * Function for assinging variable with private variable
 */
MileageTrackerNode::MileageTrackerNode(double milesInit, std::string dateInit) { // Constructor

    miles = milesInit;
    date = dateInit;
    nextNodeRef = nullptr;
}

/*
 * Function for assigning variable with private variable and assiging nextLoc with private variable
 */
MileageTrackerNode::MileageTrackerNode(double milesInit, std::string dateInit, MileageTrackerNode* nextLoc) { // Constructor

    miles = milesInit;
    date = dateInit;
    nextNodeRef = nextLoc;
}

/* Insert node after this node.
Before: this -- next
After:  this -- node -- next
*/
void MileageTrackerNode::InsertAfter(MileageTrackerNode* nodeLoc) {
    MileageTrackerNode* tmpNext;

    tmpNext = nextNodeRef;
    nextNodeRef = nodeLoc;
    nodeLoc->nextNodeRef = tmpNext;
}

/*
 * Get location pointed by nextNodeRef
 */
MileageTrackerNode* MileageTrackerNode::GetNext() {
    return nextNodeRef;
}

/*
 * Function to print out the info
 */
void MileageTrackerNode::PrintNodeData() {
    std::cout << miles << ", " << date << std::endl;
}

/*
 * function to get the miles
 */
double MileageTrackerNode::GetMiles() {
    return this-> miles;
}

/*
 * function to get date
 */
std::string MileageTrackerNode::GetDate() {
    return this-> date;
}
