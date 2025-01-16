/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#include <bits/stdc++.h>
#include <unistd.h>
#ifdef _WIN32
 #include <windows.h>
 #include <lmcons.h> // uname-win
// #include <sys/stat.h> // uname-win
 #include <sys/param.h>
 #include <conio.h>
#endif
#ifdef __linux__
 #include <termios.h>
#endif
//#include <sys/types.h>
//#include <filesystem>
//#include "alphanum.hpp"
//#include <map>

using namespace std;
namespace fs = std::filesystem;

/********************************************************************PROTOTYPE*/
// highlight [text] [color] -- from "re.hh"
string mark(string, string, ...);
string mark(...);
// double-quote [text] -- from "re.hh"
string quote(string, ...);
string quote(...);
// any-to-string [entry] -- from "re.hh"
string str(auto, ...);
vector<string> str(vector<auto>, ...);
string str(void);
//// sort [list] -- from "vec.hh"
//vector<string> nsort(vector<string>, ...);
//vector<string> nsort(...);
// sort [list] -- from "vec.hh"
vector<string> nsort(vector<auto>, ...);
vector<string> nsort(...);
// advanced-package-tool [package]
void apt(string, ...);
void apt(...);
// is-empty [file/folder]
int blank(string, ...);
int blank(...);
//// wildcard [path]
//void abbr(string&, ...);
// canonical [path]
string can(string, ...);
string can(...);
// read [text-file]
//struct ReadTextFile {
// int nrow; // number-of-row(s)
// string txt; // text
//};
//ReadTextFile cat(string, ...);
//ReadTextFile cat(...);
string cat(string, string, ...);
string cat(...);
// change-directory [path]
bool cd(string, ...);
bool cd(...);
// clone [source] [target] !use with extreme caution!
bool clone47(string, string, ...);
bool clone47(...);
// copy [source] [target]
bool cp(string, string, ...);
bool cp(...);
// is-directory [file/folder]
bool dir(string, ...);
bool dir(...);
// write-text-file [text-file] [content]
// write-text-file [name] [content]
bool drop (string, string, ...); // dropln()?
//bool drop (string arg1, const wchar_t* arg2 = L"", ...);
bool drop(...);
// echo-input [on | off]
bool echo(bool, ...);
bool echo(void);
// exist [file/folder]
bool exist(string, ...);
bool exist(...);
// tic-toc
auto v1_start = chrono::high_resolution_clock::now();
auto v2_stop = chrono::high_resolution_clock::now();
bool tic(void) {v1_start = chrono::high_resolution_clock::now(); return false;}
bool toc(void) {v2_stop = chrono::high_resolution_clock::now(); return false;}
float last(...);
// make-directory [folder]
bool md(string, ...);
bool md(...);
// MIME [file/folder]
string mime(string, string, ...);
string mime(...);
////is-root
//bool root(...);
//bool is_root(void);
// move [source] [target]
bool mv(string, string, ...);
bool mv(...);
// annotation [text] [color]
bool note(string, string, ...);
bool note(...);
// operating-system
string os(...);
//// press-any-key-to-continue.
//void k2c(...);
// press-ENTER-to-CONTINUE..
bool pausee(bool, ...);
bool pausee(void);
// current-working-directory
string pwd(...);
// remove [file/folder]
bool rm(string, ...);
bool rm(...);
// space-information [path]
float space(string, string, ...);
float space(...);
// system [command]
int sys(string, ...); // cmd()?
int sys(...);
// tree [path] [multi-level]
// tree [folder] [nested]
vector<string> v1_tree = {};
vector<string> tree(string, bool, ...);
vector<string> tree(...);
// time-stamp [human-readable]
string ts(bool, ...);
string ts(void);
//string ts(string);
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
// uniform-resource-identifier [path] [format]
string uri(string, string, ...);
string uri(...);
// volume [file/folder]
bool vol(string, ...);
bool vol(...);
// wait [second]
bool wait(float, ...);
bool wait(...);
// has-write-permission [path]
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
#include "_deb-dos_clone47.hpp"
#include "_deb-dos_cp.hpp"
#include "_deb-dos_dir.hpp"
#include "_deb-dos_drop.hpp"
#include "_deb-dos_echo.hpp"
#include "_deb-dos_exist.hpp"
#include "_deb-dos_last.hpp"
#include "_deb-dos_md.hpp"
#include "_deb-dos_mime.hpp"
#include "_deb-dos_mv.hpp"
#include "_deb-dos_note.hpp"
#include "_deb-dos_os.hpp"
#include "_deb-dos_pausee.hpp"
#include "_deb-dos_pwd.hpp"
#include "_deb-dos_rm.hpp"
#include "_deb-dos_space.hpp"
#include "_deb-dos_sys.hpp"
#include "_deb-dos_tree.hpp"
#include "_deb-dos_ts.hpp"
#include "_deb-dos_u8.hpp"
#include "_deb-dos_uname.hpp"
#include "_deb-dos_uri.hpp"
#include "_deb-dos_vol.hpp"
#include "_deb-dos_wait.hpp"
#include "_deb-dos_write_access.hpp"


