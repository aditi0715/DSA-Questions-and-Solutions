#include<iostream>
#include<map>
#include<unordered_map>
using namespace std; 

int main()
{
    //creation of unordered map complete
    unordered_map<string, int> m; 

// Insertion different ways 
    //insertion way 1
    pair<string, int> p = make_pair("babbar", 3); 
    m.insert(p); 

    //insertion way 2 
    pair<string, int> pair2("love", 2); 
    m.insert(pair2); 

    //insetion way 3 
    m["mera"] = 1; 

// searching different ways 

    //1
    cout << m["mera"] << endl; 

    //2 
    cout << m.at("babbar") << endl ; 

    //if no such value is there what will happen ? 
    // error ajayega on line 33 
    //cout << m.at("unknown") << endl; 

    // iss way se agar unknown value ko dekhege toh new entry will be formed for that value with a value of 0. 
    cout << m["unknown"] << endl; 

    // size check 
    cout << m.size() << endl; 

    //to check presence 
    cout << m.count("Sarthak") << endl; 

    //erase 
    m.erase("love"); 

    cout << m.size() << endl; 

// TO traverse map 
    unordered_map<string, int> :: iterator it = m.begin(); 

    while(it != m.end()){
        cout << it-> first << " " << it-> second << endl; 
        it++; 
    } 

    return 0; 
}