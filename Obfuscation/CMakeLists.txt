add_llvm_component_library(LLVMObfuscation2
  CryptoUtils.cpp
  Substitution.cpp
  BogusControlFlow.cpp
  Utils.cpp
  SplitBasicBlocks.cpp
  Flattening.cpp

  ADDITIONAL_HEADER_DIRS
  ${PROJECT_SOURCE_DIR}

  DEPENDS
  intrinsics_gen
  )