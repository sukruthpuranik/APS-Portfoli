#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

struct Node {
    int x, y;
    int cost, priority;
    Node* parent;

    Node(int x, int y, int cost = 0, int priority = 0, Node* parent = nullptr)
        : x(x), y(y), cost(cost), priority(priority), parent(parent) {}

    bool operator>(const Node& other) const {
        return priority > other.priority;
    }
};

vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int heuristic(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

vector<Node> a_star_search(vector<vector<int>>& grid, Node start, Node goal) {
    priority_queue<Node, vector<Node>, greater<Node>> openList;
    vector<vector<bool>> closedList(grid.size(), vector<bool>(grid[0].size(), false));

    openList.push(start);

    while (!openList.empty()) {
        Node current = openList.top();
        openList.pop();

        if (current.x == goal.x && current.y == goal.y) {
            vector<Node> path;
            while (current.parent != nullptr) {
                path.push_back(current);
                current = *current.parent;
            }
            reverse(path.begin(), path.end());
            return path;
        }

        closedList[current.x][current.y] = true;

        for (auto& dir : directions) {
            int newX = current.x + dir[0];
            int newY = current.y + dir[1];

            if (newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[0].size() && grid[newX][newY] == 0 && !closedList[newX][newY]) {
                int newCost = current.cost + 1;
                int newPriority = newCost + heuristic(newX, newY, goal.x, goal.y);
                openList.push(Node(newX, newY, newCost, newPriority, new Node(current)));
            }
        }
    }
    return {};
}

int main() {
    vector<vector<int>> grid = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0}
    };

    Node start(0, 0);
    Node goal(4, 4);

    vector<Node> path = a_star_search(grid, start, goal);
    for (auto& node : path) {
        cout << "(" << node.x << ", " << node.y << ") ";
    }
    cout << endl;

    return 0;
}
