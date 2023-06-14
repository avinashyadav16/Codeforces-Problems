    /*
                                                                A. Word Capitalization
                                                              time limit per test:  2 seconds
                                                              memory limit per test:  256 megabytes
                                                              input:  standard input
                                                              output: standard output
                                                              
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.
Note, that during capitalization all the letters except the first one remains unchanged.

Input:
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output:
Output the given word after capitalization.

Examples:

input:
ApPLe
output:
ApPLe

input:
konjac
output:
Konjac

*/


#include<iostream>
#include<string>
#include <cctype>
using namespace std;
 
int main()
{
    int size;
    char c1;
    string word, cap_sub_word;
    cin >> word;
 
    c1 = word[0];
 
    size = word.length();
    cap_sub_word = word.substr(1,size);
 
    cout << (char)toupper(c1);
    cout << cap_sub_word;
    return 0;
}
