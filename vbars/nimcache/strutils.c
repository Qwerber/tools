/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nimrod/0.10.2/nim/lib -o /Users/oxu/Tools/vbars/nimcache/strutils.o /Users/oxu/Tools/vbars/nimcache/strutils.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct valueerror3249 valueerror3249;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45335 tcell45335;
typedef struct tcellseq45351 tcellseq45351;
typedef struct tgcheap47416 tgcheap47416;
typedef struct tcellset45347 tcellset45347;
typedef struct tpagedesc45343 tpagedesc45343;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47414 tgcstat47414;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  valueerror3249  {
  Exception Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45335  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45351  {
NI Len;
NI Cap;
tcell45335** D;
};
struct  tcellset45347  {
NI Counter;
NI Max;
tpagedesc45343* Head;
tpagedesc45343** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47414  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47416  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45351 Zct;
tcellseq45351 Decstack;
tcellset45347 Cycleroots;
tcellseq45351 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47414 Stat;
};
typedef NI TY26820[8];
struct  tpagedesc45343  {
tpagedesc45343* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_19001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45335*, usrtocell_49046)(void* usr);
static N_INLINE(void, rtladdzct_50604)(tcell45335* c);
N_NOINLINE(void, addzct_49017)(tcellseq45351* s, tcell45335* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
STRING_LITERAL(TMP268, "invalid float: ", 15);
extern TFrame* frameptr_16442;
extern TNimType NTI21801; /* ref ValueError */
extern TNimType NTI3249; /* ValueError */
extern tgcheap47416 gch_47444;

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

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

N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars) {
	NimStringDesc* result;
	nimfr("intToStr", "strutils.nim")
	result = 0;
	nimln(410, "strutils.nim");
	nimln(410, "strutils.nim");
	nimln(410, "strutils.nim");
	if (x == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = nimIntToStr((x > 0? (x) : -(x)));
	{
		NI i_95626;
		NI HEX3Atmp_95629;
		NI TMP167;
		NI res_95632;
		i_95626 = 0;
		HEX3Atmp_95629 = 0;
		nimln(411, "strutils.nim");
		nimln(411, "strutils.nim");
		nimln(411, "strutils.nim");
		TMP167 = subInt(minchars, result->Sup.len);
		HEX3Atmp_95629 = (NI64)(TMP167);
		nimln(1576, "system.nim");
		res_95632 = 1;
		{
			nimln(1577, "system.nim");
			while (1) {
				NimStringDesc* LOC4;
				nimln(1577, "system.nim");
				if (!(res_95632 <= HEX3Atmp_95629)) goto LA3;
				nimln(1576, "system.nim");
				i_95626 = res_95632;
				nimln(412, "strutils.nim");
				nimln(412, "strutils.nim");
				LOC4 = 0;
				LOC4 = rawNewString(result->Sup.len + 1);
appendChar(LOC4, 48);
appendString(LOC4, result);
				result = LOC4;
				nimln(1579, "system.nim");
				res_95632 = addInt(res_95632, 1);
			} LA3: ;
		}
	}
	nimln(413, "strutils.nim");
	{
		NimStringDesc* LOC9;
		nimln(413, "strutils.nim");
		if (!(x < 0)) goto LA7;
		nimln(414, "strutils.nim");
		nimln(414, "strutils.nim");
		LOC9 = 0;
		LOC9 = rawNewString(result->Sup.len + 1);
appendChar(LOC9, 45);
appendString(LOC9, result);
		result = LOC9;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c) {
	NimStringDesc* result;
	nimfr("repeatChar", "strutils.nim")
	result = 0;
	nimln(512, "strutils.nim");
	nimln(512, "strutils.nim");
	result = mnewString(count);
	{
		NI i_95993;
		NI HEX3Atmp_95995;
		NI TMP228;
		NI res_95998;
		i_95993 = 0;
		HEX3Atmp_95995 = 0;
		nimln(513, "strutils.nim");
		nimln(513, "strutils.nim");
		TMP228 = subInt(count, 1);
		HEX3Atmp_95995 = (NI64)(TMP228);
		nimln(1576, "system.nim");
		res_95998 = 0;
		{
			nimln(1577, "system.nim");
			while (1) {
				nimln(1577, "system.nim");
				if (!(res_95998 <= HEX3Atmp_95995)) goto LA3;
				nimln(1576, "system.nim");
				i_95993 = res_95998;
				nimln(513, "strutils.nim");
				if ((NU)(i_95993) > (NU)(result->Sup.len)) raiseIndexError();
				result->data[i_95993] = c;
				nimln(1579, "system.nim");
				res_95998 = addInt(res_95998, 1);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(tcell45335*, usrtocell_49046)(void* usr) {
	tcell45335* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell45335*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45335))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_50604)(tcell45335* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_49017((&gch_47444.Zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell45335* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_49046(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell45335* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_49046((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_50604(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(NF, nsuParseFloat)(NimStringDesc* s) {
	NF result;
	NI l;
	nimfr("parseFloat", "strutils.nim")
	result = 0;
	nimln(439, "strutils.nim");
	l = npuParseFloat(s, (&result), 0);
	nimln(440, "strutils.nim");
	{
		NIM_BOOL LOC3;
		valueerror3249* e_95723;
		NimStringDesc* LOC7;
		nimln(440, "strutils.nim");
		LOC3 = 0;
		nimln(440, "strutils.nim");
		nimln(440, "strutils.nim");
		nimln(440, "strutils.nim");
		LOC3 = !((l == s->Sup.len));
		if (LOC3) goto LA4;
		nimln(440, "strutils.nim");
		LOC3 = (l == 0);
		LA4: ;
		if (!LOC3) goto LA5;
		e_95723 = 0;
		nimln(2149, "system.nim");
		e_95723 = (valueerror3249*) newObj((&NTI21801), sizeof(valueerror3249));
		(*e_95723).Sup.Sup.m_type = (&NTI3249);
		nimln(2150, "system.nim");
		nimln(441, "strutils.nim");
		LOC7 = 0;
		LOC7 = rawNewString(s->Sup.len + 15);
appendString(LOC7, ((NimStringDesc*) &TMP268));
appendString(LOC7, s);
		asgnRefNoCycle((void**) (&(*e_95723).Sup.message), LOC7);
		nimln(441, "strutils.nim");
		raiseException((Exception*)e_95723, "ValueError");
	}
	LA5: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_strutilsInit)(void) {
	nimfr("strutils", "strutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_strutilsDatInit)(void) {
}
