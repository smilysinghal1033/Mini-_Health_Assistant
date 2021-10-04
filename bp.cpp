#include <iostream>
#include <windows.h>
#include <iomanip>


using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

class BP {
    long sys, dia;
public:
    void Input() {
        SetConsoleTextAttribute(color, 15);
        cout << "\n\n\t\t\t";
        cout << "ENTER SYSTOLIC PRESSURE VALUES (TOP NUMBER) = ";
        cin >> sys;
        cout << "\n\t\t\t";
        cout << "ENTER DIASTOLIC PRESSURE VALUES (BOTTOM NUMBER) = ";
        cin >> dia;
    }

    void High() const {
      }

    void table() {
      }

    void facts() {
      }
};


int main() {

    //
    //
    //  case 1:


    SetConsoleTextAttribute(color, 15);
    cout << "\n\n\n\t\t\t";
    cout << "---------------------------------------------------------------------------";
    cout << "\n\t\t\t\t\t";
    SetConsoleTextAttribute(color, 14);
    cout << "  BP (BLOOD PRESSURE) - CALCULATOR";
    cout << "\n\t\t\t";
    SetConsoleTextAttribute(color, 15);
    cout << "---------------------------------------------------------------------------";
    bprerun:
    cout << "\n\n\t\t\t\t\t";
    SetConsoleTextAttribute(color, 14);
    cout << "******Welcome to Bp Calculator******";
    SetConsoleTextAttribute(color, 15);
    cout << "\n\n\t\t\t";
    cout << "1. CALCULATE YOUR BP";
    cout << "\n\t\t\t";
    cout << "2. BP REFERENCE TABLE";
    cout << "\n\t\t\t";
    cout << "3. UNDERSTAND BP READINGS AND VALUES";
    cout << "\n\t\t\t";
    cout << "4. RETURN TO MAIN MENU";
    cout << "\n\t\t\t";
    cout << "5. EXIT";
    cout << "\n\n\t\t\t";
    cout << "ENTER YOUR CHOICE : ";
    BP user;
    int bp;
    cin >> bp;
    switch (bp) {
        case 1:
            user.Input();
            user.High();
            cout << "\n\n\n\t\t\t";
            cout << "1. GO TO BP REFERENCE TABLE";
            cout << "\n\t\t\t";
            cout << "2. RETURN TO BP MENU";
            cout << "\n\t\t\t";
            cout << "3. RETURN TO MAIN MENU";
            cout << "\n\t\t\t";
            cout << "4. EXIT";
            cout << "\n\n\t\t\t";
            cout << "ENTER YOUR CHOICE : ";
            int bp_calci;
            cin >> bp_calci;
            switch (bp_calci) {
                case 1:
                    user.table();
                    cout << "\n";
                    cout << "\n\n\t\t\t";
                    cout << "DO YOU WANT TO UNDERSTAND BP READINGS AND VALUES";
                    cout << "\n\t\t\t";
                    cout << "1. YES";
                    cout << "\n\t\t\t";
                    cout << "2. RETURN TO MAIN MENU";
                    cout << "\n\t\t\t";
                    cout << "3. EXIT";
                    cout << "\n\n\t\t\t";
                    cout << "ENTER YOUR CHOICE : ";
                    int bp_calci_reference_table;
                    cin >> bp_calci_reference_table;
                    switch (bp_calci_reference_table) {
                        case 1:
                            user.facts();
                            cout << "\n\n\n\t\t\t";
                            cout << "1. RETURN TO BP MENU";
                            cout << "\n\t\t\t";
                            cout << "2. RETURN TO MAIN MENU";
                            cout << "\n\t\t\t";
                            cout << "3. EXIT";
                            cout << "\n\n\t\t\t";
                            cout << "ENTER YOUR CHOICE : ";
                            int bpfacts;
                            cin >> bpfacts;
                            switch (bpfacts) {
                                case 1:
                                    goto bprerun;
                                    break;
                                case 2:
                                    cout << "\n\n\n\t\t\t";
                                    SetConsoleTextAttribute(color, 14);
                                    cout << "   ******MAIN MENU******\n\n\n\n";
                                    SetConsoleTextAttribute(color, 15);
                                    //  goto exit;
                                case 3:
                                    cout << "\n\t\t\t";
                                    cout << "THANK YOU\n\n\n\n\n\n";
                                    exit(0);
                                    break;
                            }
                    }
                    break;
                case 2:
                    goto bprerun;
                    break;
                case 3:
                    cout << "\n\n\n\t\t\t";
                    SetConsoleTextAttribute(color, 14);
                    cout << "   ******MAIN MENU******\n\n\n\n";
                    SetConsoleTextAttribute(color, 15);
                    //  goto exit;
                case 4:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n";
                    exit(0);
                    break;
            }
            break;
        case 2:
            user.table();
            cout << "\n";
            cout << "\n\n\t\t\t";
            cout << "DO YOU WANT TO UNDERSTAND BP READINGS AND VALUES";
            cout << "\n\t\t\t";
            cout << "1. YES";
            cout << "\n\t\t\t";
            cout << "2. RETURN TO MAIN MENU";
            cout << "\n\t\t\t";
            cout << "3. EXIT";
            cout << "\n\n\t\t\t";
            cout << "ENTER YOUR CHOICE : ";
            int understand_bp_values;
            cin >> understand_bp_values;
            switch (understand_bp_values) {
                case 1:
                    user.facts();
                    cout << "\n\n\n\t\t\t";
                    cout << "1. RETURN TO BP MENU";
                    cout << "\n\t\t\t";
                    cout << "2. RETURN TO MAIN MENU";
                    cout << "\n\t\t\t";
                    cout << "3. EXIT";
                    cout << "\n\n\t\t\t";
                    cout << "ENTER YOUR CHOICE : ";
                    int bpfacts;
                    cin >> bpfacts;
                    switch (bpfacts) {
                        case 1:
                            goto bprerun;
                            break;
                        case 2:
                            cout << "\n\n\n\t\t\t";
                            SetConsoleTextAttribute(color, 14);
                            cout << "   ******MAIN MENU******\n\n\n\n";
                            SetConsoleTextAttribute(color, 15);
                            //  goto exit;
                        case 3:
                            cout << "\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n";
                            exit(0);
                            break;
                    }
                    break;
                case 2:
                    cout << "\n\n\n\t\t\t";
                    SetConsoleTextAttribute(color, 14);
                    cout << "   ******MAIN MENU******\n\n\n\n";
                    SetConsoleTextAttribute(color, 15);
                    //  goto exit;
                case 3:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n";
                    exit(0);
            }
            break;
        case 3:
            user.facts();
            cout << "\n\n\n\t\t\t";
            cout << "1. RETURN TO BP MENU";
            cout << "\n\t\t\t";
            cout << "2. RETURN TO MAIN MENU";
            cout << "\n\t\t\t";
            cout << "3. EXIT";
            cout << "\n\n\t\t\t";
            cout << "ENTER YOUR CHOICE : ";
            int bpfacts;
            cin >> bpfacts;
            switch (bpfacts) {
                case 1:
                    goto bprerun;
                    break;
                case 2:
                    cout << "\n\n\n\t\t\t";
                    SetConsoleTextAttribute(color, 14);
                    cout << "   ******MAIN MENU******\n\n\n\n";
                    SetConsoleTextAttribute(color, 15);
                    //  goto exit;
                case 3:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n";
                    exit(0);
                    break;
            }
        case 4:
            cout << "\n\n\n\t\t\t";
            SetConsoleTextAttribute(color, 14);
            cout << "   ******MAIN MENU******\n\n\n\n";
            SetConsoleTextAttribute(color, 15);
            //  goto exit;
        case 5:
            cout << "\n\t\t\t";
            cout << "THANK YOU\n\n\n\n\n\n";
            exit(0);
    }
}
