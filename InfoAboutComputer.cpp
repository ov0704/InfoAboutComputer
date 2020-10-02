#include <iostream>

using namespace std;

class ViewParameters {
public:
	void ConfigComp() { // Метод показа конфигурации компьютера
		system("wmic COMPUTERSYSTEM get TotalPhysicalMemory,caption");
		system("wmic diskdrive get name,size,model");
		system("wmic volume WHERE DriveType=3 list brief");
		system("wmic cpu get name, maxclockspeed");
		system("wmic MEMORYCHIP get banklabel, capacity, caption, devicelocator, partnumber");
	}

	void ConfigInternet() { // Метод показа состояния интернета
		system("netsh wlan show profiles");
	}

};



	int main() {
		system("color 1B");

		ViewParameters *viewparameters = new ViewParameters;
		viewparameters->ConfigComp();
		viewparameters->ConfigInternet();
		
		system("pause");
		return 0;
	}