#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
};
void addTask(vector<Task>& tasks) {
    Task newTask;
    cout << "Enter task description: ";
    cin.ignore(); // To clear leftover newline
    getline(cin, newTask.description);
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added!\n";
}
void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to show.\n";
        return;
    }
    cout << "\n--- To-Do List ---\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].description
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
}
void markCompleted(vector<Task>& tasks) {
    viewTasks(tasks);
    int index;
    cout << "Enter the task number to mark as completed: ";
    cin >> index;
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number.\n";
        return;
    }
    tasks[index - 1].completed = true;
    cout << "Task marked as completed!\n";
}
void deleteTask(vector<Task>& tasks) {
    viewTasks(tasks);
    int index;
    cout << "Enter the task number to delete: ";
    cin >> index;
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number.\n";
        return;
    }
    tasks.erase(tasks.begin() + index - 1);
    cout << "Task deleted!\n";
}
int main() {
    vector<Task> tasks;
    int choice;
    do {
        cout << "\n--- To-Do List Menu ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: viewTasks(tasks); break;
            case 3: markCompleted(tasks); break;
            case 4: deleteTask(tasks); break;
            case 5: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);
    return 0;
}