/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "UNIFORM-RESOURCE-IDENTIFIER [PATH]""\n"
 "vector<string> uri (string)""\n"
 "==================================""\n"
 << endl;
 //var
 string f1 = "file_or_directory.extension";
 // files are not necessary available.
// cout << uri() << endl;
 //op(s)
 f1 = "fname.ext";
 cout <<
 uri(f1)[0] << "\n" << uri(f1)[1] << "\n" << uri(f1)[2] << "\n" << uri(f1)[3]
 << endl << endl;
 //
 f1 = "~/fname.ext";
 cout <<
 uri(f1)[0] << "\n" << uri(f1)[1] << "\n" << uri(f1)[2] << "\n" << uri(f1)[3]
 << endl << endl;
 //
 f1 = "/fname.ext";
 cout <<
 uri(f1)[0] << "\n" << uri(f1)[1] << "\n" << uri(f1)[2] << "\n" << uri(f1)[3]
 << endl << endl;
 //
 f1 = "[) bad namin':file @here.ext";
 cout <<
 uri(f1)[0] << "\n" << uri(f1)[1] << "\n" << uri(f1)[2] << "\n" << uri(f1)[3]
 << endl << endl;
 //
 f1 = "fname.ext.ext2";
 cout <<
 uri(f1)[0] << "\n" << uri(f1)[1] << "\n" << uri(f1)[2] << "\n" << uri(f1)[3]
 << endl << endl;
 //directory
 f1 = "~";
 cout <<
 uri(f1)[0] << "\n" << uri(f1)[1] << "\n" << uri(f1)[2] << "\n" << uri(f1)[3]
 << endl << endl;
 //
 f1 = "~/";
 cout <<
 uri(f1)[0] << "\n" << uri(f1)[1] << "\n" << uri(f1)[2] << "\n" << uri(f1)[3]
 << endl;
 //cout << uri() << endl;
 //directory
 md("D"); drop("D/F");
 fname = "D";
 cout <<
 uri(fname)[0] << endl <<
 uri(fname)[1] << endl <<
 uri(fname)[2] << endl <<
 uri(fname)[3]
 << endl;
 cout << endl;
 fname = "D/";
 cout <<
 uri(fname)[0] << endl <<
 uri(fname)[1] << endl <<
 uri(fname)[2] << endl <<
 uri(fname)[3]
 << endl;
 //op(s)-end
}



string f1(string arg1) {return u8(fs::path(arg1).stem());}

int main() {
 cout << f1(pwd()) << endl;
 if (f1(pwd()) == "پارسا") cout << "YES" << endl;
}
