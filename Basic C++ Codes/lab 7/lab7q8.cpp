#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void displayTime() {
        string meridian = (hours < 12) ? "AM" : "PM";
        int displayHours = (hours > 12) ? hours - 12 : hours;
        cout << "Time: " << displayHours << ":";
        if (minutes < 10) {
            cout << "0" << minutes;
        } else {
            cout << minutes;
        }
        if (seconds < 10) {
            cout << ":0" << seconds;
        } else {
            cout << ":" << seconds;
        }
        cout << " " << meridian << endl;
    }
};
int main() {
    int hours, minutes, seconds;
    cout << "Enter the hours: ";
    cin >> hours;
    cout << "Enter the minutes: ";
    cin >> minutes;
    cout << "Enter the seconds: ";
    cin >> seconds;
    Time time(hours, minutes, seconds);
    time.displayTime();
    return 0;
}
