// egg

#include <iostream> 
#include <vector> 
#include <string> 

int main() {

int total = 0; 
std::string x; 
std::vector<std::string> no = {"no"}; 

std::vector<std::string> items = {"paper", "plasticbag", "meterofmaskingtape", "meterofstring", "meterofducttape", "sponge", "tenpopsicklesticks", "tenpaperstraws", "fiftycmoftinfoil", "styrofoamcup", "packingpeanuts", "fiftycmofbubblewrap", "fifteencottonballs", "tenqtips", "fiveelasticbands", "recycledstuff"};

std::vector<int> cost = {50, 50, 40, 100, 60, 60, 65, 100, 150, 235, 235, 150, 50, 25, 70, 10}; 

std::cout << "What items would you like to purchase? Your options are: " << std::endl; 

for (int j = 0; j < items.size(); j++) {

std::cout << items[j] << " " << std::endl; 

}

std::cin >> x; 

for (int i = 0; i < items.size(); i++) {

//for loop and if statement after

for (int g = 0; g < items.size(); g++) {

if (x == items[g]) {

total = total + cost[g]; 

} else { 

total = total + 0; 

}

}

std::cout << "Is there anything else you would like today? your options are: "; 
std::cin >> x; 

if (x == no[0]) { 

i = items.size(); 

}

}

if (total < 1000) { 
std::cout << "Your total is " << total << " points." << std::endl; 
std::cout << "Thanks for shopping!" << std::endl; 

} else {

std::cout << "Sir, your card has declined." << std::endl; 
std::cout << total << std::endl; 

}

}