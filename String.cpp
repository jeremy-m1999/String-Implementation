#include <iostream>
#include <exception>
#include "String.h"
using namespace std;

/*
String.cpp
Date: January 27th, 2022
Description: Implements the String interface and the methods inside of it to test
all possible error cases in test.cpp.

@author Jeremy Mednik
*/


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Calls Constructor
String:: String() : value{""} {
  cout << "in default" << endl;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Constructor that inputs a pointer
String:: String(const char* cString) {
  //Case for null pointer
  if (cString == nullptr) {
    //Throw invalid argument exception
    throw invalid_argument("ERROR: Invalid Argument Exception");
  }
  else {
    //Sets value to the pointer of the member variable of cString
    value = cString;
  }
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Constructor that inputs an address
String:: String(const String& cString) {
  //Sets member variable to the member variable of another string object
  value = cString.value;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Destructor
String:: ~String() {}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Creates a string conversion from object String
string String:: toString() {
  //Returns string value contained in the object String
  return value;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Returns the size of a String
int String :: length() {
  //Returns int value from the length of the string in the object String
  return value.length();
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Creates a substring of type String given the start index and end index of a given String.
String String :: substring(int start, int end) {
  /*
  If the indexes set by the user do not match the bounds of the string, an out of
  range exception will be thrown. Otherwise, the method returns a substring of type
  String.
  */
  if (start < 0 || start > end || end >= value.length()) {
    string str = "Invalid string indices: " + to_string(start) + " , " + to_string(end);
    throw out_of_range(str.c_str());
  }
  return(String(value.substr(start,end).c_str()));
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Operator == overload (Compares two Strings)
bool String :: operator==(const String& other) {
  //Returns a boolean value for if two Strings == each other
  return (value == other.value);
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Operator += overload (Adds two Strings together)
String& String :: operator+=(const String& other) {
  //Adds a String to another String
  this-> value += other.value;
  //Returns a pointer to the added Strings
  return (*this);
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//Operator = overload (Sets a String equal to another String)
String& String :: operator=(const String& other) {
  //Sets a String equal to another String
  this -> value = other.value;
  //Returns a pointer to the changed String
  return (*this);
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
