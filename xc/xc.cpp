#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {

    string zdanie;

    map <char, int> mapazd;

    getline(cin, zdanie);

    for (char cha : zdanie)
    {
        if (isalpha(cha))
        {
            char lowercha = tolower(cha);
            mapazd[lowercha]++;

        }

    }

    for (auto para : mapazd)
    {
        cout << "litera: " << para.first << " wystepuje " << para.second << " razy" << endl;

    }



    pair <char, int> najlit;

    for (auto para : mapazd)
    {
        if (para.second > najlit.second)
        {
            najlit = para;

        }

    }

    cout << endl << endl << "najczestsza litera to " << najlit.first << " a wystapila ona" << najlit.second << " razy";

    cout << endl << "liczba unikatowych liter to " << mapazd.size();
    return 0;
}