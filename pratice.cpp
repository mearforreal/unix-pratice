// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    
      int choice;
   
    
    do{
        
        cout << "=====================" << endl;
        cout << "       Main Menu     "<< endl;
        cout << "=====================" << endl;
        cout << "1. Operating system info"<< endl;
        cout << "2. Network info"<< endl;
        cout << "3. User's information"<< endl; 
        cout << "4. File Operations"<< endl;
        cout << "5. Find files"<< endl;
        cout << "6. Exit"<< endl;
  
        cout << "Enter a number: ";
        cin >> choice;
        
        switch(choice){
            case 1:
                cout << "Case 1"<< endl;
                break;
            case 2:
                cout << "Case 2"<< endl;
                 break;
            case 3:
                cout << "Case 3"<< endl;
                 break;
            case 4:
                cout << "Case 4"<< endl;
                 break;
            case 5:
                cout << "Case 5"<< endl;
                 break;
            case 6:
                cout << "Exit"<< endl;
                return 0;
               
            default:
                cout << "Invalid number"<< endl;
                break;
        }
        
        // cout << "=====================" << endl;
        // cout << "       Main Menu     "<< endl;
        // cout << "=====================" << endl;
        // cout << "1. Operating system info"<< endl;
        // cout << "2. Network info"<< endl;
        // cout << "3. User's information"<< endl; 
        // cout << "4. File Operations"<< endl;
        // cout << "5. Find files"<< endl;
        // cout << "6. Exit"<< endl;
   
   
        // cout << "Enter a number again: ";
        // cin >> choice;
        
         
    }while(choice != 6);
    
    
    
   

    return 0;
}