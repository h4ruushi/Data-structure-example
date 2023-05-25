#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>

using namespace std;

// Structure Declarations
struct tanong {
    int i;
    string miss; // Instead of char, we used a string data type
    int you;
    int so;
    float much;
};

int main() {
    system ("color 0b");
	char yn;
	bool validation = true;
	cout << "Hello, may itatanong lang sana ako sayo." << endl;

	Sleep(2000);
	cout << "Gusto ko sagutin mo ko ng seryoso, pwede ba?" << endl;
	Sleep(2000);
	cout << "\nYour Answer (Y/N): ";
	cin >> yn;
    cin.ignore();
	cout << endl;

    switch (yn) {
        case 'y': case 'Y':
            cout << "Yown oh, eto tanong ko sayo." << endl;
            break;
			Sleep(2000);
        case 'n': case 'N':
            cout << "Ayy, sige kung yan gusto mo, ok lang.";
            Sleep(3000);
            return 0; 
        default:
            cout << "Tinatanong kita ng maayos, bat kaba ganyan?";
            Sleep(3000);
            return 0;
    }
	cout << "\n\n--------------------------------------------------\n\n";

    tanong t;

    // Dating chances question (i)
    cout << "On a scale of 1-4, what are the chances of us dating?: ";
    cin >> t.i;
    cin.ignore();
    cout << endl;

    switch (t.i) {
        case 1:
            cout << "Your Answer: Not likely." << endl;
			cout << "\nAng sakit mo naman";
			Sleep(5000);
            return 0;
        case 2:
            cout << "Your Answer: There's a slight chance." << endl;
			cout << "\nSakit naman, slight lang talaga?";
			Sleep(2000);
            break;
        case 3:
            cout << "Your Answer: 50/50."<< endl;
			cout << "\nSure ka ba dyan?";
			Sleep(2000);
            break;
        case 4:
            cout << "Your Answer: Of course we should date uwu."<< endl;
			cout << "\nNubayan keleg naman aku uwu.";
			Sleep(2000);
            break;
        default:
            cout << "Answer properly. Seryosohin mo naman ako pls."<< endl;
			Sleep(5000);
            return 0;
    }
    cout << "\n\n";
	Sleep(2000);

    // Do you like me question (miss)
    cout << "--------------------------------------------------\n\n";

	cout << "Do you like me by any chance? (Y/N): ";
    cin >> t.miss; // changed from cin.ignore() >> t.miss;
    cout << endl;
    
    switch (t.miss[0]) { // Here we used a switch case statement rather than if-else statements
    case 'y': case 'Y':
        cout << "Your Answer: Yes!!\n\n";
        Sleep(2000);
        cout << "Wehh di nga.";
        Sleep(2000);
        break; // added break
    case 'n': case 'N':
        cout << "Your Answer: I'm sorry, no." << endl;
        Sleep(2000);
        cout << "\nAwts, ok lang.";
        Sleep(5000);
        return 0;
    default:
        cout << "Y/N is the only choice, wag kang ano ha." << endl;
        }

	Sleep(2000);
    cout << "\n\n--------------------------------------------------\n\n";

    // Most likable part question (you)
    cout << "If I were to ask you, what part of me is the most likable?" << endl;
    cout << "1. My hair\n2. My voice\n3. My personality\n4. Me in general\n\nWhat's your answer?: ";
    cin >> t.you;
    cin.ignore();
    cout << endl;
    do
    {
		switch (t.you) {
        case 1:
            cout << "Answer: Your hair.";
            break;
        case 2:
            cout << "Answer: Your voice.";
            break;
        case 3:
            cout << "Answer: Your personality.";
            break;
        case 4:
            cout << "Answer: You in general uwu.";
            break;
    }
        validation = true;
        if(t.you < 1 || t.you > 4)
        {
			cout << "1-4 nga lang ang kulit neto. Enter again: " << endl;
            t.you = 0;
            cin >> t.you;
            validation = false;
            continue;
        }
    } while(!validation);
	Sleep(2000);
    cout << "\n\n--------------------------------------------------\n\n";

    // Chemistry Rate question (so)
    cout << "On a scale of 1-10, do you think our chemistry will be nice?\n\n"; 
	cout << "Your Answer: "; 
	cin >> t.so;
	cin.ignore();
	cout << endl;
	
	if (t.so < 1 || t.so > 10) {
        cout << "1-10 only, kaya di ka minamahal eh." << endl;
	} 
	else {
		cout << "\n\nTalaga lang ha.";
		}
		Sleep(2000);
		cout << "\n\n--------------------------------------------------\n\n";

    // Overall rating question (much)
    cout << "On a scale of 1-100, what would you rate me overall? ";
    cin >> t.much;

	if (t.much < 1 || t.much > 100) {
        cout << "\n1-100 lang, kanina ka pa ah" << endl;
		Sleep(5000);
		}
    else {
		cout << "\nSalamat sa pagsagot idol hehe." << endl;
		Sleep(5000);
		}
}