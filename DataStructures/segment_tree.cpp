#include <iostream>
#include <vector>
using namespace std;

class SegmentTree {
    vector<int> tree;
    vector<int> data;
    int n;

    void buildTree(int node, int start, int end) {
        if (start == end) {
            tree[node] = data[start];
        } else {
            int mid = (start + end) / 2;
            buildTree(2*node, start, mid);
            buildTree(2*node + 1, mid + 1, end);
            tree[node] = tree[2*node] + tree[2*node + 1];
        }
    }

    void updateTree(int node, int start, int end, int idx, int val) {
        if (start == end) {
            data[idx] = val;
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (start <= idx && idx <= mid) {
                updateTree(2*node, start, mid, idx, val);
            } else {
                updateTree(2*node + 1, mid + 1, end, idx, val);
            }
            tree[node] = tree[2*node] + tree[2*node + 1];
        }
    }

    int queryTree(int node, int start, int end, int L, int R) {
        if (R < start || end < L) {
            return 0;
        }
        if (L <= start && end <= R) {
            return tree[node];
        }
        int mid = (start + end) / 2;
        int leftSum = queryTree(2*node, start, mid, L, R);
        int rightSum = queryTree(2*node + 1, mid + 1, end, L, R);
        return leftSum + rightSum;
    }

public:
    SegmentTree(vector<int>& input) {
        data = input;
        n = input.size();
        tree.resize(4 * n);
        buildTree(1, 0, n - 1);
    }

    void update(int idx, int val) {
        updateTree(1, 0, n - 1, idx, val);
    }

    int query(int L, int R) {
        return queryTree(1, 0, n - 1, L, R);
    }
};

int main() {
    vector<int> input = {1, 3, 5, 7, 9, 11};
    SegmentTree st(input);

    cout << st.query(1, 3) << endl;  // Output: 15
    st.update(1, 10);
    cout << st.query(1, 3) << endl;  // Output: 22

    return 0;
}
