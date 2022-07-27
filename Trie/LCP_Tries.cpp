#include<iostream>
#include<vector>
using namespace std;
class TrieNode{
  public:
    char data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;
    
    //constructor
    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
  public:
    TrieNode* root;
    
    //constructor
    Trie(char ch){
        root = new TrieNode(ch);
    }
    
    //insert Function
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
                root -> childCount++;
                root -> children[index] = child;
            }

            // ek case ho gaya baki recursion dekh lega
            insertFunction(child,word.substr(1));

        }

    /** Inserts a word into the trie. */
    void insert(string word) {
       insertFunction(root,word);
    }
    
    void lcp(string word,string &ans){
        //saare char store kara lo
        for(int i=0; i<word.length(); i++){
            char ch = word[i];
            
            //check kya root ka sirf ek child hai 
            if(root -> childCount == 1){
                ans.push_back(ch);
                int index = ch -'a';
                //aage badhjao
                root = root -> children[index];
            }
            else{
                break;
            }
            
            if(root -> isTerminal){
                break;
            }
        }
    }
    
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie* t = new Trie('\0');
    //insert all strings to trie
    for(int i=0; i<n; i++){
        t -> insert(arr[i]);
    }
    
    //phli string nikalo
    string first = arr[0];
    string ans = "";
    t->lcp(first,ans);
    return ans;
}


