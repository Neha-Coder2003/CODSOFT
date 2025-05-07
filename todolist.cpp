#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showMenu() {
    cout << "\n--- To-Do List Menu ---\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

void addTask(vector<string> &tasks) {
    string task;
    cout << "Enter the task: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully.\n";
}

void viewTasks(const vector<string> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks in the list.\n";
    } else {
        cout << "\n--- Your Tasks ---\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void deleteTask(vector<string> &tasks) {
    int index;
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter the task number to delete: ";
    cin >> index;
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task deleted.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    vector<string> tasks;
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: viewTasks(tasks); break;
            case 3: deleteTask(tasks); break;
            case 4: cout << "Exiting... Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}