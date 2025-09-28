#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    string loginUsername, loginPassword;
    
    cout << "\tSign Up\t" << endl;
    cout << "Create a username: ";
    cin >> username;
    cout << "Create a password: ";
    cin >> password;
    
    cout << "\nAccount created successfully!\n" << endl;
    
    cout << "\tLog In\t" << endl;
    cout << "Username: " << endl;
    cin >> loginUsername;
    cout << "Password: " << endl;
    cin >> loginPassword;
    
    if (loginUsername == username && loginPassword == password) {
        cout << "\nLogin successfully! Welcome," << username << "!" << endl;
        
    } else {
        cout << "\nLogin failed! Incorrect username or password." << endl;
        
    }
    
    return 0;
}
