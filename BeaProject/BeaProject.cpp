
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Bee{
public:
	string name;
	int health;
	int HonColl;

	Bee(string beeName):name(beeName),HonColl(0){}
};


void collHon() {
	int honAmount = rand() % 25 + 12;
	int honColl = honAmount;
	cout << name << "collected" << honAmount << "honey";
}
void fly() {
	health -= rand() % 12 + 7;
	if (health <= 0) {
		cout << "this bee is cannot fly anymore";
	}
	else {
		cout << name << "this bee is can fly and collect honey";
	}
}
class QueenOfBee :public Bee {
public:
	QueenOfBee(string BeeName) :Bee(BeeName) {}
};
class WorkerBee :public Bee {
public:
	WorkerBee(string BeeName):Bee(BeeName){}
};
class DroneBee :public Bee
{
	DroneBee(string BeeName) :Bee(BeeName) {}
};
class NurseBee :public Bee {
public:
	NurseBee(string BeeName):Bee(BeeName){}
};

class Beehive {
private:
	vector <Bee*> bees;
public:
	void addBee(Bee* newBee) {
		bees.push_back(newBee);
	}
};

void collHon() {
	for (Bee* bee : bees) {
		bee->collHon();
	}
}

int main()
{
  
}
