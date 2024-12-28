// leaning constructor
#include <bits/stdc++.h>
using namespace std;
class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    Chai(string chaie, int serv, vector<string> ingre)
    {
        teaName = chaie;
        servings = serv;
        ingredients = ingre;
        cout << "Constructor called" << endl;
    }

    ~Chai()
    {
        cout << "Destructor called" << endl;
    }

    void displaychai()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Tea Serving: " << servings << endl;
        cout << "Ingredients: " << endl;
        for (auto i : ingredients)
        {
            cout << " " << i << endl;
        }
    }
};

int main()
{

    Chai blackTea("Black Tea", 1, {"water", "sugar", "tea"});

    // blackTea.displaychai();

    //copy the object
    // Chai chaiTwo = blackTea;
    Chai chaiTwo(blackTea);

    chaiTwo.displaychai();

    return 0;
}