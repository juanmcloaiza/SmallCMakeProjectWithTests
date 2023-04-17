################################
# Normal Libraries & Executables
################################
add_library(RabinFingerprints_lib rabin_polynomial.c)
add_executable(RabinFingerprints main.c)
# Key idea: SEPARATE OUT your main() function into its own file so it can be its
# own executable. Separating out main() means you can add this library to be
# used elsewhere.

target_link_libraries(RabinFingerprints RabinFingerprints_lib)