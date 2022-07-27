#include<iostream>
#include<vector>
using namespace std;
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
    
    //printSuggestion
    void printSuggestions(TrieNode* curr, vector<string> &temp, string prefix){
        //agar curr node terminal node hua
        if(curr->isTerminal){
            //temp mai push krdo
            temp.push_back(prefix);
        }
        
        //check kro
        for(char ch = 'a'; ch<= 'z'; ch++){
            //check kro inme se koi bhi character current ka child hai
            TrieNode* next = curr -> children[ch-'a'];
            
            //agar hua
            if(next != NULL){
                prefix.push_back(ch);
                //recusrion
                printSuggestions(next,temp,prefix);
                prefix.pop_back();
            }
        }
    }
    
    vector<vector<string>> getSuggestion(string str){
        //prev point to root
        TrieNode* prev = root;
        vector<vector<string>> ans;
        string prefix = "";
        
        for(int i=0; i<str.length(); i++){
            //last character ko store kara lo
            char lastChar = str[i];
            //usse prefix mai push krdo
            prefix.push_back(lastChar);
            
            //prev se pucho koi aisa char exist krta hai ya nhi
            //curr node bnao vaha daal do
            TrieNode* curr = prev->children[lastChar -'a'];
            
            //agar nhi mila
            if(curr == NULL)
                break;
            
            //mil gaya toh print suggestions
            vector<string> temp;
            printSuggestions(curr,temp,prefix);
            ans.push_back(temp);
            temp.clear();
            prev = curr;
        }
        return ans;
    }
};

vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    Trie* t = new Trie();
    
    for(int i=0; i<contactList.size(); i++){
        string str = contactList[i];
        t->insert(str);
    }
    
    return t->getSuggestion(queryStr);
}