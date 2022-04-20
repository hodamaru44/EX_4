#include <iostream>
#include "getVolumeSurface.h"
using namespace std;
int main() {
	double width, height, depth;
	cout << "幅を入力:";
	cin >> width;
	cout << "高さを入力:";
	cin >> height;
	cout << "奥行を入力:";
	cin >> depth;
	double volume, surface;
	getVolumeSurface(width, height, depth, &surface,&volume);
	cout << "体積は" << volume << endl << "表面積は" << surface << endl;
	return 0;
}

