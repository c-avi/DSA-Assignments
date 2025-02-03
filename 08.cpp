#include <iostream>
using namespace std;

// function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move the top n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int N = 2; 

    towerOfHanoi(N, 'A', 'C', 'B');

    return 0;
}
