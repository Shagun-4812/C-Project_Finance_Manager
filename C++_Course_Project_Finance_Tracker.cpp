#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <ctime>
using namespace std;

class Transaction {
public:
    string type, category;
    double amount;
    time_t timestamp;

    Transaction(string t, string c, double a) {
        type = t;
        category = c;
        amount = a;
        timestamp = time(0);
    }

    void saveToFile() {
        ofstream file("transactions.txt", ios::app);
        file << type << "," << category << "," << amount << "," << timestamp << "\n";
        file.close();
    }

    static vector<Transaction> loadFromFile() {
        vector<Transaction> transactions;
        ifstream file("transactions.txt");
        if (!file) return transactions;

        string type, category;
        double amount;
        time_t timestamp;
        
        while (file >> type >> category >> amount >> timestamp) {
            transactions.push_back(Transaction(type, category, amount));
        }
        
        file.close();
        return transactions;
    }
};

class FinanceManager {
private:
    map<string, double> expenses;
    double totalIncome = 0, totalExpenses = 0;

public:
    void addTransaction(string type) {
        string category;
        double amount;

        cout << "Enter category (Food, Rent, Transport, Entertainment, Others): ";
        cin >> category;
        cout << "Enter amount: ";
        cin >> amount;

        Transaction t(type, category, amount);
        t.saveToFile();

        if (type == "Expense") {
            expenses[category] += amount;
            totalExpenses += amount;
        } else {
            totalIncome += amount;
        }

        cout << "Transaction recorded successfully!\n";
    }

    void generateReport() {
        cout << "\n==== Monthly Report ====\n";
        cout << "Total Income: $" << totalIncome << "\n";
        cout << "Total Expenses: $" << totalExpenses << "\n";
        cout << "Savings: $" << totalIncome - totalExpenses << "\n";

        cout << "\nCategory-wise Spending:\n";
        for (auto it : expenses) {
            cout << it.first << ": $" << it.second << "\n";
        }
    }

    void analyzeSpending() {
        cout << "\n==== Expense Analysis ====\n";
        if (totalExpenses > totalIncome) {
            cout << "Warning: You are spending more than you earn!\n";
        } else {
            cout << "Good job! You're saving money!\n";
        }

        cout << "\nSuggestions:\n";
        if (expenses["Entertainment"] > (totalIncome * 0.15)) {
            cout << "- Consider reducing entertainment expenses.\n";
        }
        if (expenses["Food"] > (totalIncome * 0.25)) {
            cout << "- You might be spending too much on food. Try meal prepping!\n";
        }
        if (totalExpenses > totalIncome * 0.8) {
            cout << "- Try to save at least 20% of your income every month.\n";
        }
    }

    void run() {
        int choice;
        do {
            cout << "\n1. Add Income\n2. Add Expense\n3. Generate Report\n4. Analyze Spending\n5. Exit\nEnter choice: ";
            cin >> choice;
            switch (choice) {
                case 1: addTransaction("Income"); break;
                case 2: addTransaction("Expense"); break;
                case 3: generateReport(); break;
                case 4: analyzeSpending(); break;
                case 5: cout << "Exiting...\n"; break;
                default: cout << "Invalid choice! Try again.\n";
            }
        } while (choice != 5);
    }
};

int main() {
    FinanceManager manager;
    manager.run();
    return 0;
}
