#include<iostream>
using namespace std;

class Door {
private:
	bool isOpen;
	bool islocked;
public:
	Door();
	void openDoor();
	void closeDoor() {
		isOpen = false;
	};
	void lockDoor();
	void unlock();
	bool isDoorOpen() const;
	bool isDoorLocked() const;


};
int main() {


	return 0;
}