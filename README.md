# Inventory Management System

## 📌 Project Overview
The **Inventory Management System** is a simple C++ console application that allows users to manage stock efficiently. It provides features to **add, sell, and list items** while tracking total sales revenue.

## 🚀 Features
- ✅ Add new items with name, quantity, and price.
- ✅ Sell items and update inventory automatically.
- ✅ Remove items from inventory when quantity reaches zero.
- ✅ List all available items with details.
- ✅ Uses `std::vector` for dynamic storage.

## 🛠️ Technologies Used
- **C++** (Object-Oriented Programming)
- **Vectors (`std::vector`)** instead of C-style arrays for better performance.
- **Dynamic Memory Management** (`new` and `delete` for objects).

## 📂 File Structure
```
|-- InventoryManagementSystem/
    |-- main.cpp         # Main program file
    |-- Item.h           # Item class header
    |-- Inventory.h      # Inventory class header
    |-- README.md        # Documentation file
```

## 📝 How to Use
1️⃣ **Clone the Repository:**
```bash
git clone https://github.com/YOUR_GITHUB_USERNAME/Inventory-Management-System.git
cd Inventory-Management-System
```

2️⃣ **Compile and Run the Code:**
```bash
g++ main.cpp -o inventory_system
./inventory_system
```

3️⃣ **Follow the On-Screen Menu:**
```
MENU
1. Add new item
2. Sell item
3. List items
4. Exit
Enter your choice: 
```

## 📸 Example Output
```
Enter item name: Apple
Enter quantity: 10
Enter price: 2.5

Item name: Apple
Quantity: 10
Price: 2.5
```

## 🏆 Future Enhancements
- 🔹 Add a **search feature** for quick item lookup.
- 🔹 Implement a **graphical interface (GUI)**.
- 🔹 Export inventory data to a **CSV file**.

## 📌 Author
👨‍💻 **Your Name**  
🔗 [GitHub Profile](https://github.com/YOUR_GITHUB_USERNAME)

## 📜 License
This project is **open-source** and free to use under the [MIT License](LICENSE).
