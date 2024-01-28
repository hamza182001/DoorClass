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
	void closeDoor();
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
	bool isDoorLocked() const;


};
int main() {


	return 0;
}