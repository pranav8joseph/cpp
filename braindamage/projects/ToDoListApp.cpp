// To Do List App
// code corrected by chat gpt (LEARN THIS UP! UNDERSTAND YOUR MISTAKES!)
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits> 

void saveTaskList(const std::vector<std::string>& tasks, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto & task : tasks) {
            file << task << '\n';
        }
        file.close();
    } else {
        std::cout << "Error: Failed to open file for writing.\n";
    }
}

std::vector<std::string> loadTaskList(const std::string& filename) {
    std::vector<std::string> tasks;
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            tasks.push_back(line);
        }
        file.close();
    } else {
        std::cout << "Error: Failed to open file for reading. Creating a new file.\n";
    }
    return tasks;
}

int main() {
    std::string filename = "tasklist.txt";
    std::vector<std::string> user_tasks = loadTaskList(filename);
    std::string choice;
    char continueChoice; 

do {
    std::cout << "What would you like to do today?" << std::endl;              
    std::cout << "Your options are:\n"
              << "1. add a new task\n"
              << "2. complete a task or remove a task from the list\n"
              << "3. show me my task list\n"
              << "Press Q to exit\n";

    
    std::getline(std::cin, choice);

    if (choice == "1") {
        std::cout << "Please enter the task you would like to add: ";
        std::string newTask;
        std::getline(std::cin, newTask);
        user_tasks.push_back(newTask);
    } else if (choice == "2") {
        std::cout << "Please enter the number on the list next to the task you would like to remove: ";
        std::cout << "Your task list:\n";
        for (int i = 0; i < user_tasks.size(); i++) {
            std::cout << "[" << i << "] " << user_tasks[i] << "\n";
        }
        int index;
        std::cin >> index;
        if (index >= 0 && index < user_tasks.size()) {
            user_tasks.erase(user_tasks.begin() + index);
        } else {
            std::cout << "Invalid index!\n";
        }
    } else if (choice == "3") {
        std::cout << "Your task list:\n";
    for (int i = 0; i < user_tasks.size(); i++) {
        std::cout << "[" << i << "] " << user_tasks[i] << "\n";
    }
    } else if (choice == "Q" || choice == "q"){
        return 0;
    }

    saveTaskList(user_tasks, filename);

if (choice != "Q") {
            std::cout << "Would you like to do anything else? (Y/N): ";
            std::cin >> continueChoice;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

    } while (continueChoice == 'Y' || continueChoice == 'y');

    return 0;
}