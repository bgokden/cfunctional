#pragma once

#define $$(i, j, f) \
    ({ int _temp = 0; \
        int _size = sizeof(i) / sizeof(typeof((*i))); \
        do { \
            *(j+_temp) = (lambda(typeof((*j)), (typeof((*i)) _ ) {f;} )) ( *(i+_temp) ); \
        } while( ++_temp < _size ); \
    });

#define $(i, f) \
    ({ int _temp = 0; \
        int _size = sizeof(i) / sizeof(typeof((*i))); \
        do { \
            (lambda(void, (typeof((*i)) _ ) {f;} ))( *(i+_temp) ); \
        } while( ++_temp < _size ); \
    });

// lambda macro is written by https://stackoverflow.com/users/292979/joe-d
// https://stackoverflow.com/questions/216037/what-tools-are-there-for-functional-programming-in-c/3378514#3378514
#define lambda(return_type, function_body) \
  ({ \
    return_type __fn__ function_body \
    __fn__; \
  })
