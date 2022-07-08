#include <iostream>
#include <windows.h>
#include <fstream>
#include <filesystem>

using namespace std;

int main() {
	ofstream out(std::filesystem::path(u8"فارسی"));
	out << "پارسی را پاس بداریم";
	out.close();
}














