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
SetConsoleTextAttribute(color, 15);
        if (sys <= 120 && dia <= 80) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS ";
            SetConsoleTextAttribute(color, 2);
            cout << "NORMAL RANGE";
            SetConsoleTextAttribute(color, 15);
            cout << endl;
        } else if (sys <= 129 && dia < 80) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS ";
            SetConsoleTextAttribute(color, 6);
            cout << "ELEVATED";
            SetConsoleTextAttribute(color, 15);
            cout << endl;
        } else if (sys <= 139 || dia <= 89) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS ";
            SetConsoleTextAttribute(color, 14);
            cout << "HIGH (HYPERTENSION STAGE 1)";
            SetConsoleTextAttribute(color, 15);
            cout << endl;
        } else if (sys <= 179 || dia <= 119) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS ";
            SetConsoleTextAttribute(color, 4);
            cout << "HIGH (HYPERTENSION STAGE 2)";
            SetConsoleTextAttribute(color, 15);
            cout << endl;
        } else if (sys >= 180 && dia >= 120) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS ";
            SetConsoleTextAttribute(color, 12);
            cout << "VERY HIGH";
            SetConsoleTextAttribute(color, 15);
            cout << endl;
        }
      }

    void table() {
 cout << "\n\n\t\t\t\t\t\t";
        SetConsoleTextAttribute(color, 14);
        cout << "          BP REFERENCE TABLE";
        SetConsoleTextAttribute(color, 15);
        cout << "\n\n\t\t\t";
        cout << "BLOOD PRESSURE CATEGORY" << "\t\t" << "SYSTOLIC (upper number)" << "\t\t" << "DIASTOLIC (lower number)"
             << endl << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 2);
        cout << "1. NORMAL       " << "\t\t" << "    LESS THAN 120 " << "\t" << " -AND-" << "        LOWER THAN 80"
             << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 6);
        cout << "2. ELEVATED     " << "\t\t" << "      120 - 129 " << "\t" << " -AND-" << "        LESS THAN 80"
             << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 14);
        cout << "3. HIGH BLOOD PRESSURE" << "\t\t" << "      130 - 139 " << "\t" << "  -OR-" << "           80 - 89"
             << endl;
        cout << "\t\t\t";
        cout << "   (HYPERTENSION) STAGE1";
        cout << "\n\n\n\t\t\t";
        SetConsoleTextAttribute(color, 4);
        cout << "4. HIGH BLOOD PRESSURE" << "\t\t" << "    140 OR HIGHER " << "\t" << "  -OR-"
             << "         90 OR HIGHER"
             << endl;
        cout << "\t\t\t";
        SetConsoleTextAttribute(color, 4);
        cout << "   (HYPERTENSION) STAGE2";
        cout << "\n\n\n\t\t\t";
        SetConsoleTextAttribute(color, 12);
        cout << "5. HYPERTENSIVE CRISIS" << "\t\t" << "   HIGHER THAN 180" << "\t" << "-AND/OR-"
             << "     HIGHER THAN 120"
             << endl;
        SetConsoleTextAttribute(color, 12);
        cout << "\t\t\t";
        cout << "   (consult you doctor\n\t\t\t    immediately)";
        SetConsoleTextAttribute(color, 15);
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
