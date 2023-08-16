#ifndef LLVM_OBFUSCATION_UTILS_H
#define LLVM_OBFUSCATION_UTILS_H

#include "llvm/IR/Function.h"

std::string readAnnotate(llvm::Function *f);
bool toObfuscate(bool flag, llvm::Function *f, std::string attribute);

#endif
