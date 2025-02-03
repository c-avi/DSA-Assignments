#include <iostream>
using namespace std;

// function to find maximum profit
int maxProfit(int n, int prices[]) {
    // Base case
    if (n <= 0) {
        return 0;
    }

    int max_profit = 0;

    for (int i = 1; i <= n; ++i) {
        max_profit = max(max_profit, prices[i - 1] + maxProfit(n - i, prices));
    }

    return max_profit;
}

int main() {
    int N = 8;  
    int prices[] = {1, 5, 8, 9, 10, 17, 17, 20};  

    int result = maxProfit(N, prices);
    cout << "Maximum profit: " << result << endl; 

    return 0;
}
