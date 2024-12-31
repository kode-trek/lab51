int main() {
 string wd = ts();
 md(wd);
 cd(wd);
 cout <<
 "MAKE-DIRECTORY [DIRECTORY] [IN: " + wd + "]""\n"
 "bool md (string)""\n"
 "===========================================""\n"
 << endl;
 // op(s)
 cout << md(ts()) << endl;
 cout << md("multi/level/nested/dir") << endl;
 // clean-up
 pausee();
 cd("..");
 rm(wd);
}

// becouse of the naming-conflict, the following script:

bool mkdir(string arg1, ...) {
 /* variable(s)
 [v1] folder-name
 */
 string v1 = can(arg1);
 // op(s)
 if (exist(v1)) return true;
 try {
  fs::create_directories(u8(v1));
  return false;
 } catch (...) {return true;}
}

bool mkdir(...) {return true;}

int main() {
 cout << mkdir("_MKDIR/nested/folders") << endl;
 cout << md("_MD/nested/folders") << endl;
}

// won't work as expected when compiled via "mingw":
// > x86_64-w64-mingw32-g++ "$1"
// therefore we chose "md" name for this function to maintenance cross-platform
// compatibility.

// we also got this ERROR-msg
In file included from main_snap.cc:1:
proc_snap.hh: In function ‘void proc_snap(std::string, std::string)’:
proc_snap.hh:38:2: error: ‘mkdir’ was not declared in this scope; did you mean ‘dir’?
   38 |  mkdir(tmp);
      |  ^~~~~
      |  dir


[COMMAND] g++ "main_snap.cc" -o "main_snap_1629791406.out" -fconcepts -lstdc++fs -std=c++17 -pthread -I/home/sailer/.area51/lab51cc/header/ -include/home/kode-trek/.area51/lab51cc/header/heads-up/deb-dos.hh
// when compiled via std-c++17 the following script
if(mkdir(dname.c_str()) != 0) {return false;}

