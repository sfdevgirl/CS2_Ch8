//*****************

//Project Name: Chapter 8 Project: Search/Sort Utilities

//Project Description: You will extend your utilities include files to include search and sort functions.

//Project Author: Smith, Shannon

//Is this an extra credit Project:  No

//Date completed: 08/30/2016

//Operating system used: OSX

//IDE Used:  xCode

//*****************



#include <vector>
#include "utilities.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;




//main
int main(int argc, const char * argv[]) {
    
    
    bool binarySearchBool;
    bool linearSearchBool;
    int binaryInt;
    int linearInt;
    bool tempBool = true;
    string answerString;
    bool keepGoing = true;
    string goAgain;
    
    
    vector<int> numList;
    do{
        
        initVector(numList);
        cout <<"\nPRINT VECTOR" << endl;
        displayVector(numList);
        cout << endl;
        cout << "Decending\n";
        intVectorSelectionSort(numList, 'D');
        displayVector(numList);
        cout << "\nAscending\n";
        intVectorSelectionSort(numList, 'A');
        displayVector(numList);
        
       
        do{
             //binary
            cout << "What number would you like to do a binary search for?\n";
            cin >> binaryInt;
            clearCIN();
            binarySearchBool = intVectorBinSearch(numList, binaryInt);
            if(binarySearchBool == true){
                cout << "Number " << binaryInt << "  was found\n";
            }//if
            else {
                cout << "Number " << binaryInt << " was not found\n";
            }//else
            
            //linear
            cout << "What number would you like to do a linear search for?\n";
            cin >> linearInt;
            clearCIN();
            
            linearSearchBool = intVectorLinSearch(numList, linearInt);
            if(linearSearchBool == true){
                cout << "Number " << linearInt <<  " was found\n";
            }//if
            else {
                cout << "Number " << linearInt << " was not found\n";
            }//else
            while(true){
                cout << "Keep searching? 'y' or 'n'\n";
                getline(cin, answerString);
                if(makeUpperCase(answerString) == "Y"){
                    tempBool = true;
                    break;
                }//if
                else if (makeUpperCase(answerString) == "N"){
                    tempBool = false;
                    break;
                }//else if
                else{
                    cout << "ERROR\n";
                    continue;
                }//else
            }//while
        }//do
        while(tempBool);
        
        while(true){
            
            
            cout << "Run again?\n";
            getline(cin, goAgain);
            
            if(makeUpperCase(goAgain) == "Y"){
                keepGoing = true;
                break;
            }//if
            else if (makeUpperCase(goAgain) == "N"){
                keepGoing = false;
                break;
            }//else if
            else{
                cout << "ERROR\n";
                continue;
            }//else
        }//while
    }//do
    while(keepGoing);



    return 0;
}//main

