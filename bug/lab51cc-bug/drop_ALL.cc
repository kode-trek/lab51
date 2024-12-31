please make sure:
 - you have the correct access right
 - the file exists

could be checked for guest/admin privilege
 if (!fp) {return false;}
 else {fprintf(fp, "%s\n", arg2.c_str());}
 fclose(fp);

//https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/fopen-wfopen?view=msvc-160

I use a very handy function (similar to PHP file_put_contents)

// Usage example: filePutContents("./yourfile.txt", "content", true);
void filePutContents(const std::string& name, const std::string& content, bool append = false) {
    std::ofstream outfile;
    if (append)
        outfile.open(name, std::ios_base::app);
    else
        outfile.open(name);
    outfile << content;
}

When you need to append something just do:

filePutContents("./yourfile.txt","content",true);

Using this function you don't need to take care of opening/closing. Altho it should not be used in big loops

//#ifdef _WIN32
//bool drop(string arg1, string arg2="", ...) {
// /* variable(s)
// [v1] name of text file
// [v2] text to be written into file
// */
// string v1 = can(arg1);
// string v2 = arg2;
// // op(s)
// ofstream out;
// out.open(path(u8(v1)), ios_base::app);
// out << v2;
// out.close();
// if (exist(v1)) return false;
// return true; // check for possible failure on guest/admin privilege.
//}
//#endif

//#ifdef __linux__
//bool drop (string arg1, string arg2 = "", ...) {
// /* variable(s)
// [v1] name of text file
// [v2] text to be written into file
// [v3] file-handler
// */
// FILE *v3 = NULL;
// v3 = fopen(arg1.c_str(), "a");
// if (not v3) return true;
// fprintf(v3, "%s", u8(arg2).c_str());
// fclose(v3); 
// return false;
//}
//#endif



#ifdef _WIN32
bool drop (string arg1, string arg2 = "", ...) {
 /* variable(s)
 [v1] name of text file
 [v2] text to be written into file
 */
 string v1 = can(arg1);
 string v2 = arg2;
 // op(s)
 ofstream out(fs::path(u8(v1)));
 out << v2;
 out.close();
 if (exist(v1)) return false;
 return true;
}

/*
 The above snippet faces 2 obstacles:
 1. it fails to close already opended file-stream.
    unlike linux, the File-Handler doesn't return with 0 (false).
    therefore if get used by GUEST (or any non-admin accounts) in WINDOWS which
    don't have <write-permission> flags enabled, the exist() returns with TRUE.
    yet, there is no file displayed via DIR or any other file-browser.
    that'll lead to write-access() failure and get obsoleted.
 2. as this snippet is written in C++, it'll take more time to perform
    when it comes to the Big-Data files or large vectors in for-loop.
    the counter-part written in C would be like the following:

 bool drop (string arg1, const wchar_t* arg2 = L"", ...) {
  string v1 = can(arg1);
  string v2 = arg2;
  FILE *v3 = NULL;
  v3 = _wfopen(u8(arg1).c_str(), L"a,ccs=UTF-8");
  if (not v3) return true;
  fwprintf(v3, arg2);
  fclose(v3);
  return false;
 }

 faster but it still unables to bypass the 1st issuie mentioned earlier.
 then again it requires a <wide-string> entry as the second argument. hereby,
 there would be a conflict for the two head-parts:

 bool drop (string arg1, string arg2 = "", ...);
 bool drop (string arg1, const wchar_t* arg2 = L"", ...);

 we also tried to convert string to wide-string using the <widen> function as
 defined as:

 wstring widen (const string& arg1) {
  wostringstream wstm;
  const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (wstm.getloc());
  for (size_t i = 0; i < arg1.size(); ++i) wstm << ctfacet.widen(arg1[i]);
  return wstm.str();
}

 and its corresponding vice-versa <narrow> function:

 string narrow (const wstring& arg1) {
  ostringstream stm;
  const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (stm.getloc());
  for(size_t i = 0; i < arg1.size(); ++i) stm << ctfacet.narrow(arg1[i], 0);
  return stm.str();
 }

 to make <drop> head as:

 bool drop(const wchar_t* arg1, string arg2 = "", ...) {
  FILE *fh = NULL;
  fh = _wfopen(arg1, L"a,ccs=UTF-8");
  if (not fh) return false;
  const wchar_t* txt = widen(arg2).c_str();
  fwprintf(fh, txt);
  fclose(fh);
  return true;
 }

 and still it didn't work.
*/
#endif


