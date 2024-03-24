/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string ts(bool arg1, ...) {
 /* variable(s)
 [v1] now
 [v2] local-time
 [v3] date & time
 [arg1] human-readable
 */
 time_t v1 = time(NULL);
 tm *v2 = localtime(&v1);
 string v3 = "";
 #ifdef __linux__
 v3 = str(1900 + v2->tm_year);
 if ((1 + v2->tm_mon) <= 9) v3 += "-0" + str(1 + v2->tm_mon);
 if ((1 + v2->tm_mon) > 9) v3 += "-" + str(1 + v2->tm_mon);
 if (v2->tm_mday <= 9) v3 += "-0" + str(v2->tm_mday);
 if (v2->tm_mday > 9) v3 += "-" + str(v2->tm_mday);
 v3 += "--";
 if (v2->tm_hour <= 9) v3 += "0" + str(v2->tm_hour);
 if (v2->tm_hour > 9) v3 += str(v2->tm_hour);
 if ((0 + v2->tm_min) <= 9) v3 += ":0" + str(0 + v2->tm_min);
 if ((0 + v2->tm_min) > 9) v3 += ":" + str(0 + v2->tm_min);
 if ((0 + v2->tm_sec) <= 9) v3 += ":0" + str(0 + v2->tm_sec);
 if ((0 + v2->tm_sec) > 9) v3 += ":" + str(0 + v2->tm_sec);
 v3 += str(v2->tm_zone);
 #endif
 #ifdef _WIN32
 v3 = str(1900 + v2->tm_year);
 if ((1 + v2->tm_mon) <= 9) v3 += "-0" + str(1 + v2->tm_mon);
 if ((1 + v2->tm_mon) > 9) v3 += "-" + str(1 + v2->tm_mon);
 if (v2->tm_mday <= 9) v3 += "-0" + str(v2->tm_mday);
 if (v2->tm_mday > 9) v3 += "-" + str(v2->tm_mday);
 v3 += "--";
 if (v2->tm_hour <= 9) v3 += "0" + str(v2->tm_hour);
 if (v2->tm_hour > 9) v3 += str(v2->tm_hour);
 if ((0 + v2->tm_min) <= 9) v3 += "-0" + str(0 + v2->tm_min);
 if ((0 + v2->tm_min) > 9) v3 += "-" + str(0 + v2->tm_min);
 if ((0 + v2->tm_sec) <= 9) v3 += "-0" + str(0 + v2->tm_sec);
 if ((0 + v2->tm_sec) > 9) v3 += "-" + str(0 + v2->tm_sec);
 #endif
 // op(s)
 if (arg1) return v3;
 return str(v1);
}

string ts(void) {return ts(false);}
