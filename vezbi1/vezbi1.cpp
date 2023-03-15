#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string first_name = "Petrina";
    string last_name = "Prentoska";
    string index_number = "INKI958";

    string full_name = first_name + " " + last_name;
    string input_string = full_name + index_number;

    vector<int> ascii_codes;
    for (char c : input_string) {
        ascii_codes.push_back(int(c));
    }

    int n = ascii_codes.size();
    bool is_sorted = false;
    while (!is_sorted) {
        is_sorted = true;
        for (int i = 0; i < n - 1; i += 2) {
            if (ascii_codes[i] > ascii_codes[i+1]) {
                swap(ascii_codes[i], ascii_codes[i+1]);
                is_sorted = false;
            }
        }
        for (int i = 1; i < n - 1; i += 2) {
            if (ascii_codes[i] > ascii_codes[i+1]) {
                swap(ascii_codes[i], ascii_codes[i+1]);
                is_sorted = false;
            }
        }
    }

    cout << "Sorted ASCII codes: ";
    for (int code : ascii_codes) {
        cout << code << " ";
    }
    cout << endl;

    return 0;
}