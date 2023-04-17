#!/usr/bin/env bash

# Usage: rabinfingerprint -o binary output file -w window size -a average block size -m minimum block size -x maximum block size
# Window size must be between 17 and 63

input_file=$1
binary_output_file=$1.rabin.out
window_size='40'
average_block_size='40'
minimum_block_size='20'
maximum_block_size='80'

buildDir=../build
EXEC=$buildDir/RabinFingerprints/RabinFingerprints

#$EXEC -o $binary_output_file -w $window_size -a $average_block_size -m $minimum_block_size -x $maximum_block_size $input_file
#$EXEC -w $window_size -a $average_block_size -m $minimum_block_size -x $maximum_block_size $input_file
$EXEC $input_file

