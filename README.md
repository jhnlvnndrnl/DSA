# DSA in C

This repository documents my journey of learning **Data Structures and Algorithms (DSA)** using the C programming language.

I chose C because it forces you to understand how data actually works:
- memory allocation  
- pointers  
- arrays and linked nodes  
- how stacks and queues are manually implemented  
- how trees grow and search works internally  

Instead of relying on automatic memory management, C makes you see every detail.  
That’s why it's perfect for mastering the fundamentals of DSA.

---

## 📘 What’s Inside

Each folder contains a clean and simple implementation:
- **array/** → Basic array operations  
- **linked_list/** → Singly linked list  
- **stack/** → Stack using array  
- **queue/** → Queue using array  
- **search/** → Binary search  
- **sort/** → Bubble sort  
- **tree/** → Binary tree (insert + traversal)  

Each module includes:
- `.h` header file (declarations)
- `.c` source file (implementation)

---

## 🧠 My Learning Goal

To understand **how data structures work under the hood**, not just how to use them.  
This repo will grow as I learn more algorithms and more advanced structures.

---

## 🛠 How to Run

```sh
gcc main.c array/array.c linked_list/linked_list.c stack/stack.c queue/queue.c tree/binary_tree.c -o dsa
./dsa
