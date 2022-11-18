class Solution {
public:
    vector<double> convertTemperature(double c) {
     return { c + 273.15, c * 9 / 5 + 32};    
    }
};