#include <iostream>
#include <string>

using namespace std;

struct Smoothing_iron
{
    string firm;
    string model;
    string color;
    float min_temperature;
    float max_temperature;
    string supply_steam;
    float power;
};
struct Boiler
{
    string firm;
    string model;
    float power;
    int volume;
    float temperature;
};

struct Animals
{
    string name;
    string clas;
    string voice;

    void makeSound() {
        cout << "The " << clas << " named " << name << " makes a sound: " << voice << endl;
    }
};
void printSmoothing_iron(Smoothing_iron obj)
{
    cout << "\tFirma                 ::\t" << obj.firm << endl;
    cout << "\tModel                 ::\t" << obj.model << endl;
    cout << "\tColor                 ::\t" << obj.color << endl;
    cout << "\tMinimal Temperature   ::\t" << obj.min_temperature << endl;
    cout << "\tMaximum Temperature   ::\t" << obj.max_temperature << endl;
    cout << "\tSupply Steam          ::\t" << obj.supply_steam << endl;
    cout << "\tPower                 ::\t" << obj.power << endl;
}
void printBoiler(Boiler obj)
{
    cout << "\tFirma            ::\t" << obj.firm << endl;
    cout << "\tModel            ::\t" << obj.model << endl;
    cout << "\tPower            ::\t" << obj.power << endl;
    cout << "\tVolume           ::\t" << obj.volume << endl;
    cout << "\tTemperature      ::\t" << obj.temperature << endl;
}
void printAnimals(const Animals animals[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Name: " << animals[i].name << endl;
        cout << "Class: " << animals[i].clas << endl;
        cout << "Voice: " << animals[i].voice << endl;
        cout << endl;
    }
}
void fillSmoothingIron(Smoothing_iron& obj)
{
    cout << "\tFirma                    ::\t"; getline(cin, obj.firm);
    cout << "\tModel                    ::\t"; getline(cin, obj.model);
    cout << "\tColor                    ::\t"; getline(cin, obj.color);
    cout << "\tMinimal Temperature      ::\t"; cin >> obj.min_temperature;
    cout << "\tMaximum Temperature      ::\t"; cin >> obj.max_temperature;
    cout << "\tSupply Steam             ::\t"; cin >> obj.supply_steam;
    cout << "\tPower                    ::\t"; cin >> obj.power;
}
void fillBoiler(Boiler& obj)
{
    cout << "\tFirma          ::\t"; getline(cin, obj.firm);
    cout << "\tModel          ::\t"; getline(cin, obj.model);
    cout << "\tPower          ::\t"; cin >> obj.power;
    cout << "\tVolume         ::\t"; cin >> obj.volume;
    cout << "\tTemperature    ::\t"; cin >> obj.temperature;
}

int main()
{
    Smoothing_iron iron;
    fillSmoothingIron(iron);
    printSmoothing_iron(iron);
    cout << "_______________________________\n";
    Boiler boiler;
    fillBoiler(boiler);
    printBoiler(boiler);
    cout << "_______________________________\n";
    const int ANIMALS = 4;
    Animals animals[ANIMALS] = {
        {"Cat", "Tom", "Meow"},
        {"Dog", "Buddy", "Woof"},
        {"Pig", "Porky", "Oink"},
        {"Horse", "Spirit", "Neigh"}
    };
    printAnimals(animals, ANIMALS);
    int choice;
    do {
        system("cls");

        cout << "Select an animal: " << endl;
        cout << "1. Cat" << endl;
        cout << "2. Dog" << endl;
        cout << "3. Pig" << endl;
        cout << "4. Horse" << endl;
        cout << "0. Exit" << endl;
        cin >> choice;


        switch (choice) {
        case 1:
            animals[0].makeSound();
            break;
        case 2:
            animals[1].makeSound();
            break;
        case 3:
            animals[2].makeSound();
            break;
        case 4:
            animals[3].makeSound();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }

        cout << endl;
        system("pause");
    } while (choice != 0);
}


