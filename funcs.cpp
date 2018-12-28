#include "./includes.cpp"

class IntFuncs {
public:
    int number;
    int get(string message) {
        cout << message;
        cin >> number;

        return number;
    };
};

class StringFuncs {
public:
    string str;
    string get(string message) {
        cout << message;
        cin >> str;

        return str;
    };
};

IntFuncs num;
StringFuncs str;

int get(string message)
{
    int number;
    
    cout << message;
    cin >> number;

    return number;
}
