#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

//one hour
const unsigned int lock_time = 60 * 60;

int main()
{
		while(true){
			sleep(lock_time);

			system("gnome-screensaver-command -l");
		}
		
		return 0;
}
