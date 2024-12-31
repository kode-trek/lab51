#include <magic.h>

int main() {
    string filename = "q.cc"; // replace with your filename
    magic_t magic = magic_open(MAGIC_MIME_TYPE);
    if (magic == nullptr) {
        cout << "Failed to initialize libmagic." << endl;
        return 1;
    }
    if (magic_load(magic, nullptr) != 0) {
        cout << "Failed to load magic database." << endl;
        magic_close(magic);
        return 1;
    }
    const char* mime_type = magic_file(magic, filename.c_str());
    if (mime_type != nullptr) {
        cout << "MIME type is: " << mime_type << endl;
    } else {
        cout << "Failed to determine MIME type." << endl;
    }
    magic_close(magic);
    return 0;
}


g++ "/home/kode-trek/Desktop/q.cc" -o "q_1677382448.out" -lmagic -fconcepts -static-libgcc -static-libstdc++ -lstdc++fs -std=c++2a -pthread -I/home/kode-trek/.area51/lab51cc/ -include/home/kode-trek/.area51/lab51cc/heads-up/deb-dos.hh

use -lmagic

also sudo apt-get install libmagic-dev


