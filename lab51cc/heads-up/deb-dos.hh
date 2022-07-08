/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
#include <bits/stdc++.h>
#include <unistd.h>
#ifdef _WIN32
 #include <windows.h>
 #include <lmcons.h>
 #include <sys/param.h>
 #include <conio.h>
#endif
#ifdef __linux__
 #include <termios.h>
#endif
using namespace std;
namespace fs = std::filesystem;
/********************************************************************PROTOTYPE*/
// highlight [color] [text] -- from "re.hh"
string mark(string, string, ...);
string mark(...);
// double-quote [text] -- from "re.hh"
string quote(string, ...);
string quote(...);
// any-to-string [entry] -- from "re.hh"
string str(auto, ...);
vector<string> str(vector<auto>, ...);
string str(void);
// sort [list] -- from "vec.hh"
vector<string> nsort(vector<auto>, ...);
vector<string> nsort(...);
// advanced-package-tool [package]
void apt(string, ...);
void apt(...);
// is-empty [directory-path]
int blank(string, ...);
int blank(...);
// canonical [path]
string can(string, ...);
string can(...);
// read [text-file-path]
struct ReadTextFile {
 int nrow; // number-of-row(s)
 string txt; // text
};
ReadTextFile cat(string, ...);
ReadTextFile cat(...);
// change-directory [path]
bool cd(string, ...);
bool cd(...);
// copy [source-path] [target-path]
bool cp(string, string, ...);
bool cp(...);
// is-directory [path]
bool dir(string, ...);
bool dir(...);
// write-text-file [text-file-path] [content]
bool drop(string, string, ...);
bool drop(...);
// echo-input [on | off]
void echo(bool, ...);
void echo(void);
// exist [file-path]
bool exist(string, ...);
bool exist(...);
// size [file-path]
ifstream::pos_type fsize(string, ...);
ifstream::pos_type fsize(...);
// tic-toc
auto v1_start = chrono::high_resolution_clock::now();
auto v2_stop = chrono::high_resolution_clock::now();
void tic(void) {v1_start = chrono::high_resolution_clock::now();}
void toc(void) {v2_stop = chrono::high_resolution_clock::now();}
float last(...);
// make-directory [directory-path]
bool md(string, ...);
bool md(...);
// move [source-path] [target-path]
bool mv(string, string, ...);
bool mv(...);
// annotation [text] [color]
void note(string, string, ...);
void note(...);
// operating-system
string os(...);
// press-ENTER-to-continue.
void pausee(bool, ...);
// current-working-directory
string pwd(...);
// remove [file-path]
bool rm(string, ...);
bool rm(...);
// system [command]
int sys(string, ...);
int sys(...);
// tree [directory-path] [multi-level]
vector<string> v1_tree = {};
vector<string> tree(string, bool, ...);
vector<string> tree(...);
// time-stamp [human-readable]
string ts(bool, ...);
string ts(void);
// UTF-8 [ascii | non-ascii]
#ifdef __linux__
string u8(string, ...);
#endif
#ifdef _WIN32
wstring u8(string&, ...);
#endif
string u8(...);
// user-name
string uname(...);
// uniform-resource-identifier [path]
vector<string> uri(string, ...);
vector<string> uri(...);
// wait [number-of-second(s)]
void wait(int, ...);
void wait(...);
// has-write-permission [directory-path]
bool write_access(string, ...);
bool write_access(...);
/******************************************************************************/
#include "re.hh"
#include "vec.hh"
#include "_deb-dos_apt.hpp"
#include "_deb-dos_blank.hpp"
#include "_deb-dos_can.hpp"
#include "_deb-dos_cat.hpp"
#include "_deb-dos_cd.hpp"
#include "_deb-dos_clone.hpp"
#include "_deb-dos_cp.hpp"
#include "_deb-dos_dir.hpp"
#include "_deb-dos_drop.hpp"
#include "_deb-dos_echo.hpp"
#include "_deb-dos_exist.hpp"
#include "_deb-dos_fsize.hpp"
#include "_deb-dos_last.hpp"
#include "_deb-dos_md.hpp"
#include "_deb-dos_mv.hpp"
#include "_deb-dos_note.hpp"
#include "_deb-dos_os.hpp"
#include "_deb-dos_pausee.hpp"
#include "_deb-dos_pwd.hpp"
#include "_deb-dos_rm.hpp"
#include "_deb-dos_sys.hpp"
#include "_deb-dos_tree.hpp"
#include "_deb-dos_ts.hpp"
#include "_deb-dos_u8.hpp"
#include "_deb-dos_uname.hpp"
#include "_deb-dos_uri.hpp"
#include "_deb-dos_wait.hpp"
#include "_deb-dos_write_access.hpp"
