/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#include <bits/stdc++.h>

using namespace std;

/********************************************************************PROTOTYPE*/
// enlist [list] [neat]
void enlist(vector<float>, bool, ...);
void enlist(vector<string>, bool, ...);
void enlist(...);
// sort [list]
vector<string> nsort(vector<string>, ...);
vector<string> nsort(...);
// seeder [seed]
void seedr(int, ...);
void seedr(...);
// unique [list]
vector<string> unique(vector<string>, ...);
vector<string> unique(...);
/******************************************************************************/

#include "natural_sort.hpp"
#include "_vec_enlist.hpp"
#include "_vec_nsort.hpp"
#include "_vec_seedr.hpp"
#include "_vec_unique.hpp"
