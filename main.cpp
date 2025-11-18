#include <iostream>
using namespace std;

int main() {
    /*string domain;
    while (1) {
        cout << "\nDomain name: ";
        getline(cin, domain);
        domain = "nslookup" + domain;
        system(domain.c_str());
    }*///Sayt IP manzilini aniqlash
    int grade[] = {80, 70, 90, 85};
    for (int i = 0; i < 4; i++) {
        cout << grade[i] << " " << endl;
    } cout << "Reverse" << endl;
    for (int i = 3; i >= 0; --i) {
        cout << grade[i] << " " << endl;
    }

}