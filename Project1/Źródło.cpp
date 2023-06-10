#include "zoo.h"

using namespace std;
std::vector<Animal*> animals;

/// 1-pies
/// 2-kot
/// 3-slon
///4 - wszystkie

int main()
{
    char input;
    cout << "WITAJ W TOWIM WŁASNYM ZOO" << endl;
    cout << "Możesz adoptować nowe zwierze lub sprawdzić już adoptowane!" << endl;
    do
    {
        menu();
        string i;
        Animal* pet;

        input = _getch();
        switch (input)
        {
        case '1':
        {
            system("cls");
            cout << "Nazwij swojego psa!" << endl;
            cout << endl; 
            cout << endl; 
            cin >> i;
            pet = new Dog(i,"Pies");
            pet->SoundOfAnimal();
            cout << endl;
            cout << endl; 
            
            animals.push_back(pet);
            pet->Print();
            break;
            
        }
        case '2':
        {
            system("cls");
            cout << "Nazwij swojego Kota!" << endl;
            cout << endl;
            cout << endl;
            cin >> i;
            pet = new Cat(i,"Kot");
            pet->SoundOfAnimal();
            cout << endl;
            cout << endl; ;
            animals.push_back(pet);
            pet->Print();

            break;
        }
        case '3':
        {
            system("cls");
            cout << "Nazwij swojego Słonia!" << endl;
            cout << endl;
            cout << endl;
            cin >> i;
            pet = new Elephant(i,"Slon");
            pet->SoundOfAnimal();
            cout << endl;
            cout << endl; ;
            animals.push_back(pet);
            pet->Print();

            break;
        }
        case '4':
        {
            system("cls");
            for (size_t i = 0; i < animals.size(); i++) {
                Animal* animal = animals[i];
                animal->Print();
                animal->SoundOfAnimal();
                animal->getInfo();
            }

            break;
        }
        default:
            ;
        }

      
    } while (input != 27);
}
