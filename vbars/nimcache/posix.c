/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nimrod/0.10.2/nim/lib -o /Users/oxu/Tools/vbars/nimcache/posix.o /Users/oxu/Tools/vbars/nimcache/posix.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <sys/socket.h>
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_19001)(void);
static N_INLINE(void, popFrame)(void);
int mappopulate_106522;
int msgnosignal_106606;
extern TFrame* frameptr_16442;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_16442 == NIM_NIL)) goto LA4;
		LOC1 = 0;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_16442).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_16442;
	frameptr_16442 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_19001();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_16442 = (*frameptr_16442).prev;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_posixInit)(void) {
	nimfr("posix", "posix.nim")
	nimln(1569, "posix.nim");
	mappopulate_106522 = ((int) 0);
	nimln(1575, "posix.nim");
	msgnosignal_106606 = MSG_HAVEMORE;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_posixDatInit)(void) {
}

