## **README - Binary Search Tree Dictionary**

### **Student Details**
- Name:          M. A. Hansi Upekka Sithumini
- Index Number:  23001968
- Email Address: hansiupekkasithumini2002@gmail.com 


### **Program Description**
This program implements a **Dictionary using a Binary Search Tree (BST)**. It reads words from a file and inserts them into a BST dynamically. The program provides functionalities to:

**1. Compute the **height** of the tree.                       => findHeight() function <br>
2. Compute the **size** (number of nodes) in the tree.       => findSize() <Br>
3. Find the **smallest (minimum) word** in the BST.          => findMin() <br>
4. Find the **largest (maximum) word** in the BST.           => findMax() <br>
5. Create and display the **mirror image** of the BST.       => mirrorImage()**


### **Compilation & Execution**

#### **1. Compiling the Code**

~ To compile the program on Linux, use: <br>
bash 
<br><br>
**gcc BST.c -o main**
<br>


#### **2. Running the Program**
bash <br><br>
**./main**


Make sure that the input file ("input_file.txt") is present in the same directory as the executable.<br>
In my case, "BST.c" file and "input.txt" file are in the same directory which is named "FOA".



### **Input File Format**
The program reads words from a file named "input_file.txt".

**cat dog rat bat bag nut mug cup kid dig**


### **Testing Environment**
- This code was tested on Linux using " gcc ".
- It successfully compiles and runs without errors.



### **Special Notes**
- I put a method to the program **ignores duplicate words** during insertion.
- Debugging statements are included for clarity but can be removed if not needed.





