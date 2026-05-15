
// ===============================================
// TOPIC: C++ String Member Functions
// This program demonstrates the most important
// string functions in C++ with comments.
// ===============================================

#include <iostream>
#include <string>
using namespace std;

int main() {

    // Creating a string
    string text = "Hello";

    cout << "Original String: " << text << endl;

    // =====================================================
    // 1. length() and size()
    // Returns the number of characters in the string
    // =====================================================

    cout << "\n--- length() and size() ---" << endl;

    cout << "Length of string: " << text.length() << endl;
    cout << "Size of string: " << text.size() << endl;

    // =====================================================
    // 2. empty()
    // Checks whether the string is empty or not
    // =====================================================

    cout << "\n--- empty() ---" << endl;

    if(text.empty()) {
        cout << "String is empty" << endl;
    } else {
        cout << "String is NOT empty" << endl;
    }

    // =====================================================
    // 3. clear()
    // Removes all characters from the string
    // =====================================================

    string temp = "Temporary";

    cout << "\nBefore clear(): " << temp << endl;

    temp.clear();

    cout << "After clear(): " << temp << endl;

    // =====================================================
    // 4. at(index)
    // Access character using index with safety checking
    // =====================================================

    cout << "\n--- at() ---" << endl;

    cout << "Character at index 1: " << text.at(1) << endl;

    // =====================================================
    // 5. front() and back()
    // Access first and last character
    // =====================================================

    cout << "\n--- front() and back() ---" << endl;

    cout << "First character: " << text.front() << endl;
    cout << "Last character: " << text.back() << endl;

    // =====================================================
    // 6. append()
    // Adds another string at the end
    // =====================================================

    cout << "\n--- append() ---" << endl;

    text.append(" World");

    cout << "After append(): " << text << endl;

    // =====================================================
    // 7. push_back()
    // Adds a single character at the end
    // =====================================================

    cout << "\n--- push_back() ---" << endl;

    text.push_back('!');

    cout << "After push_back(): " << text << endl;

    // =====================================================
    // 8. insert()
    // Inserts a string at a specified position
    // =====================================================

    cout << "\n--- insert() ---" << endl;

    text.insert(5, " C++");

    cout << "After insert(): " << text << endl;

    // =====================================================
    // 9. erase()
    // Removes characters from the string
    // erase(position, number_of_characters)
    // =====================================================

    cout << "\n--- erase() ---" << endl;

    text.erase(5, 4);

    cout << "After erase(): " << text << endl;

    // =====================================================
    // 10. replace()
    // Replaces a portion of the string
    // =====================================================

    cout << "\n--- replace() ---" << endl;

    text.replace(6, 5, "Universe");

    cout << "After replace(): " << text << endl;

    // =====================================================
    // 11. substr()
    // Extracts a substring
    // substr(starting_position, length)
    // =====================================================

    cout << "\n--- substr() ---" << endl;

    string sub = text.substr(6, 8);

    cout << "Substring: " << sub << endl;

    // =====================================================
    // 12. find()
    // Searches for a substring
    // Returns starting index if found
    // =====================================================

    cout << "\n--- find() ---" << endl;

    int position = text.find("Universe");

    cout << "\"Universe\" found at index: " << position << endl;

    // =====================================================
    // 13. compare()
    // Compares two strings lexicographically
    // Returns:
    // 0  -> equal
    // <0 -> first string smaller
    // >0 -> first string greater
    // =====================================================

    cout << "\n--- compare() ---" << endl;

    string s1 = "Apple";
    string s2 = "Banana";

    int result = s1.compare(s2);

    cout << "Comparison result: " << result << endl;

    // =====================================================
    // 14. c_str()
    // Converts C++ string to C-style character array
    // =====================================================

    cout << "\n--- c_str() ---" << endl;

    const char* cString = text.c_str();

    cout << "C-style string: " << cString << endl;

    // =====================================================
    // Program End
    // =====================================================
    cout<<text<<endl;
    string t=text.append("hello");
    cout<<t<<endl;
    cout<<text<<endl;

    return 0;
}
