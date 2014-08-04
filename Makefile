EXE=lock_screen

$(EXE):lock_screen_per_hour.cpp
	g++ -o $@ $^
