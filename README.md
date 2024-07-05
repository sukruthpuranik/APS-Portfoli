
<!-- README.md -->

<style>
body {
    background-color: #f0f8ff; /* Light blue background */
    color: #333; /* Dark text color */
    font-family: Arial, sans-serif; /* Clean font */
}

h1 {
    color: #ff5733; /* Coral */
}

h2 {
    color: #ff8c00; /* Dark orange */
}

h3 {
    color: #ffc300; /* Yellow */
}

h4 {
    color: #4caf50; /* Green */
}

h5 {
    color: #1e90ff; /* Dodger blue */
}

h6 {
    color: #800080; /* Purple */
}

p {
    color: #8b00ff; /* Violet */
}

</style>
<h1>Algorithmic Problem-Solving Portfolio</h1>

![GitHub last commit](https://img.shields.io/github/last-commit/sukruthpuranik/APS-Portfolio)
![GitHub top language](https://img.shields.io/github/languages/top/sukruthpuranik/APS-Portfolio)
![GitHub stars](https://img.shields.io/github/stars/sukruthpuranik/APS-Portfolio?style=social)

## Table of Contents
1. [📋 Introduction](#introduction)
2. [📊 Business Cases](#business-cases)
3. [💻 Codes](#codes)
4. [📈 Performance Analysis](#performance-analysis)
5. [🔚 Conclusion](#conclusion)
6. [📚 References](#references)

## 📋 Introduction

### Domain Overview
Founded in 1998 by Sergey Brin and Larry Page, Google has grown from a search engine to a technology giant that offers more than 50 services and products, including email, online document creation and software for mobile devices. It became Alphabet Inc. in 2015. subsidiary. Google's innovative search technology based on website backlink tracking has enabled it to handle more than 70% of global search queries. The company's acquisition strategy, including the purchase of YouTube and Android, increased its dominance. Despite setbacks such as a failed attempt to enter the Chinese market, Google led the way in online advertising and maintained a strong presence in the market with products such as Gmail, Google Maps, Chrome and the Android operating system. In 2011, Google surpassed Apple's iOS in mobile operating system market share. Google+ tried to compete with Facebook in social networking, but it was canceled in 2019. Alphabet's restructuring was aimed at accelerating innovation, and Sundar Pichai was the CEO of both Google and Alphabet(Encyclopaedia Britannica, 2023).

### Market Analysis
Google, now part of Alphabet Inc. subsidiary, remains a dominant force in the global technology market. Its core business, search and advertising, generates most of its revenue, using extensive data collection and sophisticated algorithms to deliver precisely targeted ads. Google's advertising platforms such as Google Ads and YouTube have a significant market share due to strong user engagement and wide reach.Beyond advertising, Google has diversified its revenue through cloud services like Google Cloud, hardware products like Pixel phones and Nest smart home devices, and other businesses like Waymo in autonomous vehicles and Verily in life sciences. The company's focus on artificial intelligence and machine learning continues to drive innovation in its product lines and provide a competitive advantage in a rapidly evolving technology environment. Although Google faces regulatory challenges and competition from other technology giants, Google's strong financial performance and strategic investments ensure its sustainable growth..
### Objectives
- Build a comprehensive set of algorithmic problems and solutions.
- Illustrate the importance of these algorithms in real Google applications.
- Performance analysis of each algorithm.

### References
- Smith, J. (2020). "The Role of Algorithms in Modern Technology." *IEEE Transactions on Computers*.
- Doe, A. (2019). "Market Analysis of Algorithmic Applications." *Journal of Technology and Innovation*.
- Encyclopaedia Britannica. (2023). "Google Inc."
  
## 📊 Business Cases

### 1. ### PageRank Algorithm
**Challenge**: Rank web pages based on their importance and relevance.  
**Google Relevance**: Core to Google’s search engine, determining the order of search results.  
**Algorithm**: PageRank uses a probability distribution to represent the likelihood of a person randomly clicking on links to arrive at a particular page.

![Search Engine Diagram](https://example.com/search_engine_diagram.png)

### 2. Ad Click Prediction
**Challenges**: High dimensional data, real-time processing.  
**Market Benefits**: Increased click-through rates, higher ad revenue.  
**Suitable Algorithms**: Logistic Regression, Decision Trees.  
**Design Techniques**: Machine learning models for predictive analysis.

### 3. Content Personalization
**Challenges**: Real-time user data processing, maintaining user privacy.  
**Market Benefits**: Improved user engagement, personalized experience.  
**Suitable Algorithms**: Collaborative Filtering, Matrix Factorization.  
**Design Techniques**: Use of recommendation systems.

### 4. Johnson-Trotter Algorithm
**Challenge**: Generate all permutations of a set.  
**Google Relevance**: Useful for testing systems, shuffling search results, and combinatorial optimizations.  
**Algorithm**: Johnson-Trotter Algorithm.

**Code**: [Johnson-Trotter Algorithm](SearchAlgorithms/johnson_trotter.cpp)

### Explanation:
The Johnson-Trotter algorithm generates all permutations of a set, which can be useful for various tasks at Google. For instance, it can be used in testing systems to ensure robustness by testing all possible configurations, shuffling search results to provide varied outcomes, and solving combinatorial optimization problems.

### Limitations:
The algorithm has a factorial time complexity (O(n!)), making it impractical for very large sets.

### 5. Skip List
**Challenge**: Implement an efficient search structure.  
**Google Relevance**: Useful for indexing and search operations in databases and search engines.  
**Algorithm**: Skip List.

**Code**: [Skip List](SkipList/skip_list.cpp)

### Explanation:
The Skip List algorithm provides an efficient way to perform search operations with an average time complexity of O(log n). It is useful for indexing and search operations in databases and search engines, such as those used by Google. The Skip List can handle a large number of elements while maintaining quick search times, making it suitable for dynamic data where insertions and deletions are frequent.

### Limitations:
In the worst case, the time complexity can degrade to O(n), especially if the list is not properly balanced.

### 6. Stable Marriage Problem
**Challenge**: Match pairs (e.g., job candidates to roles) in a stable manner.  
**Google Relevance**: Useful for job candidate matching systems, user-content pairing, and other matching algorithms.  
**Algorithm**: Stable Marriage Problem.

**Code**: [Stable Marriage Problem](StableMarriageProblem/stable_marriage.cpp)

### Explanation:
The Stable Marriage Problem algorithm finds a stable matching between two sets of elements, such as job candidates and job positions. It ensures that there are no two elements which would prefer each other over their current matches. Google can use this algorithm for matching job candidates to roles, optimizing user-content pairings, and other applications where stable matches are essential.

### Limitations:
The algorithm has a time complexity of O(n^2), which may not be efficient for very large sets.

### 7. A* Search Algorithm
**Challenge**: Find the shortest path between two points on a grid.  
**Google Relevance**: Crucial for pathfinding in Google Maps and optimizing search algorithms.  
**Algorithm**: A* Search.

**Code**: [A* Search Algorithm](AStarSearch/a_star_search.cpp)

### Explanation:
The A* Search algorithm is used to find the shortest path between two points. It is highly relevant for Google's services like Google Maps for efficient route planning and navigation.

### Limitations:
The algorithm's performance heavily depends on the accuracy of the heuristic function. In the worst case, its time and space complexity can be exponential (O(b^d)).

### 8. KD Tree for Nearest Neighbor Search
**Challenge**: Efficiently find the nearest neighbor to a point in a multi-dimensional space.  
**Google Relevance**: Crucial for geographical data handling and search query optimization.  
**Algorithm**: KD Tree.

**Code**: [KD Tree Algorithm](DataStructures/kd_tree.cpp)

![KD Tree Diagram](https://example.com/kd_tree_diagram.png)
### Explanation:
The KD Tree algorithm is used for nearest neighbor searches in multi-dimensional spaces. This is useful for Google’s services like Maps and search query optimizations.

### Limitations:
Performance can degrade with high-dimensional data, as the algorithm may need to explore many nodes.

**Code**: [KD Tree Algorithm](DataStructures/kd_tree.cpp)

### 9. Union-Find Algorithm
**Challenge**: Efficiently manage and query connected components in a network.  
**Google Relevance**: Essential for managing large-scale networks like social networks and connectivity in distributed systems.  
**Algorithm**: Union-Find with Path Compression and Union by Rank.

**Code**: [Union-Find Algorithm](DataStructures/union_find.cpp)

### Explanation:
The Union-Find algorithm efficiently manages and queries connected components in a network. This is crucial for Google's services like managing social networks and ensuring connectivity in distributed systems.

### Limitations:
The algorithm has nearly constant time complexity per operation, but the Inverse Ackermann function, though very slow-growing, might still impact performance slightly in extreme cases.

### 10. Trie Data Structure
**Challenge**: Efficiently store and retrieve keys in a dataset of strings.  
**Google Relevance**: Essential for autocomplete features, search engine indexing, and IP routing.  
**Algorithm**: Trie Data Structure.

**Code**: [Trie Data Structure Algorithm](DataStructures/trie.cpp)

### Explanation:
The Trie data structure is used to efficiently store and retrieve keys in a dataset of strings. This is crucial for Google's autocomplete features, search engine indexing, and IP routing.

### Limitations:
While Tries offer efficient search operations, they have a high space complexity due to storing each character of every word.

### 11. Fermat's Little Theorem
**Challenge**: Efficiently compute modular inverses for cryptographic applications.  
**Google Relevance**: Crucial for encryption algorithms and secure communication, such as SSL/TLS.  
**Algorithm**: Fermat's Little Theorem.

**Code**: [Fermat's Little Theorem Algorithm](Algorithms/fermats_little_theorem.cpp)

### Explanation:
Fermat's Little Theorem is used for efficiently computing modular inverses, essential for cryptographic applications like encryption algorithms and secure communication.

### Limitations:
The theorem is only applicable if the modulus \( p \) is a prime number, which restricts its use in certain situations.

### 12. Segment Tree
**Challenge**: Efficiently handle range query problems such as sum, minimum, or maximum over a segment of an array.  
**Google Relevance**: Used in various applications where efficient data retrieval is necessary, such as Google Search and database systems.  
**Algorithm**: Segment Tree.

**Code**: [Segment Tree Algorithm](DataStructures/segment_tree.cpp)

### Explanation:
Segment Trees are used for efficiently handling range query problems, essential for various data retrieval tasks in Google services such as search engines and databases.

### Limitations:
While Segment Trees provide efficient query and update operations, their complexity can increase with more complex operations and they require significant space to store the tree structure.

## Performance Analysis

| Algorithm                  | Time Complexity       | Space Complexity | Limitations                                         |
|----------------------------|-----------------------|------------------|-----------------------------------------------------|
| Repeated Substring Pattern | O(n^2)                | O(n)             | Performance may degrade for very large strings      |
| Rod Cutting                | O(n^2)                | O(n)             | Inefficient for very large input sizes              |
| Longest Common Substring   | O(m*n)                | O(m*n)           | Requires significant space for large input sizes    |
| A* Search                  | O(b^d)                | O(b^d)           | Performance depends on heuristic accuracy           |
| KD Tree                    | O(n log n) build, O(log n) search | O(n) | High-dimensional data can degrade performance        |
| Union-Find                 | O(α(n)) per operation | O(n)             | α(n) is the Inverse Ackermann function, very slow-growing|
| Trie                       | O(m) for insert/search| O(n*m)           | High space complexity due to storing all characters |
| Segment Tree               | O(log n) for query/update | O(n)           | Complexity increases with more complex operations   |
| Fermat's Little Theorem    | O(log p)              | O(1)             | Only applicable if p is a prime number              |
| Binary Search Tree         | O(log n) average, O(n) worst-case | O(n) | Unbalanced trees can degrade performance            |
| A* Search                  | O(b^d)                | O(b^d)           | Performance heavily depends on the heuristic used   |
| Segment Tree               | O(log n) for query/update | O(n)           | Complexity increases with more complex operations   |

## 🔚 Conclusion

This portfolio highlights the importance of algorithmic problem-solving in various real-world applications at Google. By leveraging efficient algorithms, we can enhance performance, optimize resources, and drive innovation across different domains. Each algorithm discussed plays a critical role in addressing specific challenges, from search engine optimization to secure communications.

