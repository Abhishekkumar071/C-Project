<div align="center">

<img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c&logoColor=white" />
<img src="https://img.shields.io/badge/Standard-C99%2FC11-informational?style=for-the-badge" />
<img src="https://img.shields.io/badge/Build-Makefile-success?style=for-the-badge&logo=gnu&logoColor=white" />
<img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge" />
<img src="https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge" />

# ⚙️ DSA in C — Real-World Data Structures & Algorithms

> **Hand-crafted implementations of core data structures and algorithms in pure C.**  
> Built for performance, clarity, and real-world problem solving — no libraries, no shortcuts.

[📖 Documentation](#documentation) • [🚀 Getting Started](#getting-started) • [🗂️ Project Structure](#project-structure) • [🧩 Implemented Modules](#implemented-modules) • [📊 Benchmarks](#benchmarks) • [🤝 Contributing](#contributing)

</div>

---

## 🧭 Overview

This repository is a **production-quality collection** of Data Structures and Algorithms implemented in the **C programming language** from the ground up. Every module is:

- ✅ Written in **standard C (C99/C11)**
- ✅ Designed for **low-level memory efficiency**
- ✅ Accompanied by **test cases and usage examples**
- ✅ Benchmarked against **real-world scenarios**
- ✅ Fully documented with **inline comments and a wiki**

Whether you're studying for competitive programming, building a systems project, or deepening your understanding of how software works under the hood — this repo has you covered.

---

## 🧩 Implemented Modules

### 📦 Data Structures

| Module | Description | Status |
|---|---|---|
| `linked_list` | Singly & Doubly Linked Lists with full CRUD | ✅ Complete |
| `stack` | Array-based & Linked-list-based Stack | ✅ Complete |
| `queue` | Linear Queue, Circular Queue, Deque | ✅ Complete |
| `binary_tree` | BST, AVL Tree, Inorder/Preorder/Postorder | ✅ Complete |
| `heap` | Min-Heap & Max-Heap with heapify | ✅ Complete |
| `hash_table` | Separate chaining + open addressing | ✅ Complete |
| `graph` | Adjacency List & Matrix representation | ✅ Complete |
| `trie` | Prefix tree for string operations | 🔄 In Progress |

### ⚡ Algorithms

| Module | Description | Status |
|---|---|---|
| `sorting` | Bubble, Merge, Quick, Heap, Radix Sort | ✅ Complete |
| `searching` | Binary Search, BFS, DFS | ✅ Complete |
| `dynamic_programming` | Knapsack, LCS, Matrix Chain, Coin Change | ✅ Complete |
| `graph_algorithms` | Dijkstra, Bellman-Ford, Floyd-Warshall, Kruskal, Prim | ✅ Complete |
| `string_algorithms` | KMP, Rabin-Karp, Z-algorithm | 🔄 In Progress |
| `backtracking` | N-Queens, Sudoku Solver, Subset Sum | ✅ Complete |

---

## 🌍 Real-World Problems Solved

This isn't just theory. Each module maps to a real-world use case:

| Problem | Structure Used | Location |
|---|---|---|
| Auto-complete / spell checker | Trie | `src/trie/` |
| Task scheduling / priority queue | Heap | `src/heap/` |
| Shortest path in maps | Dijkstra + Graph | `src/graph_algorithms/` |
| Cache implementation (LRU) | Hash Table + DLL | `src/hash_table/` |
| Expression evaluation | Stack | `src/stack/` |
| Social network connections | BFS + Graph | `src/graph/` |
| File system hierarchy | Binary Tree | `src/binary_tree/` |

---

## 🏗️ Project Structure

```
dsa-in-c/
│
├── src/                  # Source files for all modules
│   ├── linked_list/
│   │   ├── linked_list.h
│   │   ├── linked_list.c
│   │   └── test_linked_list.c
│   ├── stack/
│   ├── queue/
│   ├── binary_tree/
│   ├── heap/
│   ├── hash_table/
│   ├── graph/
│   ├── sorting/
│   ├── searching/
│   ├── dynamic_programming/
│   └── graph_algorithms/
│
├── include/              # Shared headers
│   └── utils.h
│
├── tests/                # Unit tests
│   └── run_all_tests.sh
│
├── benchmarks/           # Performance benchmarking scripts
│   └── bench.c
│
├── docs/                 # Documentation and diagrams
│   └── architecture.md
│
├── Makefile              # Build system
├── .gitignore
└── README.md
```

---

## 🚀 Getting Started

### Prerequisites

Make sure you have the following installed:

```bash
gcc --version     # GCC 9+ recommended
make --version    # GNU Make
```

### Clone the Repository

```bash
git clone https://github.com/Abhishekkumar071/C-Project.git
cd C-Project
```

### Build All Modules

```bash
make all
```

### Build a Specific Module

```bash
make stack
make binary_tree
make sorting
```

### Run Tests

```bash
make test
# or run individual module tests
./tests/run_all_tests.sh
```

### Example Usage

```c
#include "src/stack/stack.h"

int main() {
    Stack *s = stack_create(100);

    stack_push(s, 10);
    stack_push(s, 20);
    stack_push(s, 30);

    printf("Top: %d\n", stack_peek(s));  // 30
    stack_pop(s);
    printf("Top after pop: %d\n", stack_peek(s));  // 20

    stack_destroy(s);
    return 0;
}
```

---

## 📊 Benchmarks

Performance benchmarked on: **Ubuntu 22.04 | GCC 12 | Intel i5, 8GB RAM**

| Algorithm | Input Size | Time Complexity | Measured Time |
|---|---|---|---|
| Quick Sort | 1,000,000 | O(n log n) avg | ~180ms |
| Merge Sort | 1,000,000 | O(n log n) | ~210ms |
| Binary Search | 1,000,000 | O(log n) | < 1ms |
| Dijkstra (dense graph) | 10,000 nodes | O(V²) | ~95ms |
| Hash Table Insert | 500,000 ops | O(1) avg | ~45ms |

> 📌 Run your own benchmarks: `make bench`

---

## 🔧 Design Principles

- **Zero external dependencies** — pure C standard library only
- **Manual memory management** — every `malloc` has a matching `free`
- **Modular design** — each module is self-contained with its own `.h` and `.c`
- **Readable code** — clean variable names, inline comments, and consistent style
- **Error handling** — NULL checks, boundary conditions, and defensive programming throughout

---

## 📖 Documentation

Detailed documentation for each module lives in the [`/docs`](./docs) folder, including:

- Algorithm walkthroughs with diagrams
- Time and space complexity analysis
- Edge cases and known limitations
- Usage examples

---

## 🧪 Testing

All modules include unit tests written in plain C using a lightweight test harness. Tests cover:

- Normal inputs
- Edge cases (empty structures, single element, max capacity)
- Memory leak checks (compatible with `valgrind`)

```bash
valgrind --leak-check=full ./bin/test_linked_list
```

---

## 🤝 Contributing

Contributions are welcome! If you'd like to add a new data structure, fix a bug, or improve documentation:

1. Fork the repository
2. Create a new branch: `git checkout -b feature/your-feature`
3. Commit your changes: `git commit -m "Add: your feature"`
4. Push and open a Pull Request

Please follow the existing code style and include tests for any new module.

---

## 📜 License

This project is licensed under the **MIT  License** — see the [LICENSE](./LICENSE) file for details.

---

<div align="center">

Made with ❤️ and `malloc()` in **C**

⭐ Star this repo if you found it useful!
</div>
