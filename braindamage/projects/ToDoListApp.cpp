// code corrected by chat gpt (LEARN THIS UP! UNDERSTAND YOUR MISTAKES!)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void) {
    std::cout << "What would you like to do today?\n"
              << "Your options are:\n"
              << "add a new task\n"
              << "complete a task or remove a task from the list\n"
              << "show me my task list\n"
              << "nothing\n";

    std::vector<std::string> user_tasks = {"hi", "hello bro", "how are you", "good what about you"};

    std::string choice;
    std::getline(std::cin, choice);

    if (choice == "add a new task") {
        std::cout << "Please enter the task you would like to add: ";
        std::string newTask;
        std::getline(std::cin, newTask);
        user_tasks.push_back(newTask);
    } else if (choice == "complete a task" || choice == "remove a task from the list" ||
               choice == "complete a task or remove a task from the list") {
        std::cout << "Please enter the index of the task you would like to remove: ";
        int index;
        std::cin >> index;
        if (index >= 0 && index < user_tasks.size()) {
            user_tasks.erase(user_tasks.begin() + index);
        } else {
            std::cout << "Invalid index!\n";
        }
    }

    std::cout << "Your task list:\n";
    for (int i = 0; i < user_tasks.size(); i++) {
        std::cout << "[" << i << "] " << user_tasks[i] << "\n";
    }

    return 0;
}



// wrong code (original code)

// #include <iostream>
// #include <vector>
// #include <string> 
// #include <algorithm>

// int main(void) {

//     std::cout << "What would you like to do today?\n" << "Your options are: \n" << "add a new task\n"; 
//     std::cout << "complete a task or remove a task from the list\n" << "show me my task list\n" << "nothing\n"; 
//     std::vector<std::string> user_tasks = {"hi", "hello bro", "how are you", "good what about you"}; 
//     // takes task input and puts it in vector
// std::string choice; 
// getline(std::cin, choice); 

//     if (choice == "add a new task") {
//     //creates new task

//     std::cout << "please enter the task you would like to add"; 
//     std::string x; 

//     getline(std::cin, x); 

//     user_tasks.push_back(x); 

//     } else if (choice == "complete a task" or "remove a task from the list" or "complete a task or remove a task from the list") {
//         // else if user says task done remove it from list
//         int x;

//         //removes a certain string from a vector
//         auto itr = std::find(user_tasks.begin(), user_tasks.end(), x);
//         if (itr != user_tasks.end()) user_tasks.erase(itr);

//     }

//     for (int c = 0; c < user_tasks.size(); c++){

//         std::cout << user_tasks[c]; 

//     }

// return 0;

// }