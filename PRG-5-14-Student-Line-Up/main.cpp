//
//  main.cpp
//  PRG-5-14-Student-Line-Up
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  A teacher has asked all her students to line up according to their first name. For example,
//  in one class Amy will be at the front of the line, and Yolanda will be at the end.
//  Write a program that prompts the user to enter the number of students in the class,
//  then loops to read that many names. Once all the names have been read, it reports
//  which student would be at the front of the line and which one would be at the end of
//  the line. You may assume that no two students have the same name.
//
//  Input Validation: Do not accept a number less than 1 or greater than 25 for the number
//  of students.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strName,
           strNameFirst = "z", // Initialize at opposite end of alphabet
           strNameLast = "a";  // This makes the for loop work
    
    int intClassSize;
    
    cout << "Please enter the size of the class:\n";
    cin >> intClassSize;
    
    while(!cin || intClassSize <= 0 || intClassSize > 40)
    {
        cout << "A valid class size is from 1 to 40:\n";
        cin.clear();
        cin.ignore();
        cin >> intClassSize;
    }
    
    for(int i = 0 ; i < intClassSize ; i++)
    {
        cout << "Please enter the student's first name:\n";
        cin >> strName;
        
        if(strName < strNameFirst)
        {
            strNameFirst = strName;
        }
        if(strName > strNameLast)
        {
            strNameLast = strName;
        }
    }
    
    cout << "For your class size of " << intClassSize << " students,\n"
         << "your first student alphabetically is " << endl
         << strNameFirst << endl
         << "and your last student alphabetically is " << endl
         << strNameLast << endl;
    
    return 0;
}

