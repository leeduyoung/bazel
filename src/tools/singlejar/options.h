// Copyright 2016 The Bazel Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef THIRD_PARTY_BAZEL_SRC_TOOLS_SINGLEJAR_OPTIONS_H_
#define THIRD_PARTY_BAZEL_SRC_TOOLS_SINGLEJAR_OPTIONS_H_

#include <string>
#include <vector>

/* Command line options. */
class Options {
 public:
  Options()
      : exclude_build_data(false),
        force_compression(false),
        normalize_timestamps(false),
        no_duplicates(false),
        preserve_compression(false),
        verbose(false),
        warn_duplicate_resources(false) {}

  // Parses command line arguments into the fields of this instance.
  void ParseCommandLine(int argc, const char *argv[]);

  std::string output_jar;
  std::string main_class;
  std::string java_launcher;
  std::vector<std::string> manifest_lines;
  std::vector<std::string> input_jars;
  std::vector<std::string> resources;
  std::vector<std::string> classpath_resources;
  std::vector<std::string> build_info_files;
  std::vector<std::string> build_info_lines;
  std::vector<std::string> include_prefixes;
  bool exclude_build_data;
  bool force_compression;
  bool normalize_timestamps;
  bool no_duplicates;
  bool preserve_compression;
  bool verbose;
  bool warn_duplicate_resources;
};

#endif  // THIRD_PARTY_BAZEL_SRC_TOOLS_SINGLEJAR_OPTIONS_H_
