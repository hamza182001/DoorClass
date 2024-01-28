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
	void closeDoor() {
		isClose = true;
	};
	void lockDoor();
	void unlock();
	bool isDoorOpen() const{
		if(isOpen == true){
			return true;
		}
		else{
           return false;
		}
	};
	bool isDoorLocked() const{
			if(islocked == true){
			return true;
		}
		else{
           return false;
		}
	};

	bool isDoorUnLocked() const {
		if (isunlocked == true) {
			return true;
		}
		else {
			return false;
		}
	};
};
int main() {


	return 0;
}