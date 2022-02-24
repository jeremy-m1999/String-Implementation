#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
String.h
Jeremy Mednik
Date: January 27th, 2022
Description: Creates the String interface and includes methods similar to
std::string to create a different implementation. Contains member variables,
constructors, methods, and operators.
*/

class String {
  private:
    //Member Variable
    string value;

  public:
    //Constructor
    String();
    String(const char* cString);
    String(const String& other);

    //Destructor
    ~String();

    //Methods
    string toString();
    int    length();
    String substring(int start, int end);

    //Operators
    bool    operator==(const String& other);
    String& operator=(const String& other);
    String& operator+=(const String& other);

};
