// Last updated: 6/7/2026, 6:29:31 PM
1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4
5        double kelvin = celsius + 273.15;
6        double fahrenheit = celsius * 1.80 + 32.00;
7
8        return {kelvin, fahrenheit};
9    }
10};