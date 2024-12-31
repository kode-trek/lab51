CHECK
func-head depond on each other. ex:
 return fs::weakly_canonical(u8(arg1)).string();
// return fs::weakly_canonical(arg1.c_str()).string();

DONE NON_ASCII
----

DONE WIN
----
blank()
cat()
cd()
cp()
dir()
drop()
echo()
exist()
last()--tic()/toc()
md()
mv()
note()
os()
pausee()
rm()
space()
sys()

ascii()
has()
lower()/upper()
mark()
quote()

enlist()

DONE ROOT
----

DONE ARG(S) // also check for true/false return
----
 cout << "can " << can() << endl;
 cout << "cat " << cat() << endl;
 cout << "cd " << cd() << endl;
 cout << "clone " << clone47() << endl;
 cout << "cp " << cp() << endl;
 cout << "dir " << dir() << endl;
 cout << "drop " << drop() << endl;
 cout << "echo " << echo() << endl;
 cout << "exist " << exist() << endl;
 cout << tic() << endl;
 sleep(4);
 cout << toc() << endl;
 cout << "last " << last() << endl;
 cout << "mkdir " << md() << endl;
 cout << "mv " << mv() << endl;
 cout << "note " << note() << endl;
 cout << "os " << os() << endl;
 cout << "pausee " << pausee() << endl;
 cout << "pwd " << pwd() << endl;
 cout << "rm " << rm() << endl;
 cout << "space " << space() << endl;
 cout << "sys " << sys() << endl;
 tree();
 cout << "ts " << ts() << endl;
 cout << "u8 " << u8() << endl;
 cout << "uname " << uname() << endl;
 cout << "uri " << uri() << endl;
 cout << "wait " << wait() << endl;
 cout << "write_access " << write_access() << endl;
 cout << "has " << has() << endl;
 cout << "lower " << lower() << endl;
 cout << "mark " << mark() << endl;
 cout << "quote " << quote() << endl;
 cout << "shortq " << shortq() << endl;
 split();
 cout << "str2num " << str2num() << endl;
 cout << "str " << str() << endl;
 cout << "type " << type() << endl;
 cout << "upper " << upper() << endl;
 enlist();
 nsort();
 seedr();
 unique();
}

//examine ones includes "can()" in 'em.
//ex. cout << blank("~") << endl;
//ex. cout << blank("..") << endl;
//ex. cout << blank(".") << endl;

//examine all via non-ascii entries.
//ex. cout << blank("پارسی") << endl;

//examine ones need write-permission on /root
//ex. cout << cp(f1, "/") << endl;

//examine all for DOS.
//some got specific examples.
//ex. cout << can("~/پارسی") << endl;
//    if (can("~/پارسی") == "~\\پارسی") cout << "REAL-DOS" << endl;
//    if (can("~/پارسی") != "~\\پارسی") cout << "WINE-DOS" << endl;

//examine diffrent types of aruments
//ex. 	nsort();
//	nsort("");
//	nsort("foo");
//	nsort("foo bar");
//	nsort("foo", "bar");
//	nsort(2);
//	nsort(3.14);
//	nsort(false);
//	nsort(true);
//	nsort(0);
//	nsort(1);


// TITLE should be the same in header-files and thier counterparts example files
