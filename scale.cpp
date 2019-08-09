/*

Name: Alexis Rodriguez
Date: April 1, 2019
Course: CSCI 136
Assignment: Lab 8 Task E

Program application:
this program will scales an image to 200% its original size. 

*/


#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr >> ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

int main() 
{
	int img[MAX_H][MAX_W];
	int h, w, manip;

	readImage(img, h, w);
	// read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	int out[MAX_H][MAX_W];
	for(int row = 0; row < h*2; row += 2) {
		for(int col = 0; col < w*2; col += 2) {
			manip = img[row/2][col/2];
	// here i am dividing by to creating each row and col twice. 0/2 and 1/2 == 0 while 
	// 2/2 and 3/2 == 1, this means we now have two copies of each row and col!

			out[row+1][col+1] = manip;
			out[row+1][col] = manip;
			out[row][col+1] = manip;
			out[row][col] = manip;
	// here we account for the two extra arrays created and the originals one. 
		}
	// row increases by 2 to skip a row because of the space created by the previous operation.
	}
	// and save this new image to file "outImage.pgm"
	writeImage(out, h*2, w*2);

}
