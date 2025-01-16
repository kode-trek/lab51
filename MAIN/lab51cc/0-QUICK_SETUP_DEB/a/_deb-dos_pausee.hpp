/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool pausee(bool arg1, ...) {
 /* variable(s)
 [v1] input CIN>>
 */
 bool v1 = arg1;
 // op(s)
 note("Press ");
 note("ENTER ", "blue");
 note("to CONTINUE..");
 cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
 if (arg1) cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
 return false;
}

bool pausee(void) {
 note("Press "); note("ENTER ", "blue"); note("to CONTINUE..");
 cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
 return false;
}
