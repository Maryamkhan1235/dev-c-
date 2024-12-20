#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
 {
    
    const int ticketPrice = 10;  
    const int popcornPrice = 5;   

    
    cout << "Welcome to the Qawali Night Event Registration!" << endl;
    
    int num_students;
    cout << "How many users will attend the event? (Maximum 10): ";
    cin >> num_students;


    if (num_students > 10)
	 {
        cout << "Error: Not more users allowed." << endl;
        return 1; 
    }

    
    vector<string> student_names;
    int total_cost = 0;


    for (int i = 0; i < num_students; i++) 
	{
        string name;
        cout << "Enter name for user " << (i + 1) << ": ";
        cin >> name;
        student_names.push_back(name);

    
        int individual_cost = ticketPrice + popcornPrice;
        total_cost += individual_cost;

        cout << "User " << (i + 1) << ": " << name << ", Cost: $" << individual_cost << endl;
    }

    
    cout << "\nUser names for the event:" << endl;
    for (int i = 0; i < num_students; i++) {
        cout << "User " << (i + 1) << ": " << student_names[i] << endl;
    }


    cout << "\nTotal cost for all users: $" << total_cost << endl;

    
    cout << "Thank you for using the Qawali Night Event Registration!" << endl;
    
    return 0; 
}