#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int choice;
    vector<string> tasks;
    do{
    cout << "CLI Based To Do\n";
    cout << "----------------\n";
    cout << "Choose Options->\n";
    cout << "1. Add Tasks\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice) {
        case 1:{
        cout << "Add Task selected\n";
        cout<<"Enter task: ";
        string task;
        cin.ignore();
        getline(cin, task);
        tasks.push_back(task);
        cout<<"Task succesfully added\n";
        break;
        }
        case 2:{
        cout << "View Tasks selected\n";
        if(tasks.size() == 0) {
            cout<<"List is empty"<<endl;
        } else {
            for(int i = 0; i < tasks.size(); i++) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();

        break;
    }
        case 3:{
        cout << "Delete Task selected\n";
         if(tasks.size() == 0) {
            cout<<"List is empty"<<endl;
        } else {
            for(int i = 0; i < tasks.size(); i++) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
            int taskNumber;
            cout << "Enter task number to delete task: ";
            cin >> taskNumber;

            int index = taskNumber -1;

            if(index  < 0 || index >= tasks.size()) {
                cout << "Invalid task number\n";
            } else {
                cout << "Deleted: " << tasks[index] << endl;
                tasks.erase(tasks.begin() + index); 
            }
        }
        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
        break;
        }
        case 4:
        cout << "Exit\n";
        break;
        default:
        cout << "Invalid Choice\n";
    }
    } while(choice != 4);
return 0;
}