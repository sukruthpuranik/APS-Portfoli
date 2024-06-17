#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
public:
    UnionFind(int size) : root(size), rank(size, 1) {
        for (int i = 0; i < size; ++i) {
            root[i] = i;
        }
    }

    int find(int x) {
        if (x == root[x]) {
            return x;
        }
        return root[x] = find(root[x]);
    }

    void unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                root[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                root[rootX] = rootY;
            } else {
                root[rootY] = rootX;
                rank[rootX] += 1;
            }
        }
    }

    bool connected(int x, int y) {
        return find(x) == find(y);
    }

private:
    vector<int> root;
    vector<int> rank;
};

int main() {
    UnionFind uf(10);
    uf.unionSet(1, 2);
    uf.unionSet(2, 5);
    uf.unionSet(5, 6);
    uf.unionSet(6, 7);
    uf.unionSet(3, 8);
    uf.unionSet(8, 9);

    cout << uf.connected(1, 5) << endl; // true
    cout << uf.connected(5, 7) << endl; // true
    cout << uf.connected(4, 9) << endl; // false

    uf.unionSet(9, 4);
    cout << uf.connected(4, 9) << endl; // true

    return 0;
}
