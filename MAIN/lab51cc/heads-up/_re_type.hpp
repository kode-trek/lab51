/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

template <typename T>
string type(T const&, ...) {return typeid(T).name();}

string type(...) {return "";}

// type [entry]
//string type(void) {return "void";}
