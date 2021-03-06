#!/bin/bash

# Make the final output directory
if [ ! -e "bin" ]; then
    mkdir bin
fi
pushd bin
if [ -e "macosx" ]; then
    rm -rf ./macosx
fi
mkdir macosx
cd macosx
mkdir x64
cd x64
mkdir Release
mkdir Debug
mkdir Deploy
popd

Rust64="nightly-x86_64-apple-darwin"

rustup update $Rust64

##################################
# Build path-helper library

pushd src/native-helpers/path-helper
rustup run $Rust64 cargo clean
rustup run $Rust64 cargo build --release
popd
cp ../src/native-helpers/path-helper/target/release/libpath_helper.* bin/macosx/x64/Release
cp ../src/native-helpers/path-helper/target/release/libpath_helper.* bin/macosx/x64/Debug
cp ../src/native-helpers/path-helper/target/release/libpath_helper.* bin/macosx/x64/Deploy

