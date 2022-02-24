#include <iostream>
#include <string>
#include "String.h"
using namespace std;

/*
test.cpp
Date: January 27th, 2022
Description: Tests all operations and methods for the String interface by creating
String objects and checking for possible errors.

@author Jeremy Mednik
*/


int main()
{
  /*
  Contains different string values for str, str2, str3: "barry", "barry",
  "lawson" respectfully
  */
  //Tests String(const char* cString)
  String str("barry");
  //Tests String(const String& cString)
  String str2(str);
  //Tests String(const char* cString)
  String str3("lawson");
  //Innitialises str4
  String str4;

  //Outputs "barry"
  cout << str.toString() << endl;
  //Outputs "barry"
  cout << str2.toString() << endl;
  //Outputs "lawson"
  cout << str3.toString() << endl;
  //Outputs ""
  cout << str4.toString() << endl;

  cout << "************************" << endl;

  //Outputs 5
  cout << str.length() << endl;
  //Outputs 5
  cout << str2.length() << endl;
  //Outputs 6
  cout << str3.length() << endl;
  //Outputs 0
  cout << str4.length() << endl;

  cout << "************************" << endl;


  try {
    //Outputs ERROR
    cout << str.substring(0, 7).toString() << endl;
  }
  catch (out_of_range& e){
    cout << e.what() << endl;
  }

  try {
    //Outputs arry
    cout << str2.substring(1, 4).toString() << endl;
  }
  catch (out_of_range& e){
    cout << e.what() << endl;
  }

  try {
    //Outputs "son"
    cout << str3.substring(3, 5).toString() << endl;
  }
  catch (out_of_range& e){
    cout << e.what() << endl;
  }

  try {
    //Outputs ERROR
    cout << str4.substring(1, 2).toString() << endl;
  }
  catch (out_of_range& e){
    cout << e.what() << endl;
  }


  cout << "************************" << endl;

  //Outputs address of str1
  cout << &str << endl;
  //Outputs address of str2
  cout << &str2 << endl;
  //Outputs address of str3
  cout << &str3 << endl;
  //Outputs address of str4
  cout << &str4 << endl;

  cout << "************************" << endl;

  //Changes str2 to str4 without changing str3 using '=' operator
  str2 = String(str4);
  //Outputs ""
  cout << str2.toString() << endl;
  //Changes str2 to str3 without changing str3 using '=' operator
  str2 = String(str3);
  //Outputs "lawson"
  cout << str2.toString() << endl;
  //Changes str2 to mike
  str2 = "mike";
  //Outputs "lawson"
  cout << str2.toString() << endl;

  cout << "************************" << endl;


  //Outputs true using '==' operator
  cout << (str == str) << endl;
  //Outpus false using '==' operator
  cout << (str2 == str3) << endl;
  //Outpus false using '==' operator
  cout << (str2 == str4) << endl;

  cout << "************************" << endl;

  //Adds "barry" to the String "barry" using '+=' operator
  str += str;
  //Outputs "barrybarry"
  cout << str.toString() << endl;
  //Adds "mike to the String "barrybarry" using '+=' operator
  str += str2;
  //Output "barrybarrymike"
  cout << str.toString()<< endl;

  cout << "************************" << endl;


  return 0;
}
