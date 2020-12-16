#include <iostream>
using namespace std;

// addWord : this function will add a single string word to
// the dictionary

// countPrefixes : This function will count the number of words int e
// dictionary that have a string prefix as prefix

// countWords This function will count the number of words
// in the dictionary that match exactly with a given string 
// word 

// initialize our trie will only support letters of the 
// english alphabet

// some field required for number of words, complete word or a prefix
// how many words are represented by a prefix
// because there can be repeated words


class trie
{
    int words;
    int prefixes;
    trie *edges[26];
    void initialize(trie *vertex);
    void addWord(trie *vertex, string word);
};
void trie ::initialize(trie *vertex)
{
    vertex->words = 0;
    vertex->prefixes = 0;
    for (int i = 0; i < 26; i++)
    {
        vertex->edges[i] = NULL;
        // all the children to no edge
    }
}
void trie :: addWord(trie* vertex, string word)
{
    if(word.size() == 0)
    {
        vertex->words++;
    }
    else
    {
        vertex->prefixes++;
        
    }
}
