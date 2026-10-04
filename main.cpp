#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int budget;
    string carType, color, engine;
    
    cout << "Enter your budget: ";
    cin >> budget;
    
    cout << "Choose car type (Sedan/SUV/Truck): ";
    cin >> carType;
    
    cout << "Choose color (White/Black/Blue/Red): ";
    cin >> color;
    
    cout << "Choose engine (4-cylinder/V6/V8): ";
    cin >> engine;
    
    // Check for invalid inputs first
    bool validCarType = (carType == "Sedan" || carType == "SUV" || carType == "Truck");
    bool validColor = (color == "White" || color == "Black" || color == "Blue" || color == "Red");
    bool validEngine = (engine == "4-cylinder" || engine == "V6" || engine == "V8");
    
    if (!validCarType || !validColor || !validEngine) {
        cout << "The configuration is invalid." << endl;
        return 0;
    }
    
    // Check for invalid combinations
    // Truck cannot have V8
    if (carType == "Truck" && engine == "V8") {
        cout << "The configuration is invalid." << endl;
        return 0;
    }
    
    // Red only available for Sedan and SUV
    if (color == "Red" && carType == "Truck") {
        cout << "The configuration is invalid." << endl;
        return 0;
    }
    
    // Calculate costs
    int carCost = 0;
    if (carType == "Sedan") carCost = 18000;
    else if (carType == "SUV") carCost = 28000;
    else if (carType == "Truck") carCost = 32000;
    
    int colorCost = 0;
    if (color == "Black") colorCost = 500;
    else if (color == "Blue") colorCost = 750;
    else if (color == "Red") colorCost = 1000;
    
    int engineCost = 0;
    if (engine == "V6") engineCost = 2500;
    else if (engine == "V8") engineCost = 5000;
    
    int totalCost = carCost + colorCost + engineCost;
    
    cout << "Total cost: $" << totalCost << endl;
    
    if (totalCost <= budget) {
        cout << "In budget" << endl;
    } else {
        cout << "Not in budget" << endl;
    }
    
    return 0;
}
