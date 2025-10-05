#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#define DICTFILE "C:\\Users\\thoma\\Programs\\MadLib-Generator\\dict\\dictionary.txt"

// Load files: Text input and word type dictionary

// Open output file: output.txt default, permit new file name in args

// Iterate through words in text file and perform checks in order:
/*  1. Is word prefixed with period (Go back 2 indicies and check)
    2. Is first letter capitalized
    3. If 1 false and 2 true, then do proper noun check and skip remaining for this word
    4. Store word in var and find match in cache, then dictionary (set dictionary to 
       alpha order and use binary search: Will result in nlogn time).
    5. If match, do probability to replace word with blank and matching type
    6. If no match, ignore and proceed to next word
    * Either copy word to output or replace with blank marked with word type
    ** For each match, index in a cache with up to 100 words
*/

int main(void) {
    
}