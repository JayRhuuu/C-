#include <iostream>
#include <string>

#define PRESIDENT1 "Jane"
#define PRESIDENT2 "Asie"
#define PRESIDENT3 "Kurt"
#define VICEPRESIDENT1 "Jendelyn"
#define VICEPRESIDENT2 "Allen"
#define VICEPRESIDENT3 "Mark"
#define SECRETARY1 "Princess"
#define SECRETARY2 "Darlyn"
#define SECRETARY3 "Rochelle"
#define TREASURER1 "CARL"
#define TREASURER2 "MICHAEL"
#define TREASURER3 "KIM"

using namespace std;

int voteCount1=0, voteCount2=0, voteCount3=0, voteCount4=0, voteCount5=0, voteCount6=0, voteCount7=0, voteCount8=0, voteCount9=0, voteCount10=0, voteCount11=0, voteCount12=0;

int Candidates() {
    int choice;
    
    cout << "----- VOTE NOW!!!! -----" << endl; 
    cout << "----- CANDIDATES -----" << endl;
    
    do {
        cout << "--- PRESIDENT ---" << endl;
    cout << "1. " << PRESIDENT1 << endl;
    cout << "2. " << PRESIDENT2 << endl;
    cout << "3. " << PRESIDENT3 << endl;
   
    cout << "Enter your President: ";
    cin >> choice;
    switch (choice) {
        case 1:
            voteCount1++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        case 2:
            voteCount2++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        case 3:
            voteCount3++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        default:
            cout << "--- ERROR!!! PLEASE RETRY!!! ---" << endl;
    }
    } while (choice < 1 || choice > 3);
    
    do {
        cout << "--- VICE PRESIDENT ---" << endl;
    cout << "1. " << VICEPRESIDENT1 << endl;
    cout << "2. " << VICEPRESIDENT2 << endl;
    cout << "3. " << VICEPRESIDENT3 << endl;

    cout << "Enter your Vice President: ";
    cin >> choice;
    switch (choice) {
        case 1:
            voteCount4++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        case 2:
            voteCount5++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        case 3:
            voteCount6++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        default:
            cout << "--- ERROR!!! PLEASE RETRY!!! ---" << endl;
    }
    } while (choice < 1 || choice > 3);
    
    do {
        cout << "--- SECRETARY ---" << endl;
    cout << "1. " << SECRETARY1 << endl;
    cout << "2. " << SECRETARY2 << endl;
    cout << "3. " << SECRETARY3 << endl;

    cout << "Enter your Secretary: ";
    cin >> choice;
    switch (choice) {
        case 1:
            voteCount7++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        case 2:
            voteCount8++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        case 3:
            voteCount9++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        default:
            cout << "--- ERROR!!! PLEASE RETRY!!! ---" << endl;
    }
    } while (choice < 1 || choice > 3);
    
    do {
        cout << "--- TREASURER ---" << endl;
    cout << "1. " << TREASURER1 << endl;
    cout << "2. " << TREASURER2 << endl;
    cout << "3. " << TREASURER3 << endl;

    cout << "Enter your Treasurer: ";
    cin >> choice;
    switch (choice) {
        case 1:
            voteCount10++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        case 2:
            voteCount11++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        case 3:
            voteCount12++;
            cout << "--- THANK YOU FOR VOTING ---" << endl;
            break;
        default:
            cout << "--- ERROR!!! PLEASE RETRY!!! ---" << endl;
    }
    } while (choice < 1 || choice > 3);
    
    return 0;
}

