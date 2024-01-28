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
		isOpen = false;
	};
	void lockDoor();

    void unlock() {
        islocked = false;
        cout << "Door is unlocked.\n";
    }

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


};
int main() {


	return 0;
}
