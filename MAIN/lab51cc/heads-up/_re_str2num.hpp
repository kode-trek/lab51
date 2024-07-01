/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

float str2num(string arg1, ...) {
 float v1 = 0.0;
 // op(s)
 stringstream func(arg1);
 func >> v1;
 return v1;
}

vector<float> str2num(vector<string> arg1, ...) {
 /* variable(s)
 [v1] vector-of-entries
 [v2] vector-of-number(s)
 */
 vector<string> v1 = arg1;
 vector<float> v2 = {};
 // op(s)
 for (int i = 0; i < v1.size(); i++) v2.push_back(str2num(v1[i]));
 return v2;
}

float str2num(...) {return 0.0;}

//// string-to-number [text]

//float str2num(auto arg1, ...) {
// /*  variable(s)
// [v1] text
// [v2] output-string-stream
// [v3] string
// [v4] number
// */
// string v1 = arg1;
// stringstream v2;
// string v3 = "";
// float v4 = 0.0;
// // op(s)
// v2 << v1;
// v2 >> v3;
// stringstream func(v3);
// func >> v4;
// return v4;
//}


//float str2num(void) {return 0.0;}
