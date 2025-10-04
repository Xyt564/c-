#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <fstream>

// File where tasks will be saved
const std::string FILENAME = "tasks.txt";

void showMenu() {
    std::cout << "\n----------------- TO DO LIST -----------------\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. View Tasks\n";
    std::cout << "3. Remove Task\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose an option: ";
}

void saveTasks(const std::vector<std::string>& tasks) {
    std::ofstream outFile(FILENAME);
    if (!outFile) {
        std::cerr << "Error saving tasks!\n";
        return;
    }
    for (const auto& task : tasks) {
        outFile << task << "\n";
    }
}

void loadTasks(std::vector<std::string>& tasks) {
    std::ifstream inFile(FILENAME);
    if (!inFile) {
        // File may not exist yet → that's fine
        return;
    }
    std::string task;
    while (std::getline(inFile, task)) {
        if (!task.empty()) {
            tasks.push_back(task);
        }
    }
}

void addTask(std::vector<std::string>& tasks) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string task;
    std::cout << "Enter Task: ";
    std::getline(std::cin, task);
    if (task.empty()) {
        std::cout << "Task cannot be empty.\n";
        return;
    }
    tasks.push_back(task);
    saveTasks(tasks);
    std::cout << "Task added!\n";
}

void viewTasks(const std::vector<std::string>& tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks yet.\n";
        return;
    }
    std::cout << "\nYour Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i] << "\n";
    }
}

void removeTask(std::vector<std::string>& tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks to remove.\n";
        return;
    }

    int index;
    viewTasks(tasks);
    std::cout << "Enter the task number to remove: ";
    if (!(std::cin >> index) || index < 1 || index > (int)tasks.size()) {
        std::cout << "Invalid task number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    tasks.erase(tasks.begin() + (index - 1));
    saveTasks(tasks);
    std::cout << "🗑 Task removed.\n";
}

int main() {
    std::vector<std::string> tasks;
    int choice;

    // Load tasks at startup
    loadTasks(tasks);

    while (true) {
        showMenu();

        if (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                removeTask(tasks);
                break;
            case 4:
                std::cout << "Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid option. Try again.\n";
        }
    }
}
