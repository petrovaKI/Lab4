// Copyright 2021 Petrova Kseniya <ksyushki5@yandex.ru>

#ifndef INCLUDE_FILESYSTEM_HPP_
#define INCLUDE_FILESYSTEM_HPP_

#include <string>
#include <boost/filesystem.hpp>
#include <iostream>
#include <vector>
#include <sstream>
#include <set>

namespace file = boost::filesystem;

class dirParse {
 public:
  explicit dirParse(const std::string& path);
  ~dirParse();

  const file::path& getPathToAccount(const size_t& n) const;
  std::stringstream printAccount(const file::path& elem, const size_t& n) const;
  friend std::ostream& operator <<(std::ostream& out, const dirParse& A);
 private:
  file::path pathToFtp;
  std::set<std::string> nameAccounts;
  std::vector<file::path> pathArr;
};

#endif // INCLUDE_FILESYSTEM_HPP_
