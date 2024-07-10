#include <iostream>
#include <string>

using namespace std;

// Function to check if str can be constructed by repeating sub
bool isRepeat(const string &str, const string &sub) {
    if (str.size() % sub.size() != 0) return false;
    string repeated;
    for (int i = 0; i < str.size() / sub.size(); ++i) {
        repeated += sub;
    }
    return repeated == str;
}

// Function to find the GCD of two strings
string gcdOfStrings(string str1, string str2) {
    // Calculate the lengths of the strings
    int len1 = str1.length();
    int len2 = str2.length();

    // Check concatenation
    if (str1 + str2 != str2 + str1) {
        return "";
    }

    // Find the greatest common divisor of the lengths
    while (len2 != 0) {
        int temp = len2;
        len2 = len1 % len2;
        len1 = temp;
    }

    return str1.substr(0, len1);
}

int main() {
 string word1 = "ABABAB";
 string word2 = "AB";

    // Invoke the function
    string result = gcdOfStrings(word1, word2);
    if (!result.empty()) {
        cout << "The GCD is " << result << endl;
    } else {
        cout << "There is no GCD" << endl;
    }

    return 0;
}
