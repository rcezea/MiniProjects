#include <iostream>
using namespace std;

int main() {
    // get initial room temperature and ventilated air temperature from user
    double initialTemp, ventilatedTemperature;
    cout << "Initial room temperature: ";
    cin >> initialTemp;
    cout << "Ventilated air temperature: ";
    cin >> ventilatedTemperature;
    // set ventilated air to constant so it never changes
    const double ventilatedTemp = ventilatedTemperature;

    // set the time to zero and the room temperature to the initial temperature
    int time = 0;
    double roomTemp = initialTemp;

    // infinite loop until break statement
    while (true) {
        // after 5 minutes, the temperature will be the average of the current temperature and the ventilated temperature
        if (time % 5 == 0) {
            double avgTemp = (roomTemp + ventilatedTemp) / 2.0;
            roomTemp = avgTemp;
        }
        // since we are checking in 5 minute intervals, we'll have the time jump 5 minutes
        time += 5;

        // check if room temperature is within 1 degree of ventilated air
        if (int(roomTemp) == ventilatedTemp - 1 || int(roomTemp) == ventilatedTemp) {
            break;
        }
    }

    // output the time it took to reach the ventilated temperature within one degree
    cout << "Time until temperature equalized: " << time << endl;

    return 0;
}
