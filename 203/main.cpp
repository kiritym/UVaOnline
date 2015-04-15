#include<iostream>

#define MAXSIZE 1000
using namespace std;

int main(int argc, char *argv[]){
	char len[MAXSIZE];
	int numOfInputs, time = 0, currentTime; 
	int hour, min, sec, speed=0, newSpeed;
	double distance=0;

	while (cin.getline(len, sizeof(len))){
		numOfInputs = sscanf(buffer, "%d:%d:%d %d", &hour, &min, &sec, &newSpeed);
		currentTime = hour * 3600 + min * 60 + sec;

		distance += (currentTime - time) * speed;
		time = currentTime;
		
		if (numOfInputs == 3)
			printf("%02d:%02d:%02d %.2lf km\n", hour, min, sec, distance/3600);
		else if (numOfInputs == 4)
			speed = newSpeed;
	}

	return 0;
}
