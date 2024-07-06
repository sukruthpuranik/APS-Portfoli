
<!-- README.md -->

<style>
body {
    background-color: #FFC0CB; /* Light Sky Blue */
    color: #000000; /* Dark gray text */
    font-family: Arial, sans-serif; /* Clean font */
}


h1 {
    color: #FF0000; /* Coral */
}

h2 {
    color: #FFA500 ; /* Dodger Blue */
}

h3 {
    color: #333333; /* Lime Green */
    /* Other CSS properties for h3 */
}


p {
    color: #000000; /* Dark gray text */
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
<div style="text-align:center">
  <img src="img/Google-Emblem.jpg" alt="Logo" />
</div>
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

### 1. PageRank Algorithm
**Challenge**: Rank web pages based on their importance and relevance.  
**Google Relevance**: Core to Google’s search engine, determining the order of search results.  
**Algorithm**: PageRank uses a probability distribution to represent the likelihood of a person randomly clicking on links to arrive at a particular page.

<div style="text-align:center">
  <img src="PageRanks-Example.svg.png" alt="Page Rank" />
</div>

**Optimising Search Engine Queries**: PageRank is a fundamental element of SEO because it aids in the ranking of webpages according to their significance and applicability.

**A Search Algorithm***: A* is used for pathfinding and PageRank is used for ranking nodes (web pages) in a graph. Both algorithms entail graph traversal and optimisation.

**Union-Find Algorithm**: This algorithm is utilised for network connectivity, whereas PageRank handles ranking. Both require an understanding of network structure.

**KD Tree for Nearest Neighbour Search**: To manage and query the massive amounts of data involved in ranking web pages, PageRank might benefit from effective data structures like KD Trees.

### 2. Crawling
**Challenges**:The task is to index web pages and browse the internet methodically. 
**Google Relevance**: A vital component for obtaining online information and updating search engine indices.
**Algorithm**: The process of web crawling uses either depth-first search (DFS) or breadth-first search (BFS) to navigate web pages.
<div style="text-align:center">
  <img src="img/WebCrawlerArchitecture.svg.png" alt="Crawling" />
</div>

### 3. Indexing
**Challenge**: Efficiently store and retrieve large amounts of web data.
**Google Relevance**: Core to Google's ability to deliver fast and relevant search results.
**Algorithm**: Inverted Indexing, a data structure that maps content to its location in a database.

**Suffix Tree**: By storing word or document suffixes, suffix trees effectively index text, allowing for quick substring searches and pattern matching within indexed information.

**Tries**: This is an attempt to index words or terms by storing them in a form that makes efficient prefix-based retrieval possible, enabling autocomplete and speedy search engine keyword lookup.

**Algorithm for Burrows-Wheeler Transform (BWT)**: BWT facilitates data compression and, by optimising text representation for effective retrieval techniques like suffix arrays, may help indexing need less storage.

**Binary Trees**: Essential for preserving effective lookup structures during search engine indexing procedures, binary trees arrange indexed data for quick searching, insertion, and deletion operations.

### 4. Dijkstra’s Algorithm
**Challenge**: Find the shortest path in a graph with non-negative edge weights.
**Google Relevance**: Essential for routing and navigation systems like Google Maps.
**Algorithm**: Dijkstra's Algorithm uses a priority queue to efficiently find the shortest path from a source node to all other nodes in a graph.

<div style="text-align:center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/5/57/Dijkstra_Animation.gif" alt="Dijkstra's Algorithm Animation" />
</div>

**Code**: [Dijkstra's Algorithm](GraphAlgorithms/Dijkstra's algorithm.cpp)

### Explanation:
Edsger W. Dijkstra developed Dijkstra's method in 1956 to determine the shortest pathways between nodes in weighted graphs, like road networks. The algorithm can be stopped early to discover the shortest path to a certain destination. It begins at a given source node and finds the shortest path to every other node. Its original version operated in quadratic time and selects the shortest known paths using a min-priority queue.The algorithm is frequently used as a subroutine in other algorithms, such as Johnson's algorithm, and in network routing protocols (e.g., IS-IS, OSPF).

### Limitations:
It conducts a blind search, which can take a while.
Because it is unable to handle negative edges, acyclic graphs may arise in which the shortest path may not always be found.

### 5. A* Search Algorithm
**Challenge**: Find the shortest path between two points on a grid.  
**Google Relevance**: Crucial for pathfinding in Google Maps and optimizing search algorithms.  
**Algorithm**: A* Search.
<div style="text-align:center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/c/c2/Astarpathfinding.gif" alt="A* Algorithm Animation" />
</div>

**Code**: [A* Search Algorithm](AStarSearch/a_star_search.cpp)

### Explanation:
The graph traversal and pathfinding algorithm A* (A-star) is renowned for its efficiency, completeness, and optimality. Using heuristics, it discovers the shortest path between a source node and a goal node in a weighted graph, outperforming Dijkstra's algorithm in the process. Although pre-processing algorithms and memory-bounded techniques can surpass A*, it is still effective in many cases. A*, which was created in 1968 by Peter Hart, Nils Nilsson, and Bertram Raphael, differs from Dijkstra's algorithm in that it aims to achieve a certain objective instead of creating a shortest-path tree to every node.

### Limitations:
One drawback of A* is that in some cases, particularly when the search space is wide and there are many viable paths, it might be computationally expensive.
The algorithm could use a lot of processor and memory power.
A further drawback is that A* is very dependent on the heuristic function's quality. The performance and optimality of the algorithm may be jeopardised if the heuristic is ill-conceived or fails to provide an accurate assessment of the distance to the objective.
Furthermore, A* might have trouble with some kinds of graphs or search spaces that have erratic or irregular structures.

### 6. Trie Data Structure
**Challenge**: Efficiently store and retrieve keys in a dataset of strings.  
**Google Relevance**: Essential for autocomplete features, search engine indexing, and IP routing.  
**Algorithm**: Trie Data Structure.
<div style="text-align:center">
  <img src="img/Trie_example.svg.png" alt="Trie" />
</div>
**Code**: [Trie Data Structure Algorithm](DataStructures/trie.cpp)

### Explanation:
A trie is a k-ary search tree used to find certain keys inside a collection, usually strings. It is sometimes referred to as a digital tree or prefix tree. In contrast to binary search trees, attempts use the positions of the nodes to define the keys and distribute the value of each key throughout the data structure. Every child of a node has a root that represents an empty string, and all children share a common prefix linked to the parent node. Radix trees can be used to optimise attempts, and different ordered lists, including binary or integer data, can be used to key the tries. The huge space needs of naive trie structures are addressed by specialised implementations such as compressed tries.

### Limitations:
Space-Inefficient in most cases. When compared to storing strings in a set, tries rarely save space.
A string's ASCII characters are each one byte. A trie node's link is a pointer to an address, which is eight bytes on a 64-bit system. Therefore, saving money by storing fewer characters is frequently outweighed by the overhead of connecting nodes.
Not Conventional. The majority of languages lack an integrated trie implementation. It will be up to you to put one into practice.

### 7. Suffix Tree
**Challenge**: Efficiently indexes all suffixes of a given text to enable fast substring searches and other string-related operations. 
**Google Relevance**: Crucial for text indexing,detecting repeated substrings in search engines.  
**Algorithm**: Suffix Tree.
<div style="text-align:center">
  <img src="img/Suffix_tree_BANANA.svg.png" alt="Suffix Tree" />
</div>

### Explanation:
A compressed trie that holds all of a text's suffixes as keys and their positions as values is called a suffix tree, sometimes known as a PAT tree. For a given string \( S \), the construction of a suffix tree requires linear time and space in relation to the length of \( S \). Finding approximation matches, matching regular expression patterns, and discovering substrings may all be done quickly with the help of suffix trees. They also give a solution to the longest common substring problem in linear time. But suffix trees take quite a lot more space in storage than the string itself does.

### 8. Depth-First Search (DFS)
**Challenge**: Traverse or search through graph or tree data structures.  
**Google Relevance**: Crucial for web crawling, detecting cycles, and pathfinding in various applications.  
**Algorithm**: Depth-First Search (DFS).
<div style="text-align:center">
  <img src="img/Suffix_tree_BANANA.svg.png" alt="Suffix Tree" />
</div>
**Code**: [Depth first search](DataStructures/trie.cpp)
### Explanation:
An approach for navigating or searching tree or graph data structures is called depth-first search (DFS). Starting at the root node (assuming, in the case of a graph, an arbitrary node), the method proceeds as far as it can along each branch before turning around. To aid in graph backtracking, more memory—typically in the form of a stack—is required to record the nodes that have been found thus far along a given branch.
The 19th-century French mathematician Charles Pierre Trémaux studied a variation of depth-first search as a maze-solving technique.

### Limitations:
Even in a limited graph, the primary drawback of Depth-First Search (DFS) is the possibility of endlessly examining the left-most path. In order to lessen this, a cutoff depth that ideally matches the solution depth might be applied; however, this number is frequently unknown in advance. A cutoff set too high could result in a large increase in execution time and possibly a less-than-ideal first solution, while a cutoff set too low could prevent DFS from finding a solution at all. Therefore, in the event that there are several solutions, DFS cannot ensure that it will locate the minimal solution.

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

### 13. Johnson-Trotter Algorithm
**Challenge**: Generate all permutations of a set.  
**Google Relevance**: Useful for testing systems, shuffling search results, and combinatorial optimizations.  
**Algorithm**: Johnson-Trotter Algorithm.
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

