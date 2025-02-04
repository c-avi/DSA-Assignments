#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DirectAddressTable {
private:
    vector<int> table;
public:
    DirectAddressTable(int n) : table(n, -1) {}

    void insert(int key, int value) {
        table[key] = value;
    }

    string search(int key) {
        return (table[key] != -1) ? to_string(table[key]) : "NOT FOUND";
    }

    void remove(int key) {
        table[key] = -1;
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    DirectAddressTable dat(n);
    
    for (int i = 0; i < q; i++) {
        string command;
        cin >> command;
        
        if (command == "INSERT") {
            int key, value;
            cin >> key >> value;
            dat.insert(key, value);
        } else if (command == "SEARCH") {
            int key;
            cin >> key;
            cout << dat.search(key) << endl;
        } else if (command == "DELETE") {
            int key;
            cin >> key;
            dat.remove(key);
        }
    }
    
    return 0;
}
