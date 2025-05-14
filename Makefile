all: run

run: main.cpp edit_distance.cpp spell_checker.cpp optimized.cpp
	g++ main.cpp edit_distance.cpp spell_checker.cpp optimized.cpp -o levenshtein
	./levenshtein
