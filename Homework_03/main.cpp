/*
* The preprocessor is used in the first compilation stage, for each translation unit. 
* It has a very limited command set:
* #define: defines a symbol (which may have a value)
* #undef: undefines a symbol
* #ifdef / #ifndef / #elif / #else / #endif : preprocessor conditionals
* #include: includes a file as a part of the current translation unit, by copying and pasting it.
* 
* 
*/

#define MACRO_VALUELESS
#define MACRO 4

int main(int argc, char** argv) {
	return 0;
}