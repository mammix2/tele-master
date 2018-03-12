#ifndef GENESIS_H
#define GENESIS_H

#include "bignum.h"

// Genesis block 0 hash

static const uint256 hashGenesisBlock("000007780fbf6b013a4713df08cdadab1d045635d8e4e750d0e336d65fa172a7");
static const uint256 hashGenesisBlockTestNet("000007780fbf6b013a4713df08cdadab1d045635d8e4e750d0e336d65fa172a7");
static const uint256 CheckPointBlock1("000000c1959d5be744cbfefc1cf3f5b7cdfa1d226d0348ed7cd1ad952b8665a7"); //checkpoint at block 500
static const uint256 CheckPointBlock2("e78293ab81b99129af18a9fc4080569f17ff58802f45b8d583501833edfbd0e6"); //checkpoint at block 50000
static const uint256 CheckPointBlock3("f662ba36eafad2de34f505dd1779fe945db4736fa790110e5652d71132e75722"); //checkpoint at block 254000

// TODO: Move Kernel checksum in here


#endif // GENESIS_H
