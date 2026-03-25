#include <iostream>
#include <string>

using namespace std;

int main() {
    string team1, team2;
    int team1Runs = 0;
    int team1Wickets = 0;
    int team2Runs = 0;
    int team2Wickets = 0;
    
    cout << "Enter Team 1 name: ";
    cin >> team1;
    cout << "Enter Team 2 name: ";
    cin >> team2;
    
    int numEvents;
    cout << "Enter total number of balls for the whole match: ";
    cin >> numEvents;
    
    int innings[300];
    double overs[300];
    string events[300];
    
    for (int i = 0; i < numEvents; i++) {
        cout << "Enter innings (1 or 2): ";
        cin >> innings[i];
        
        cout << "Enter over: ";
        cin >> overs[i];
        
        cout << "Enter event (run, wicket, four, six, dot): ";
        cin >> events[i];
        
        if (innings[i] == 1) {
            if (events[i] == "run") {
                team1Runs += 1;
            } else if (events[i] == "four") {
                team1Runs += 4;
            } else if (events[i] == "six") {
                team1Runs += 6;
            } else if (events[i] == "wicket") {
                team1Wickets += 1;
            }
        } else if (innings[i] == 2) {
            if (events[i] == "run") {
                team2Runs += 1;
            } else if (events[i] == "four") {
                team2Runs += 4;
            } else if (events[i] == "six") {
                team2Runs += 6;
            } else if (events[i] == "wicket") {
                team2Wickets += 1;
            }
        }
    }
    
    cout << "\nMatch Summary\n";
    cout << team1 << ": " << team1Runs << "/" << team1Wickets << endl;
    cout << team2 << ": " << team2Runs << "/" << team2Wickets << endl;
    cout << "\n";
    
    cout << "Highlights\n";
    for (int i = 0; i < numEvents; i++) {
        cout << "Inn " << innings[i] << " Over " << overs[i] << " - " << events[i] << endl;
    }
    
    cout << "\nKey Moments\n";
    for (int i = 0; i < numEvents; i++) {
        if (events[i] == "six" || events[i] == "four" || events[i] == "wicket") {
            cout << "Inn " << innings[i] << " Over " << overs[i] << ": " << events[i] << endl;
        }
    }
    
    return 0;
}