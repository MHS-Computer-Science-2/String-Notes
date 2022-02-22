//5-1 Intro to Chars and Strings
//  I CAN explain how a CHAR, INT, and STRING are related
//  I CAN explain how ACSII values represent characters
//  I CAN use a loop to access and modify the characters of a string

#include <iostream>
using namespace std;

int main()
{
    //The basic component of a string is a character:
    char ch = 'a'; 
    //chars use single quotes

    //Characters are both a symbol and a number
    
    cout << "After adding 2, ch = " << ch << endl;

    //Each character (letter/digit/emoji/etc) has a number value
    //ASCII - American Standard Code for Information Interchange
    cout << "The ASCII value of ch = " << int(ch) << endl;
    cout << "Character #7 is a beep: " << char(7) << endl;
    
    //A string is an array (list) of characters
    string str = "chemic pride a very special tradition";
    //strings use double quotes

    //The characters of a string can be accessed and changed
    //This line of code changes the first letter to 'C'
    
    
    //YOU TRY: change all the 'a's to '@'


    str[2] = str[2] + 2;    //Increase 3rd char by 2
    cout << "After changing, str = " << str << endl;

    //We can use a loop to access all the characters of a string
    for (int i = 0; i < str.length(); i++) {
        //if char i is a space
      
            //replace char i with a star
      
    }
    cout << "After looping through, str = " << str << endl;

    system("Pause");

}
