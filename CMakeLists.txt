# Cmake file to build research code

project(bit_sensitivity)

cmake_minimum_required(VERSION  3.0)

set(BIT_SENSITVITY_SOURCES
     hash_functions.c
)

add_library(sens_func STATIC "${BIT_SENSITVITY_SOURCES}")

enable_testing()