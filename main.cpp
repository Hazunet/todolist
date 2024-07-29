#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> todoList;
    string task;
    int choice;

    while (true) {
        cout << "1. Add task\n";
        cout << "2. View tasks\n";
        cout << "3. Remove task\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                cin.ignore(); // Ignore newline character
                getline(cin, task);
                todoList.push_back(task);
                break;
            case 2:
                if (todoList.empty()) {
                    cout << "No tasks to display.\n";
                } else {
                    cout << "Your tasks:\n";
                    for (int i = 0; i < todoList.size(); ++i) {
                        cout << i + 1 << ". " << todoList[i] << endl;
                    }
                }
                break;
            case 3:
                if (todoList.empty()) {
                    cout << "No tasks to remove.\n";
                } else {
                    cout << "Enter task number to remove: ";
                    int taskNumber;
                    cin >> taskNumber;
                    if (taskNumber >= 1 && taskNumber <= todoList.size()) {
                        todoList.erase(todoList.begin() + taskNumber - 1);
                        cout << "Task removed.\n";
                    } else {
                        cout << "Invalid task number.\n";
                    }
                }
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}
