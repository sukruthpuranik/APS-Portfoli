#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    vector<int> coordinates;
    Point(vector<int> coords) : coordinates(coords) {}
};

struct Node {
    Point point;
    Node* left;
    Node* right;
    Node(Point pt) : point(pt), left(nullptr), right(nullptr) {}
};

Node* buildKDTree(vector<Point>& points, int depth = 0) {
    if (points.empty()) return nullptr;
    int k = points[0].coordinates.size();
    int axis = depth % k;
    sort(points.begin(), points.end(), [axis](Point a, Point b) {
        return a.coordinates[axis] < b.coordinates[axis];
    });
    int median = points.size() / 2;
    Node* node = new Node(points[median]);
    vector<Point> leftPoints(points.begin(), points.begin() + median);
    vector<Point> rightPoints(points.begin() + median + 1, points.end());
    node->left = buildKDTree(leftPoints, depth + 1);
    node->right = buildKDTree(rightPoints, depth + 1);
    return node;
}

bool searchKDTree(Node* root, Point target, int depth = 0) {
    if (root == nullptr) return false;
    if (root->point.coordinates == target.coordinates) return true;
    int k = target.coordinates.size();
    int axis = depth % k;
    if (target.coordinates[axis] < root->point.coordinates[axis]) {
        return searchKDTree(root->left, target, depth + 1);
    } else {
        return searchKDTree(root->right, target, depth + 1);
    }
}

int main() {
    vector<Point> points = {Point({3, 6}), Point({17, 15}), Point({13, 15}),
                            Point({6, 12}), Point({9, 1}), Point({2, 7}), Point({10, 19})};
    Node* root = buildKDTree(points);
    Point target({10, 19});
    if (searchKDTree(root, target)) {
        cout << "Point found!" << endl;
    } else {
        cout << "Point not found!" << endl;
    }
    return 0;
}
