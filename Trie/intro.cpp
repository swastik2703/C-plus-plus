#include<iostream>
using namespace std;

//class trie
class TrieNode{
    public:
        char data;
        TrieNode* children[26];
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
        Trie(){
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
            int index = word[0] - 'A';
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

        void insertWord(string word){
            insertFunction(root,word);
        }

        //******* SEARCHING BHI KAR LO ***********
        //function
        bool search(TrieNode* root, string word){
            //base case 
            //entire traverse ho gaya
            if(word.length() == 0){
                //means terminal node return kardo
                return root -> isTerminal;
            }

            //index bnao
            int index = word[0] - 'A';
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
            return search(child,word.substr(1));
        }


        bool searchWord(string word){
            return search(root,word);
        }
};

int main(){

    Trie* t = new Trie();   //iske liye ek constructor bnao
    t -> insertWord("ARM");
    t -> insertWord("DO");
    t -> insertWord("TIME");
    cout<<"String present or not "<<t->searchWord("ARM")<<endl;
    cout<<"String present or not "<<t->searchWord("TIME")<<endl;
    cout<<"String present or not "<<t->searchWord("TIM")<<endl;
    return 0;
}