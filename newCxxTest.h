//Copyright 2022
//
// Created by Arya Lotwala on 2/15/22.
//

#ifndef MILEAGETRACKERNODE_NEWCXXTEST_H
#define MILEAGETRACKERNODE_NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
#include "MileageTrackerNode.h"

class MyTestSuite1 : public CxxTest::TestSuite {
public:
    void TestOne() { //testing all default constructor

        MileageTrackerNode* obj = new MileageTrackerNode(); // making space for the pointer
        TS_ASSERT_EQUALS(obj->GetMiles(), 0); // miles to 0
        TS_ASSERT_EQUALS(obj->GetDate(), ""); // date to "" empty string
        obj->PrintNodeData(); // printting out the info

        delete obj; // removing obj from the memory
    }


    void TestTwo() { // testing with real numbers and date

        MileageTrackerNode* obj = new MileageTrackerNode(2.2, "Date"); // making space for the by using new pointer
        TS_ASSERT_EQUALS(obj->GetMiles(), 2.2); // miles to 2.2
        TS_ASSERT_EQUALS(obj->GetDate(), "Date"); // date to something
        obj->PrintNodeData(); // printing out the info

        MileageTrackerNode* obj2 = new MileageTrackerNode(3.2, "AAA", obj); // making space for the pointer
        TS_ASSERT_EQUALS(obj2->GetMiles(), 3.2); // miles to 3.2
        TS_ASSERT_EQUALS(obj2->GetDate(), "AAA"); // date to something
        TS_ASSERT_EQUALS(obj2->GetNext(), obj); // assigning getnext to last obj
        obj2->PrintNodeData(); // printing info for obj2

        MileageTrackerNode* obj3 = new MileageTrackerNode(4.2, "BBB", obj2); // making space for the pointer
        TS_ASSERT_EQUALS(obj3->GetMiles(), 4.2); // miles to 4.2
        TS_ASSERT_EQUALS(obj3->GetDate(), "BBB"); // date to BBB
        TS_ASSERT_EQUALS(obj3->GetNext(), obj2); // assigning getnext fucntion with last obj2
        obj3->PrintNodeData(); // printing info for obj3

        obj->InsertAfter(obj2); // setting for insertafter
        obj2->InsertAfter(obj3); // setting the correct order to printing the pointers in

        TS_ASSERT_EQUALS(obj->GetNext(), obj2); // printing the pointers into correct order
        TS_ASSERT_EQUALS(obj2->GetNext(), obj3); // printing the poiners into correct order


        delete obj3; // deleting the last obj3

    }

//    void TestFour() {
//        MileageTrackerNode* obj = new MileageTrackerNode(5.2, "CCC");
//        TS_ASSERT_EQUALS(obj->GetMiles(), 5.2);
//        TS_ASSERT_EQUALS(obj->GetDate(), "CCC");
//        obj->PrintNodeData();
//
//        MileageTrackerNode* obj2;
//
//    }

};

#endif //MILEAGETRACKERNODE_NEWCXXTEST_H
