/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool cp(string arg1, string arg2 = pwd(), ...) {
 /* variable(s)
 [v1] source-path
 [v2] target-path
 [v3] option-1
 [v4] option-2
 [v5] copy-method
 */
 string v1 = can(arg1);
 string v2 = can(arg2);
// const auto _v = fs::copy_options::none;
// const auto _v = fs::copy_options::skip_existing;
 const auto v3 = fs::copy_options::overwrite_existing;
// const auto _v = fs::copy_options::update_existing;
 const auto v4 = fs::copy_options::recursive;
// const auto _v = fs::copy_options::copy_symlinks;
// const auto _v = fs::copy_options::skip_symlinks;
// const auto _v = fs::copy_options::directories_only;
// const auto _v = fs::copy_options::create_symlinks;
// const auto _v = fs::copy_options::create_hard_links;
 const auto v5 = v3 | v4;
 // op(s)
 if (v1 == v2)
  return true; // <source> and <target> are the same!
 if (v1 == uri(v2, "parent"))
  return true; // moving this-very-directory into itslef!
 if (dir(v2)) v2 = v2 + "/" + uri(v1, "full-name");
 try {
  #ifdef _WIN32
  if (exist(v2) and (not dir(v2))) rm(v2);
  #endif
  fs::copy(u8(v1), u8(v2), v5);
  return false;
 } catch (...) {return true;}
}

bool cp(...) {return true;}
