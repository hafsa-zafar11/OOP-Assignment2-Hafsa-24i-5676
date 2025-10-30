# OOP Assignment 2 – Stack Implementation and Algorithm Analysis

**Name:** Hafsa  
**Roll No:** 24i-5676  
**Course:** Object-Oriented Programming
**Section:** FT-3A
**University:** FAST–NU Islamabad Campus  

---

## Description
This repository contains my submission for OOP Assignment 2.  
It includes:

1. **Array-based stack** for reversing part of a character array (`ChangeLocationIter`).  
2. **Linked list-based stack** for printing a numeric pattern (`PrintPatternIter`).  
3. Fully iterative solutions replacing the original recursive implementations.  
4. Tested and working C++ code for Dev C++.

---

## Algorithm Analysis

### Linked List–Based Stack
- **Push (Insertion):** O(1) — Each node is added at the top.  
- **Pop (Deletion):** O(1) — Top node is removed.  
- **Memory:** Each node requires extra memory for a pointer.  
- **Performance:** Dynamic size, no overflow unless memory is exhausted.

### Array–Based Stack
- **Push (Insertion):** O(1) (amortized), O(n) if resizing occurs.  
- **Pop (Deletion):** O(1)  
- **Memory:** Uses contiguous memory, compact and cache-friendly.  
- **Performance:** Faster for small fixed-size stacks, but less flexible.

### Comparison
| Operation | Linked List Stack | Array Stack |
|-----------|-----------------|------------|
| Push      | O(1)            | O(1) (amortized) |
| Pop       | O(1)            | O(1) |
| Memory    | Extra pointer per node | Compact, fixed or dynamic |
| Flexibility | Dynamic | Fixed or resizing needed |

**Conclusion:**  
- Both stacks provide O(1) insertion/deletion.  
- Linked list stack is more flexible, array stack is faster for small data.  
- Choice depends on whether **memory flexibility** or **speed** is more important.

---
