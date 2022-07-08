/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
vector<string> tree(string arg1, bool arg2 = false, ...) {
 /* variable(s)
 [v1] path
 [v2] multi-level
 [v3] sorted-tree
 */
 string v1 = can(arg1);
 bool v2 = arg2;
 vector<string> v3 = {};
 // op(s)
 if (not exist(v1)) return {""};
 if (v2)
  for (const auto& entry: fs::recursive_directory_iterator(v1))
   v1_tree.push_back(entry.path().string());
 if (not v2)
  for (const auto& entry: fs::directory_iterator(v1))
   v1_tree.push_back(entry.path().string());
 v3 = nsort(v1_tree);
 v1_tree = {};
 return v3;
}
vector<string> tree(...) {return tree(pwd(), false);}
