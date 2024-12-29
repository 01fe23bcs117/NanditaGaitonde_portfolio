#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class sparse_table {
private:
    vector<vector<int>> table;
    vector<int> log_values;
    int n;

public:
    // Function to build the sparse table
    void build(const vector<int>& arr) {
        n = arr.size();
        int max_log = log2(n) + 1;

        // Initialize the table and log_values
        table.assign(n, vector<int>(max_log, 0));
        log_values.assign(n + 1, 0);

        // Precompute logarithms
        for (int i = 2; i <= n; i++) {
            log_values[i] = log_values[i / 2] + 1;
        }

        // Build the base case for range length = 1
        for (int i = 0; i < n; i++) {
            table[i][0] = arr[i];
        }

        // Fill the table for all ranges
        for (int j = 1; (1 << j) <= n; j++) {
            for (int i = 0; i + (1 << j) - 1 < n; i++) {
                table[i][j] = min(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
            }
        }
    }

    // Function to query the range minimum
    int range_min_query(int left, int right) {
        int range_len = right - left + 1;
        int log = log_values[range_len];
        return min(table[left][log], table[right - (1 << log) + 1][log]);
    }
};

int main() {
    vector<int> arr = {4, 6, 1, 5, 7, 3, 9, 2};
    sparse_table st;

    // Build the sparse table
    st.build(arr);

    // Perform range queries
    cout << "Minimum from index 1 to 4: " << st.range_min_query(1, 4) << endl;
    cout << "Minimum from index 3 to 7: " << st.range_min_query(3, 7) << endl;

    return 0;
}
