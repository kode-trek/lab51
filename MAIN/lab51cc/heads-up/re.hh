/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#include <bits/stdc++.h>
//#include <regex>
//#include <sstream>
//#include "natural_sort.hpp"
//#include <fstream>
//#include "alphanum.hpp"

using namespace std;

/********************************************************************PROTOTYPE*/
// is-ascii [term]
bool ascii(char, ...);
bool ascii(string, ...);
bool ascii(...);
// has [text] [term]
bool has(string, string, ...);
bool has(string, char, ...);
bool has(vector<string>, ...);
bool has(...);
// lowercase [text]
string lower(string, ...);
string lower(...);
// highlight [color] [text]
string mark(string, string, ...);
string mark(...);
// shorten-filename_NT-8.3 [file-name]
string nt83(string, ...);
string nt83(...);
// double-quote [text]
string quote(string, ...);
string quote(...);
// replace [text] [from] [to]
string replace(string, const string, const string, ...);
string replace(...);
// splitter [text] [delimiter]
vector<string> split(string, string, ...);
vector<string> split(...);
// any-to-string [entry]
string str(auto, ...);
vector<string> str(vector<auto>, ...);
string str(...);
// string-to-number [text]
float str2num(string, ...);
vector<float> str2num(vector<string>, ...);
float str2num(...);
// type [entry]
template <typename T>
string type(T const&, ...);
string type(...);
// uppercase [text]
string upper(string, ...);
string upper(...);
/******************************************************************************/

#include "_re_ascii.hpp"
#include "_re_has.hpp"
#include "_re_lower.hpp"
#include "_re_mark.hpp"
#include "_re_nt83.hpp"
#include "_re_quote.hpp"
#include "_re_replace.hpp"
#include "_re_split.hpp"
#include "_re_str.hpp"
#include "_re_str2num.hpp"
#include "_re_type.hpp"
#include "_re_upper.hpp"
