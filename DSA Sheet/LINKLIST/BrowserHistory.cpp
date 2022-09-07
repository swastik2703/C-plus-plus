#include<iostream>
#include<list>
using namespace std;

class BrowserHistory {
public:
    
    //list bnao
    list<string> history;
    list<string> :: iterator it;
    
    BrowserHistory(string homepage) {
        //initially kuch bhi nhi hai toh home page ko puch krdo
        history.push_back(homepage);
        //jo apka iterator hoga ab vo first vale ko point kr rha hoga
        it = history.begin();
    }
    
    //visit ki approach hogi ki new search pe uske baad ki sari history delete ho jayegi
    void visit(string url) {
      //ek variable lelo pointing to it
        auto del = it;
        del++;  //kyuki uske aage se delete krna hai
        history.erase(del,history.end());
        //erase krne ke baad apko jo naya url aaya hai usse push krdenge
        history.push_back(url);
        it++;
    }
    
    //doubly link list ka use hai toh no of steps vapis jana hoga
    //begin ka use isliye kiya kyuki kyuki agar first node pe khade hai or bole ki 5 steps piche jao toh nhi jayega
    
    string back(int steps) {
        while(it != history.begin() && steps--){
            it--;
        }
        return *it;
    }
    
    string forward(int steps) {
        while(it != (--history.end()) && steps--){
            it++;
        }
        return *it;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */