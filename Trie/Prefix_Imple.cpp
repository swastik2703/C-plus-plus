#include<iostream>
using namespace std;
/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

class TrieNode{
  public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    
    TrieNode(char ch){
        data = ch;
        
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
     
public:
    TrieNode* root;

    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode('\0');
    }
    
       void insertFunction(TrieNode* root, string word){
            //base case
            //string traverse ho chuka
            if(word.length() == 0){
                root -> isTerminal = true;
                return;
            }

            //index nikalo maping ke through
            //note we are considering CAPS
            int index = word[0] - 'a';
            TrieNode* child;

            //agar present hai
            if(root -> children[index] != NULL){
                //agae le jao bus
                child = root -> children[index];
            }

            else{
                //nhi hai present
                //phle node bnao
                child = new TrieNode(word[0]);
                root -> children[index] = child;
            }

            // ek case ho gaya baki recursion dekh lega
            insertFunction(child,word.substr(1));

        }

    /** Inserts a word into the trie. */
    void insert(string word) {
       insertFunction(root,word);
    }

      bool searchWord(TrieNode* root, string word){
            //base case 
            //entire traverse ho gaya
            if(word.length() == 0){
                //means terminal node return kardo
                return root -> isTerminal;
            }

            //index bnao
            int index = word[0] - 'a';
            TrieNode* child;

            //present hai
            if(root -> children[index] != NULL){
                //agae badha do bus
                child = root -> children[index];
            }

            //absent 
            else{
                return false;
            }

            //baki recursion dekh lega
            return searchWord(child,word.substr(1));
        }

    bool search(string word){
        return searchWord(root,word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool Prefix(TrieNode* root, string word){
         if(word.length() == 0){
                return true;
            }

            //index nikalo maping ke through
            //note we are considering CAPS
            int index = word[0] - 'a';
            TrieNode* child;

            //agar present hai
            if(root -> children[index] != NULL){
                //agae le jao bus
                child = root -> children[index];
            }

            else{
                //nhi hai present
                //phle node bnao
                return false;
            }

            // ek case ho gaya baki recursion dekh lega
            return Prefix(child,word.substr(1));

    }
    
    bool startsWith(string prefix) {
          return Prefix(root,prefix);
        }
    
};