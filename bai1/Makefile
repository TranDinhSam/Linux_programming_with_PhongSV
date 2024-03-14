.PHONY: stage1 stage2 stage3 stage3 clean

stage1: 
	g++ -E main.cpp -o main.ii
	g++ -E wpa.cpp -o wpa.ii
stage2:
	g++ -S main.ii -o main.s
	g++ -S wpa.ii -o wpa.s
stage3:
	g++ -c main.s -o main.o
	g++ -c wpa.s -o wpa.o
stage4:
	g++ -o main main.o wpa.o
clean:
	rm -rf *.ii *.s *.o main