//	#ifdef __linux__
//	locale::global(locale("en_US.UTF-8"));
//	#endif
//wstring widen(const string& arg1) {
//	wostringstream wstm;
//	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (wstm.getloc());
//	for (size_t i = 0; i < arg1.size(); ++i) wstm << ctfacet.widen(arg1[i]);
//	return wstm.str();
//}
//string narrow(const wstring& arg1) {
//	ostringstream stm;
//	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (stm.getloc());
//	for(size_t i = 0; i < arg1.size(); ++i) stm << ctfacet.narrow(arg1[i], 0);
//	return stm.str();
//}

//write-text-file [name] [content]
//#ifdef _WIN32
//bool drop(const wchar_t*, const wchar_t*, ...);
//bool drop(const wchar_t*, string, ...);
//#endif
//bool drop(string, string, ...);
//bool drop(...);

//write-text-file [name] [content]
//#ifdef _WIN32
//bool drop(const wchar_t* arg1, const wchar_t* arg2 = L"", ...) {
//  FILE *fh = NULL;
//  fh = _wfopen(arg1, L"a,ccs=UTF-8");
//	if (not fh) return false;
//	fwprintf(fh, arg2);
//	fclose(fh);
//	return true;
//}
//bool drop(const wchar_t* arg1, string arg2 = "", ...) {
//  FILE *fh = NULL;
//  fh = _wfopen(arg1, L"a,ccs=UTF-8");
//	if (not fh) return false;
//  const wchar_t* txt = widen(arg2).c_str();
//	fwprintf(fh, txt);
//	fclose(fh);
//	return true;
//}
//#endif

//	if (getuid() == 0) {return true;}
//	else {return false;}

//// size [file]
//ifstream::pos_type fsize(string, ...);
//ifstream::pos_type fsize(...);

//// no-new-line-print [text]
//void disp(string, ...);
//void disp(...);

//	#ifdef __linux__
//	locale::global(locale("en_US.UTF-8"));
//	#endif
//wstring widen(const string& arg1) {
//	wostringstream wstm;
//	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (wstm.getloc());
//	for (size_t i = 0; i < arg1.size(); ++i) wstm << ctfacet.widen(arg1[i]);
//	return wstm.str();
//}
//string narrow(const wstring& arg1) {
//	ostringstream stm;
//	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (stm.getloc());
//	for(size_t i = 0; i < arg1.size(); ++i) stm << ctfacet.narrow(arg1[i], 0);
//	return stm.str();
//}

//write-text-file [name] [content]
//#ifdef _WIN32
//bool drop(const wchar_t*, const wchar_t*, ...);
//bool drop(const wchar_t*, string, ...);
//#endif
//bool drop(string, string, ...);
//bool drop(...);

//write-text-file [name] [content]
//#ifdef _WIN32
//bool drop(const wchar_t* arg1, const wchar_t* arg2 = L"", ...) {
//  FILE *fh = NULL;
//  fh = _wfopen(arg1, L"a,ccs=UTF-8");
//	if (not fh) return false;
//	fwprintf(fh, arg2);
//	fclose(fh);
//	return true;
//}
//bool drop(const wchar_t* arg1, string arg2 = "", ...) {
//  FILE *fh = NULL;
//  fh = _wfopen(arg1, L"a,ccs=UTF-8");
//	if (not fh) return false;
//  const wchar_t* txt = widen(arg2).c_str();
//	fwprintf(fh, txt);
//	fclose(fh);
//	return true;
//}
//#endif

//	if (getuid() == 0) {return true;}
//	else {return false;}



//	#ifdef __linux__
//	locale::global(locale("en_US.UTF-8"));
//	#endif
//wstring widen(const string& arg1) {
//	wostringstream wstm;
//	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (wstm.getloc());
//	for (size_t i = 0; i < arg1.size(); ++i) wstm << ctfacet.widen(arg1[i]);
//	return wstm.str();
//}
//string narrow(const wstring& arg1) {
//	ostringstream stm;
//	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (stm.getloc());
//	for(size_t i = 0; i < arg1.size(); ++i) stm << ctfacet.narrow(arg1[i], 0);
//	return stm.str();
//}

//write-text-file [name] [content]
//#ifdef _WIN32
//bool drop(const wchar_t*, const wchar_t*, ...);
//bool drop(const wchar_t*, string, ...);
//#endif
//bool drop(string, string, ...);
//bool drop(...);

