#include <iostream>
#include <string>

using namespace std;

// function to convert distance from one unit to another
double convertDistance(double distance, string fromUnit, string toUnit) {
    double fromFactor, toFactor;

    if (fromUnit == "in" || fromUnit == "inches") {
        fromFactor = 1.0;
    } else if (fromUnit == "ft" || fromUnit == "feet") {
        fromFactor = 12.0;
    } else if (fromUnit == "m" || fromUnit == "meters") {
        fromFactor = 39.3701;
    } else if (fromUnit == "cm" || fromUnit == "centimeters") {
        fromFactor = 0.393701;
    } else {
        return 0;
    }

    if (toUnit == "in" || toUnit == "inches") {
        toFactor = 1.0;
    } else if (toUnit == "ft" || toUnit == "feet") {
        toFactor = 12.0;
    } else if (toUnit == "m" || toUnit == "meters") {
        toFactor = 39.3701;
    } else if (toUnit == "cm" || toUnit == "centimeters") {
        toFactor = 0.393701;
    } else {
        return 0;
    }

    return distance * fromFactor / toFactor;
}

int main() {
    // prompt user to enter distance with units
    cout << "Enter a distance with units (e.g. 10 in): ";
    double distance;
    string fromUnit;
    cin >> distance >> fromUnit;

    // prompt user to enter unit to convert to
    cout << "Enter the unit to convert to (e.g. cm): ";
    string toUnit;
    cin >> toUnit;

    // convert distance and display result
    double convertedDistance = convertDistance(distance, fromUnit, toUnit);
    if (convertedDistance != 0) {
        cout << "Converted distance: " << convertedDistance << endl;
    } else {
        cout << "Invalid units entered." << endl;
    }

    return 0;
}
