## README - Binary Search Tree Dictionary

### Student Details
- **Name:** [Your Name]  
- **Index Number:** [Your Index Number]  
- **Email Address:** [Your Email]  

---

### Program Description
This program implements a **Dictionary using a Binary Search Tree (BST)**. It reads words from a file and inserts them into a BST dynamically. The program then provides functionalities to:

1. Compute the **height** of the tree.
2. Compute the **size** (number of nodes) in the tree.
3. Find the **smallest (minimum) word** in the BST.
4. Find the **largest (maximum) word** in the BST.
5. Create and display the **mirror image** of the BST.

The input file must contain a list of words, one per line.

---

### **Compilation & Execution**
#### **1. Compiling the Code**
To compile the program on Linux, use:
```bash
gcc -o bst bst.c
```

#### **2. Running the Program**
```bash
./bst
```

Make sure that the input file (`input_file.txt`) is present in the same directory as the executable.

---

### **Input File Format**
The program reads words from a file named **`input_file.txt`**. The words should be listed one per line, for example:
```
Cat
Dog
Rat
Bat
Bag
Nut
Mug
Cup
Kid
Dig
```

---

### **Testing Environment**
- This code was **tested on Linux** using **GCC**.
- It successfully compiles and runs without errors.

---

### **Special Notes**
- The program **ignores duplicate words** during insertion.
- Debugging statements are included for clarity but can be removed if not needed.
- The BST operations ensure an **efficient O(log n) average time complexity**.

If any issues arise, please verify that the input file is correctly formatted and placed in the working directory.

---

### **Acknowledgment**
This submission is my own work, and I have followed all the requirements stated in the assignment.

