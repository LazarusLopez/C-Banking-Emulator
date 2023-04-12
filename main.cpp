#include <iostream>
#include <fstream>
#include <map>

using namespace std;

class Credentials {

public: 

    Credentials(string user, string pass) {
        user = this->user;
        pass = this->pass;
    }
    // // Adds username to the map and assigns password as the key
    // void accCreate(string username, string password) {
    //     credentials[username] = password;
    // };
    // void printMap() {
    //     cout << credentials[0];
    // }
    // void addToRegistry(Credentials account) {
    //     // ofstream file("bank-accounts.txt");
    //     // if (file.is_open()) {
    //     //     cout << "ADDING ACCOUNT TO REGISTRY . . . \n";
    //     //     file.close();
    //     // } else { cout << "Error creating` file.\n"; }
    // };

private:
    string user;
    string pass; 
    map<string, string> credentials;
};
 
 

int main() {
    Credentials user = Credentials("Banksy","abc123");


        ofstream file("bank-accounts.txt");
        if (file.is_open()) {
            cout << "ADDING ACCOUNT TO REGISTRY . . . \n";
            file.close();
        } else { cout << "Error creating` file.\n"; }
    // Credentials user;

    // Creates User and Password and passes information to the makeAccount function
    // user.accCreate("user1", "pass1");

    // user.printMap();
    // ofstream file("bank-accounts.txt");
    // if (file.is_open()) {
    //     // cout << "\nWELCOME TO THE NATIONAL BANK\n\n";
    //     // string user, pass;
    //     // cout << "CREATING AN ACCOUNT\nEnter Username: ";
    //     // getline(cin, user);
    //     // file << user;
    //     // file << "\n";
    //     // cout << "Enter Password: ";
    //     // getline(cin, pass);
    //     // file << pass;
    //     file.close(); 
    // } else { cout << "Error creating` file.\n"; }


            // // Iterate through the map
            // for (const auto credential : credentials) {
            // file << credential.first << "." << credential.second << endl;
            // file.close();

//   // Iterate through the map
//   for (const auto& credential : credentials) {
//     cout << "\nUsername: " << credential.first << "\nPassword: " << credential.second << "\n";
//   }




    // Get username and password from the user
    // string username, password;
    // cout << "Enter username: ";
    // cin >> username;
    // cout << "Enter password: ";
    // cin >> password;

    //     if (credentials.find(username) != credentials.end()) {
    //     // Verify the password
    //     if (credentials[username] == password) {
    //         cout << "Login successful!" << endl;
    //     } else {
    //         cout << "Incorrect password." << endl;
    //     }
    // } else {
    //     cout << "Username not found." << endl;
    // }

    // Account userOne = Account("banksy", "cowabunga");
    // userOne.welcomeMessage();

    // ofstream file("bank.txt");
    // if (file.is_open()) {
    //     // cout << "\nWELCOME TO THE NATIONAL BANK\n\n";
    //     // string user, pass;
    //     // cout << "CREATING AN ACCOUNT\nEnter Username: ";
    //     // getline(cin, user);
    //     // file << user;
    //     // file << "\n";
    //     // cout << "Enter Password: ";
    //     // getline(cin, pass);
    //     // file << pass;
    //     file.close(); 
    // } else { cout << "Error creating` file.\n"; }

    // ifstream infile("bank.txt"); // open the file for reading
    // cout << "\n\nREADING FILE . . .\n\n";
    // if (infile.is_open()) // check if the file was successfully opened
    // {
    //     string line;
    //     while (getline(infile, line)) // read each line of the file
    //     {
    //         cout << line << '\n'; // output the line to the console
    //     }
    //     infile.close(); // close the file
    // }
    // else { cout << "Unable to open file."; }

    return 0;
}