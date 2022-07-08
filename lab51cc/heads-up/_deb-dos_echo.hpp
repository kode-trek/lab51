/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void echo(bool arg1, ...) {
 /* variable(s)
 [v1] switch
 */
 bool v1 = arg1;
 #ifdef __linux__
 // op(s)
 struct termios tty;
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
}
void echo(void) {
 #ifdef __linux__
 // op(s)
 struct termios tty;
 tcgetattr(STDIN_FILENO, &tty);
 tty.c_lflag |= ECHO;
 (void) tcsetattr(STDIN_FILENO, TCSANOW, &tty);
 #endif
 #ifdef _WIN32
 DWORD mode = true;
 HANDLE hConIn = GetStdHandle(STD_INPUT_HANDLE);
 GetConsoleMode(hConIn, &mode);
 mode | ENABLE_ECHO_INPUT;
 // op(s)
 SetConsoleMode(hConIn, mode);
 #endif
}
