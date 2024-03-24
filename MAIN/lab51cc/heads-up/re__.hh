/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#include <bits/stdc++.h>

using namespace std;

/********************************************************************PROTOTYPE*/
// has [text] [term]
bool has(string, string, ...);
bool has(string, char, ...);
bool has(...);
// lowercase [text]
string lower(string, ...);
string lower(...);
// highlight [color] [text]
string mark(string, string, ...);
string mark(...);
// double-quote [text]
string quote(string, ...);
string quote(...);
// shorten-quote [text]
string shortq(string, ...);
string shortq(...);
// splitter [text] [delimiter]
vector<string> split(string, string, ...);
vector<string> split(...);
// any-to-string [entry]
string str(auto, ...);
vector<string> str(vector<auto>, ...);
string str(void);
// string-to-number [text]
float str2num(string, ...);
float str2num(...);
// type [entry]
template <typename T>
string type(T const&, ...);
string type(...);
// uppercase [text]
string upper(string, ...);
string upper(...);
/******************************************************************************/

#include "_re_has.hpp"
#include "_re_lower.hpp"
#include "_re_mark.hpp"
#include "_re_quote.hpp"
#include "_re_shortq.hpp"
#include "_re_split.hpp"
#include "_re_str.hpp"
#include "_re_str2num.hpp"
#include "_re_type.hpp"
#include "_re_upper.hpp"
