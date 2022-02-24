In this reiteration of the String class, I implemented a constructor, methods, and operators to ensure the String class functions normally. 

I created a test file, called test.cpp to explore all the functionalities of the newly created String class. 

To start, I created 4 different String objects: str, str2, str3, str4. str had the string "barry", str2 had the string of str, str3 had the string "lawson", and str4 was declared.

I started by outputting all of the Strings to the terminal using the method toString(). It printed everything I expected with nothing outputted for str4. I also tested the length of each String using [String name].length() which printed the correct lengths of each string.

I then wanted to output substrings of the current Strings. In my testing, I used a try-catch block exception to prevent the program crashing if there was incorrect indexes placed and instead outputted the out_of_range exception declared in substring(). Everything worked exactly as intended. 

Next, I outputted the addresses for each String to see if I could find any duplicate addresses (which there should not be). All of the addresses for str, str2, str3, str4 had unique addresses.

I then changed str2 = String(str4); which sets str2 to have no characters in the String since str4 is empty. I changed str2 = "mike" to move on with further analysis. This was to test the '=' operator.

I then outputted whether str == str (which is true) and it returned a 1. I then outputted whether str2 == str3 (which is false) and str2 == str4 (also false). Those boolean values both contained 0, so the boolean operator works.

Lastly, I wanted to test the '+=' operator. To do so, I added str += str so that str is now "barrybarry". This was confirmed in the output to the terminal. I also added str += str2 so that str should be equal to "barrybarrymike". This was confirmed in the terminal also.

I tested every case and the String class worked exactly as intended.