int Vote_Count() {
    cout << "----- VOTING STATUS -----" << endl; 
    cout << "--- PRESIDENT ---" << endl;
    cout << PRESIDENT1 << " - " << voteCount1 << endl;
    cout << PRESIDENT2 << " - " << voteCount2 << endl;
    cout << PRESIDENT3 << " - " << voteCount3 << endl;
    
    cout << "--- VICE PRESIDENT ---" << endl;
    cout << VICEPRESIDENT1 << " - " << voteCount4 << endl;
    cout << VICEPRESIDENT2 << " - " << voteCount5 << endl;
    cout << VICEPRESIDENT3 << " - " << voteCount6 << endl;
    
    cout << "--- SECRETARY ---" << endl;
    cout << SECRETARY1 << " - " << voteCount7 << endl;
    cout << SECRETARY2 << " - " << voteCount8 << endl;
    cout << SECRETARY3 << " - " << voteCount9 << endl;
    
    cout << "--- TREASURER ---" << endl;
    cout << TREASURER1 << " - " << voteCount10 << endl;
    cout << TREASURER2 << " - " << voteCount11 << endl;
    cout << TREASURER3 << " - " << voteCount12 << endl;
    
    return 0;
}

int Leading_Candidates() {
    cout << "----- LEADING CANDIDATES -----" << endl;
    cout << "----- PRESIDENT -----" << endl;
    if (voteCount1>voteCount2&&voteCount1>voteCount3){
        cout << "===" << PRESIDENT1 << "===" << endl;
        
    }
    else if(voteCount2>voteCount1&&voteCount2>voteCount3){
        cout << "===" << PRESIDENT2 << "===" << endl;
        
    }
    else if(voteCount3>voteCount1&&voteCount3>voteCount2){
        cout << "===" << PRESIDENT3 << "===" << endl;
        
    }
    else{
        cout << "----- ITS A TIE!!! NO WINNING SITUATIO-----" << endl;
        
    }
    
    cout << "----- VICE PRESIDENT -----" << endl;
    if(voteCount4>voteCount5&&voteCount4>voteCount6){
        cout << "===" << VICEPRESIDENT1 << "===" << endl;
        
    }
    else if(voteCount5>voteCount4&&voteCount5>voteCount6){
        cout << "===" << VICEPRESIDENT2 << "===" << endl;
        
    }
    else if(voteCount6>voteCount5&&voteCount6>voteCount4){
        cout << "===" << VICEPRESIDENT3 << "===" << endl;
        
    }
    else{
        cout << "----- ITS A TIE!!! NO WINNING SITUATIO-----" << endl;
        
    }
    
    cout << "----- SECRETARY -----" << endl;
    if(voteCount7>voteCount8&&voteCount7>voteCount9){
        cout << "===" << SECRETARY1 << "===" << endl;
        
    }
    else if(voteCount8>voteCount7&&voteCount8>voteCount9){
        cout << "===" << SECRETARY2 << "===" << endl;
        
    }
    else if(voteCount9>voteCount8&&voteCount9>voteCount7){
        cout << "===" << SECRETARY3 << "===" << endl;
        
    }
    else{
        cout << "----- ITS A TIE!!! NO WINNING SITUATIO-----" << endl;
        
    }
        
    cout << "----- TREASURER -----" << endl;
        if(voteCount10>voteCount11&&voteCount10>voteCount12){
        cout << "===" << TREASURER1 << "===" << endl;
        
    }
    else if(voteCount11>voteCount10&&voteCount11>voteCount12){
        cout << "===" << TREASURER2 << "===" << endl;
        
    }
    else if(voteCount12>voteCount11&&voteCount12>voteCount10){
        cout << "===" << TREASURER3 << "===" << endl;
        
    }
    else{
        cout << "----- ITS A TIE!!! NO WINNING SITUATIO-----" << endl;
        
    }
    
    return 0;
}

int main() {
    string full_name;
    string year_level;
    int age;
    int choice;

    cout << "----- REGISTRATION -----" << endl;
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Enter your year level: ";
    getline(cin, year_level);
    
    while (true) {
        cout << "--- WELCOME TO E-VOTING SYSTEM ---" << endl;
    cout << "1. Candidates" << endl;
    cout << "2. Vote Count" << endl;
    cout << "3. Leading Candidates" << endl;
    cout << "0. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            Candidates();
            break;
        case 2:
            Vote_Count();
            break;
        case 3:
            Leading_Candidates();
            break;
        case 0:
            cout << "-------- Exiting the program --------" << endl;
            return 0;
        default:
            cout << "--- ERROR!!! PLEASE RETRY!!! ---" << endl;
    }
    }

    return 0;
}