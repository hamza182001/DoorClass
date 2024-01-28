#include<iostream>
using namespace std;

class Door {
private:
	bool isOpen;
	bool islocked;
public:
	Door();
	void openDoor() {
		isOpen = true;
	};
	void closeDoor(){
    isOpen=false;
  };

	void lockDoor();
	void unlock();
	bool isDoorOpen() const{
		    return isDoorOpen;
	};
	bool isDoorLocked() const{
		return isDoorLocked;
	};


};
int main() {


	return 0;
}