//===- BogusControlFlow.h - BogusControlFlow Obfuscation
// pass-------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===--------------------------------------------------------------------------------===//
//
// This file contains includes and defines for the bogusControlFlow pass
//
//===--------------------------------------------------------------------------------===//

#ifndef LLVM_OBFUSCATION_BOGUSCONTROLFLOW_H
#define LLVM_OBFUSCATION_BOGUSCONTROLFLOW_H

#include "llvm/IR/PassManager.h"

namespace llvm {
class BogusControlFlowPass : public PassInfoMixin<BogusControlFlowPass> {
public:
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
  static bool isRequired() { return true; }
};
} // namespace llvm
#endif
