# 📊 AI-Powered Personal Finance Manager

## 🔥 Overview
The **AI-Powered Personal Finance Manager** is a C++ program that allows users to **track income, manage expenses, generate financial reports, and analyze spending habits**. This project helps individuals make better financial decisions by categorizing transactions and offering **smart spending analysis** with recommendations.

## 🚀 Features
### ✅ **Transaction Management**
- Add **income** and **expenses** with category selection.
- Stores transaction records in a persistent file (`transactions.txt`).

### 📊 **Financial Reporting**
- Generates **monthly financial reports**.
- Displays **total income, expenses, and savings**.
- Provides **category-wise breakdown** of income and expenses.

### 📈 **Spending Analysis**
- Warns if **expenses exceed income**.
- Offers **suggestions** for budget improvement based on user spending patterns.
- Identifies **overspending categories** like Entertainment or Food.

### ⚡ **User-Friendly Interface**
- Clean and structured CLI with emojis for a **better user experience**.
- Uses **precision formatting** for clear financial insights.
- Supports **multiple transactions** per session.

## 📂 Installation & Usage
### 🔧 **Prerequisites**
- C++ compiler (e.g., `g++`, `clang++`)
- Any text editor or IDE (e.g., VS Code, CodeBlocks)

### 📥 **Installation**
1. **Clone the Repository** (or copy the code):
   ```sh
   git clone https://github.com/yourusername/finance-manager.git
   cd finance-manager
   ```
2. **Compile the Program**:
   ```sh
   g++ finance_manager.cpp -o finance_manager
   ```
3. **Run the Program**:
   ```sh
   ./finance_manager
   ```

## 📜 Usage Guide
1️⃣ **Add Income:**
   - Select **Option 1** from the menu.
   - Enter category (e.g., Food, Rent, Transport).
   - Enter the amount.
   - Transaction gets recorded.

2️⃣ **Add Expense:**
   - Select **Option 2**.
   - Enter category & amount.
   - Transaction saved.

3️⃣ **Generate Report:**
   - Select **Option 3** to see a **summary** of your finances.

4️⃣ **Analyze Spending:**
   - Select **Option 4** for **smart financial recommendations**.

5️⃣ **Exit:**
   - Select **Option 5** to quit.

## 📄 Example Output
```sh
========== Personal Finance Manager ==========
1️⃣ Add Income
2️⃣ Add Expense
3️⃣ Generate Report
4️⃣ Analyze Spending
5️⃣ Exit
Enter choice: 3

============ Monthly Report ============
📌 Total Income: $8838
📌 Total Expenses: $56
📌 Net Savings: $8782

💰 Income Breakdown:
- Entertainment: $8585
- Food: $253

💸 Expense Breakdown:
- Rent: $56
```

## 🛠 Technologies Used
- **C++** for logic & control flow.
- **File Handling** (`transactions.txt`) for data persistence.
- **STL Maps** (`map<string, double>`) for category-wise breakdown.
- **time.h** for timestamping transactions.

## 🎯 Future Enhancements
🔹 **Graphical User Interface (GUI)** using Qt or GTK.  
🔹 **Automated Budget Alerts** when spending exceeds a threshold.  
🔹 **Machine Learning Module** to predict future spending patterns.  

## 📌 License
This project is licensed under the **MIT License** – feel free to use, modify, and share!

## 💡 Contributing
Want to improve this project? PRs are welcome! 🎉

---

👨‍💻 **Developed by Shagun Shukla**

