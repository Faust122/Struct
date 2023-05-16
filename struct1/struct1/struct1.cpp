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
void printAnimals(const Animal animals[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Name: " << animals[i].name << endl;
        cout << "Class: " << animals[i].clas << endl;
        cout << "Alias: " << animals[i].voice << endl;
        cout << endl;
    }
}
void fillSmoothingIron(Smoothing_iron& obj)
{
    cout << "\tFirma                    ::\t" << getline(cin,obj.firm) << endl;
    cout << "\tModel                    ::\t" << getline(cin, obj.model) << endl;
    cout << "\tColor                    ::\t" << getline(cin, obj.color) << endl;
    cout << "\tMinimal Temperature      ::\t" << cin>>obj.min_temperature << endl;
    cout << "\tMaximum Temperature      ::\t" << cin>> obj.max_temperature << endl;
    cout << "\tSupply Steam             ::\t" << cin>> obj.supply_steam << endl;
    cout << "\tPower                    ::\t" << cin>>obj.power << endl;
}
void fillBoiler(Boiler& obj)
{
    cout << "\tFirma          ::\t" << getline(cin, obj.firm) << endl;
    cout << "\tModel          ::\t" << getline(cin, obj.model) << endl;
    cout << "\tPower          ::\t" << cin >> obj.power << endl;
    cout << "\tVolume         ::\t" << cin >> obj.volume << endl;
    cout << "\tTemperature    ::\t" << cin >> obj.temperature << endl;
}
void fillAnimals(Animals& obj)
{
    cout << "\tName       ::\t" << cin>>obj.name << endl;
    cout << "\tClass      ::\t" << cin>>obj.clas << endl;
    cout << "\tAlias      ::\t" << cin>>obj.voice << endl;
}
void makeSound() {
    cout << "The " << clas << " named " << name << " makes a sound: " << voice << endl;
}

int main()
{
    Animal animals[ANIMALS];

    Animal cat;
    cat.clas = "Cat";
    cat.name = "Tom";
    cat.voice = "Meow";
    animals[0] = cat;

    Animal dog;
    dog.name = "Buddy";
    dog.clas = "Dog";
    dog.voice = "Woof";
    animals[1] = dog;

    Animal pig;
    pig.name = "Porky";
    pig.clas = "Pig";
    pig.voice = "Oink";
    animals[2] = pig;

    Animal horse;
    horse.name = "Spirit";
    horse.clas = "Horse";
    horse.voice = "Neigh";
    animals[3] = horse;

    printAnimals(animals, ANIMALS);

    int choice;
    cout << "Select an animal: " << endl;
    cout << "1. Cat" << endl;
    cout << "2. Dog" << endl;
    cout << "3. Pig" << endl;
    cout << "4. Horse" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        cat.makeSound();
        break;
    case 2:
        dog.makeSound();
        break;
    case 3:
        pig.makeSound();
        break;
    case 4:
        horse.makeSound();
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }    
}

