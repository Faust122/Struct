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
    string alias;
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
void printAnimals(Animals obj)
{
    cout << "\tName       ::\t" << obj.name << endl;
    cout << "\tClass      ::\t" << obj.clas << endl;
    cout << "\tAlias      ::\t" << obj.alias << endl;
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
    cout << "\tAlias      ::\t" << cin>>obj.alias << endl;
}
int main()
{
   
}

