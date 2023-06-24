#!/usr/bin/bash

(
  cd ..
  mkdir -p test
  protoc addressbook.proto --cpp_out=test
)
g++ -o test_write test_write.cpp addressbook.pb.cc -lprotobuf &&
g++ -o test_read test_read.cpp addressbook.pb.cc -lprotobuf &&
./test_read ./address_book.data
