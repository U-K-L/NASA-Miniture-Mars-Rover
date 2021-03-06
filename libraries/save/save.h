#pragma once
#include <SPI.h>
#include <SD.h>
#include <Arduino.h>
#include <kalmanFilter.h>

class save {
public:
	File file;
	void setup();
	void loop();
	void writeFile(char *str);
	void closeFile();
	void openFile(char *str);
	void saveToFile(char*str);
	void saveToFileln(char*str);
	void saveToFile(float);
	void saveToFileln(float);
	void removeFile(char*str);
	void loadMap(char *str, char roverMap[64][64], float*lat, float*lon, int*zoom);
	int processString(String procString, float *value, int indexS);
	void loadCalibrationData(Adafruit_BNO055 &bno);
	void saveCalibrationData(adafruit_bno055_offsets_t &calibData);
	void write_STRUCT(char *filename, adafruit_bno055_offsets_t &calibData);
	void read_STRUCT(char *filename, adafruit_bno055_offsets_t &calibData); 
};