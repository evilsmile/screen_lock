#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

//one hour
const unsigned int work_time = 50 * 60;
const unsigned int rest_time = 10 * 60;

int main()
{
		while(true){
			sleep(work_time);
			system("gnome-screensaver-command -l");

			sleep(rest_time);
			system("gnome-screensaver-command -d");
		}
		
		return 0;
}
