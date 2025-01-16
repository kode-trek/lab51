/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool echo(bool arg1, ...) {
 /* variable(s)
 [v1] switch
 */
 bool v1 = arg1;
 #ifdef __linux__
 struct termios tty;
 // op(s)
 tcgetattr(STDIN_FILENO, &tty);
 if (not v1) {tty.c_lflag &= ~ECHO;} else {tty.c_lflag |= ECHO;}
 (void) tcsetattr(STDIN_FILENO, TCSANOW, &tty);
 #endif
 #ifdef _WIN32
 DWORD mode;
 HANDLE hConIn = GetStdHandle(STD_INPUT_HANDLE);
 GetConsoleMode(hConIn, &mode);
 mode = v1 ? (mode | ENABLE_ECHO_INPUT) : (mode & ~(ENABLE_ECHO_INPUT));
 // op(s)
 SetConsoleMode(hConIn, mode);
 #endif
 return false;
}

bool echo(void) {
 #ifdef __linux__
 struct termios tty;
 // op(s)
 tcgetattr(STDIN_FILENO, &tty);
 tty.c_lflag |= ECHO;
 (void) tcsetattr(STDIN_FILENO, TCSANOW, &tty);
 #endif
 #ifdef _WIN32
// DWORD  mode = true;
 DWORD mode;
 HANDLE hConIn = GetStdHandle(STD_INPUT_HANDLE);
 GetConsoleMode(hConIn, &mode);
 // op(s)
 SetConsoleMode(hConIn, ENABLE_ECHO_INPUT);
 #endif
 return false;
}
