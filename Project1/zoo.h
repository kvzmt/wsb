#include <iostream>
#include <conio.h>
#include <vector>
#include <cstdlib>
using namespace std;

class Animal;

extern std::vector<Animal*> animals;

void menu();



class Animal {
protected:
	string name;
	string race;
public:
	Animal()
	{
		;
	}
	virtual ~Animal()
	{
		;
	}

	virtual void SoundOfAnimal() = 0;
	virtual void Print() = 0;
	virtual void getInfo() = 0;
	
	
	

};

class Dog : public Animal {
private:

public:
	Dog(string i, string race)
	{
		name = i;
		this->name = i;
		this->race = race;

		cout << "Jestem Psem o imieniu " << this->name << endl;
	}
	virtual ~Dog()
	{
		cout << "Zoo zamknięte, żegam." << endl;
	}

	 void SoundOfAnimal()
	{
		cout << "Hau Hau!" << endl;
	}
	 void Print()
	 {
			cout << "	 ░▄▀▄▀▀▀▀▄▀▄░░░░░░░░░" << endl;
			cout << "	 ░█░░░░░░░░▀▄░░░░░░▄░" << endl;
			cout << "	 █░░▀░░▀░░░░░▀▄▄░░█░█" << endl;
			cout << "	 █░▄░█▀░▄░░░░░░░▀▀░░█" << endl;
			cout << "	 █░░▀▀▀▀░░░░░░░░░░░░█" << endl;
			cout << "	 █░░░░░░░░░░░░░░░░░░█" << endl;
			cout << "	 █░░░░░░░░░░░░░░░░░░█" << endl;
			cout << "	 ░█░░▄▄░░▄▄▄▄░░▄▄░░█░" << endl;
			cout << "	 ░█░▄▀█░▄▀░░█░▄▀█░▄▀░" << endl;
			cout << "	 ░░▀░░░▀░░░░░▀░░░▀░░░" << endl;


	 }
	 void getInfo()
	 {
		 cout << "Jestem zwierzakiem rasy " << this->race <<  " o imieniu " << this->name << endl;
	 }

	
};

class Cat : public Animal {
private:
	
public:
	Cat(string i, string race)
	{
		name = i;
		this->name = i;

		cout << "Jestem Kotem o imieniu " << this->name << endl;
	}
	virtual ~Cat()
	{
		cout << "Zoo zamknięte, żegam." << endl;
	}

	 void SoundOfAnimal ()
	{
		cout << "Miau Miau!" << endl;
	}
	 void Print()
	 {
		 {
			 cout << "	░░░░░░░░░░░░░░░░░░░░░▄▀░░▌" << endl;
			 cout << "	░░░░░░░░░░░░░░░░░░░▄▀▐░░░▌" << endl;
			 cout << "	░░░░░░░░░░░░░░░░▄▀▀▒▐▒░░░▌" << endl;
			 cout << "	░░░░░▄▀▀▄░░░▄▄▀▀▒▒▒▒▌▒▒░░▌" << endl;
			 cout << "	░░░░▐▒░░░▀▄▀▒▒▒▒▒▒▒▒▒▒▒▒▒█" << endl;
			 cout << "	░░░░▌▒░░░░▒▀▄▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄" << endl;
			 cout << "	░░░░▐▒░░░░░▒▒▒▒▒▒▒▒▒▌▒▐▒▒▒▒▒▀▄" << endl;
			 cout << "	░░░░▌▀▄░░▒▒▒▒▒▒▒▒▐▒▒▒▌▒▌▒▄▄▒▒▐" << endl;
			 cout << "	░░░▌▌▒▒▀▒▒▒▒▒▒▒▒▒▒▐▒▒▒▒▒█▄█▌▒▒▌" << endl;
			 cout << "	░▄▀▒▐▒▒▒▒▒▒▒▒▒▒▒▄▀█▌▒▒▒▒▒▀▀▒▒▐░░░▄" << endl;
			 cout << "	▀▒▒▒▒▌▒▒▒▒▒▒▒▄▒▐███▌▄▒▒▒▒▒▒▒▄▀▀▀▀" << endl;
			 cout << "	▒▒▒▒▒▐▒▒▒▒▒▄▀▒▒▒▀▀▀▒▒▒▒▄█▀░░▒▌▀▀▄▄" << endl;
			 cout << "	▒▒▒▒▒▒█▒▄▄▀▒▒▒▒▒▒▒▒▒▒▒░░▐▒▀▄▀▄░░░░▀" << endl;
			 cout << "	▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▄▒▒▒▒▄▀▒▒▒▌░░▀▄" << endl;
			 cout << "	▒▒▒▒▒▒▒▒▀▄▒▒▒▒▒▒▒▒▀▀▀▀▒▒▒▄▀" << endl;
		 }
	 }

	 void getInfo()
	 {
		 cout << "Jestem zwierzakiem rasy " << this->race << " o imieniu " << this->name << endl;
	 }
};

class Elephant :public Animal 
{
private:

public:
	Elephant(string i, string race)
	{
		name = i;
		this->name = i;

		cout << "Jestem Sloniem o imieniu " << this->name << endl;
	}
	virtual ~Elephant()
	{
		cout << "Zoo zamknięte, żegam." << endl;
	}

	 void SoundOfAnimal()
	{
		cout << "Duuuu!!!" << endl;
	}
	 void Print()
	 {
				cout << " ░░▒░░█░" << endl;
				cout << " ░░▒░█"<< endl;
				cout << " ░░░█"<< endl;
				cout << " ░░█░░░░███████"<< endl;
				cout << " ░██░░░██▓▓███▓██▒"<< endl;
				cout << " ██░░░█▓▓▓▓▓▓▓█▓███"<< endl;
				cout << " ██░░██▓▓▓(◐)▓█▓▓█▓█"<< endl;
				cout << " ███▓▓▓█▓▓▓▓▓█▓█▓▓▓▓█"<< endl;
				cout << " ▀██▓▓█░██▓▓▓▓██▓▓▓▓▓█"<< endl;
				cout << " ░▀██▀░░█▓▓▓▓▓▓▓▓▓▓▓▓▓█"<< endl;
				cout << " ░░░░▒░░░█▓▓▓▓▓█▓▓▓▓▓▓█"<< endl;
				cout << " ░░░░▒░░░█▓▓▓▓█▓█▓▓▓▓▓█"<< endl;
				cout << " ░▒░░▒░░░█▓▓▓█▓▓▓█▓▓▓▓█"<< endl;
				cout << " ░▒░░▒░░░█▓▓▓█░░░█▓▓▓█"<< endl;
				cout << " ░▒░░▒░░██▓██░░░██▓▓██"<< endl;
	 }

	 void getInfo()
	 {
		 cout << "Jestem zwierzakiem rasy " << this->race << "o imieniu " << this->name << endl;
	 }
};