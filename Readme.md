# 🚇 City Transport System Using Graph

## 👥 Team Members
- Purna  
- Hemal  

---

## 📌 Problem Statement
Managing city transport systems can be complex due to multiple stations and connections. This project simulates a transport system using graph data structure to efficiently manage connections between stations.

---

## 🧠 Data Structure Used
- Graph  
- Adjacency List  
- Linked List  

---

## ⚙️ Features (CRUD Operations)
- ➕ Add Connection (Create)  
- 📊 Display Map (Read)  
- 🔍 Search Connection (Read)  
- ✏️ Update Connection (Update)  
- ❌ Delete Connection (Delete)  

---

## 💻 Technologies Used
- C Programming Language  
- Dynamic Memory Allocation (`malloc`, `free`)  
- Structures and Pointers  

---

## 🧩 How It Works
- Each station is represented as a **node (vertex)**  
- Each connection is represented as an **edge**  
- Connections are stored using an **adjacency list**  

---

## 🛠 Compilation & Execution

```bash
gcc main.c -o project
./project
```

---

## 📊 Sample Output

```
==============================
 CITY TRANSPORT SYSTEM MENU
==============================
1. Add Station (Create)
2. Display Network (Read)
3. Update Station (Update)
4. Delete Station (Delete)
5. Search Station
6. Exit
Enter Choice:

Enter Choice: 1
Enter Station ID: 123
Enter Station Name: payinur
Enter Transport Mode (Metro/Train/Bus): bus
SUCCESS: Station added to the network!

Enter Choice: 1
Enter Station ID: 124
Enter Station Name: kelambakkam
Enter Transport Mode (Metro/Train/Bus): train
SUCCESS: Station added to the network!

Enter Choice: 2
--- CITY TRANSPORT NETWORK MAP ---
START <-> [bus: payinur (ID:123)] <-> [train: kelambakkam (ID:124)] <-> END

Enter Choice: 3
Enter Station ID to update: 123
Enter New Name for Station: thiruporur
Enter New Mode (Metro/Train/Bus): train
SUCCESS: Station information updated!

Enter Choice: 3
Enter Station ID to update: 12
ERROR: Station ID not found.

Enter Choice: 4
Enter Station ID to remove: 123
SUCCESS: Station removed from network.

Enter Choice: 4
Enter Station ID to remove: 123
ERROR: Station ID not found.

Enter Choice: 5
Enter Station ID to search: 124
--- Station Found ---
Name: kelambakkam
Mode: train

Enter Choice: 5
Enter Station ID to search: 123
ERROR: Station not found.

Enter Choice: 6
Exiting program...
```

---

## 🌍 Real World Application
- Metro systems 🚇  
- Navigation systems 📍  
- Route planning 🗺️  

---

## 🎯 Conclusion
This project demonstrates how graph data structures can be used to model real-world transport systems efficiently. It supports CRUD operations and provides a scalable solution.

---

## 🔮 Future Scope
- Add station names instead of numbers  
- Implement shortest path algorithms  
- Develop graphical interface  
