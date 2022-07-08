/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
string ts(bool arg1, ...) {
 /* variable(s)
 [v1] now
 [v2] local-time
 [v3] date & time
 [v4] human-readable
 */
 time_t v1 = time(NULL);
 tm *v2 = localtime(&v1);
 string v3 =
 "Date(" + str(1900 + v2->tm_year) +
 "-" + str(1 + v2->tm_mon) +
 "-" + str(v2->tm_mday) + ")_" +
 "Time(" + str(0 + v2->tm_hour) +
 "h" + str(0 + v2->tm_min) +
 "m" + str(0 + v2->tm_sec) + "s)";
 bool v4 = arg1;
 // op(s)
 if (v4) return v3;
 return str(v1);
}
string ts(void) {return str(time(NULL));}
