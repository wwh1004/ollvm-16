add_llvm_pass_plugin(Obfuscation
  CryptoUtils.cpp
  Substitution.cpp
  BogusControlFlow.cpp
  Utils.cpp
  SplitBasicBlock.cpp
  Flattening.cpp
  Plugin.cpp

  ADDITIONAL_HEADER_DIRS
  ${PROJECT_SOURCE_DIR}

  DEPENDS
  intrinsics_gen
  )
