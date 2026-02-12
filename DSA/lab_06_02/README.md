# Experiment–1: Python Installation and Basics

## Objective -
    To study and implement linear data structures using Linked Lists in the C programming language, and to perform basic operations such as insertion, deletion, and traversal on Singly Linked List, Circular Linked List, and Doubly Linked List. Also, to implement Stack using a Singly Linked List and understand dynamic memory allocation using pointers.

---

## Program–1 : Singly Linked List – Insertion, Deletion and Display Operations

### Program Code
![Program Code](images/Screenshot%20from%202026-02-12%2010-48-24.png) 
![Program Code](images/Screenshot%20from%202026-02-12%2010-48-49.png)

### Output
![Output](images/Screenshot%20from%202026-02-12%2013-18-08.png)

### Algorithm

    * Create node → link at beginning/end → update head.
    * For delete → move head or traverse and free node.
    * For display → traverse from head to NULL and print.

### Observation

    Dynamic structure, uses pointers, traversal needed for end operations.

---

## Program–2 : Stack Implementation Using Singly Linked List

### Program Code
![Program Code](images/Screenshot%20from%202026-02-12%2010-49-14.png) 

### Output
![Output](images/Screenshot%20from%202026-02-12%2013-18-36.png)

### Algorithms

    * Push: Create node → link to top → move top.
    * Pop: Remove top node → free memory.
    * Display: Traverse from top.

### Observation

    Follows LIFO, push/pop are fast (O(1)), no size limit.

---

## Program–3 : Basic Singly Linked List – Insert, Delete and Display

### Program Code
![Program Code](images/Screenshot%20from%202026-02-12%2010-49-32.png) 

### Output
![Output](images/Screenshot%20from%202026-02-12%2013-18-54.png)

### Algorithms

    * Insert at head.
    * Delete from head.
    * Traverse and display.

### Observation

    Simple version, good for pointer understanding.

---

## Program–4 : Circular Linked List – Implementation and Operations

### Program Code
![Program Code](images/Screenshot%20from%202026-02-12%2010-49-52.png) 
![Program Code](images/Screenshot%20from%202026-02-12%2010-50-03.png)

### Output
![Output](images/Screenshot%20from%202026-02-12%2013-19-17.png)

### Algorithms

    * Last node points to head.
    * Insert by updating last node link.
    * Display using do-while loop.

### Observation

    No NULL at end, useful for cyclic processes.

---

## Program–5 : Doubly Linked List – Implementation and Operations

### Program Code
![Program Code](images/Screenshot%20from%202026-02-12%2010-50-24.png) 

### Output
![Output](images/Screenshot%20from%202026-02-12%2013-19-37.png)

### Algorithms

    * Node has prev and next.
    * Insert at beginning by updating both links.
    * Traverse and display.

### Observation

    Two-way traversal possible, uses more memory.

---




