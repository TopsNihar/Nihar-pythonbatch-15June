#include <iostream>
#include <string>
using namespace std;

class cricketer {
protected:
    string name;
    int matches;

public:
    
    cricketer(string n = "", int m = 0) : name(n), matches(m) {}

    void inputCricketerData() {
        cout << "enter cricketer's name: ";
        getline(std::cin, name);
        cout << "enter number of matches: ";
        cin >> matches;
        cin.ignore(); 
    }

    void displayCricketerData()  {
        cout << "name: " << name << endl;
        cout << "matches: " << matches << endl;
    }
};

class batsman : public cricketer {
private:
    int total_runs;
    int average_runs;
    int best_performance;

public:
    batsman(string n = "", int m = 0, int tr = 0, int ar = 0.0, int bp = 0)
        : cricketer(n, m), total_runs(tr), average_runs(ar), best_performance(bp) {}

    void inputBatsmanData() {
        inputCricketerData(); 
        cout << "enter total runs: ";
        cin >> total_runs;
        cout << "enter best performance (runs in a single inning): ";
        cin >> best_performance;
        cin.ignore(); 
        calculateAverageRuns(); 
    }

    void calculateAverageRuns() {
        if (matches > 0) {
            average_runs = static_cast<int>(total_runs) / matches;
        } else {
            average_runs = 0.0;
        }
    }

    void displayBatsmanData()  {
        displayCricketerData(); 
        cout << "total runs: " << total_runs << endl;
        cout << "average runs: " << average_runs << endl;
        cout << "best performance: " << best_performance << endl;
    }
};

int main() {
    batsman player;
    
    player.inputBatsmanData();
    
    player.displayBatsmanData();
    
    return 0;
}
