/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.3.0, DynASM x64 version 1.3.0
** DO NOT EDIT! The original file is in "src/jit/emit_x64.dasc".
*/

#line 1 "src/jit/emit_x64.dasc"
#include "moar.h"
#include <dasm_proto.h>
#include <dasm_x86.h>
#include "emit.h"

//|.arch x64
#if DASM_VERSION != 10300
#error "Version mismatch between DynASM and included encoding engine"
#endif
#line 7 "src/jit/emit_x64.dasc"
//|.actionlist actions
static const unsigned char actions[1645] = {
  85,72,137,229,255,65,86,83,65,84,65,85,255,73,137,252,254,73,137,252,245,
  77,139,166,233,73,139,156,253,36,233,255,252,255,226,255,248,10,72,199,192,
  0,0,0,0,248,11,255,65,93,65,92,91,65,94,255,72,137,252,236,93,195,255,72,
  185,237,237,72,137,139,233,255,72,199,131,233,237,255,73,139,141,233,72,139,
  137,233,72,137,139,233,255,73,139,142,233,72,139,137,233,72,137,139,233,255,
  72,139,139,233,72,139,137,233,255,77,137,227,255,77,139,155,233,255,77,139,
  147,233,255,77,139,146,233,255,73,131,252,250,0,15,133,244,247,255,76,137,
  252,247,76,137,222,72,199,194,237,73,186,237,237,65,252,255,210,255,73,137,
  194,248,1,255,76,137,147,233,255,76,137,225,255,72,139,137,233,72,139,147,
  233,72,137,145,233,255,73,139,140,253,36,233,72,139,137,233,72,137,139,233,
  255,72,139,139,233,72,131,185,233,0,15,133,244,247,72,141,145,233,252,233,
  244,248,248,1,72,139,145,233,72,141,146,233,248,2,255,76,139,2,73,131,252,
  248,0,255,15,133,244,249,255,77,139,134,233,77,139,128,233,248,3,255,76,139,
  2,255,73,131,252,248,0,15,133,244,250,255,77,139,132,253,36,233,77,139,128,
  233,255,102,252,247,129,233,236,15,149,208,73,131,252,248,0,15,149,212,132,
  196,15,149,208,102,65,252,247,128,233,236,15,148,212,132,196,15,132,244,249,
  82,65,80,76,137,252,247,72,139,179,233,73,186,237,237,65,252,255,210,65,88,
  90,248,3,255,76,137,2,248,4,255,76,139,2,73,131,252,248,0,15,133,244,250,
  255,81,82,76,137,252,247,73,139,180,253,36,233,72,139,182,233,73,186,237,
  237,65,252,255,210,90,89,255,73,137,192,102,252,247,129,233,236,15,149,208,
  73,131,252,248,0,15,149,212,132,196,15,149,208,102,65,252,247,128,233,236,
  15,148,212,132,196,15,132,244,249,82,65,80,76,137,252,247,72,139,179,233,
  73,186,237,237,65,252,255,210,65,88,90,248,3,76,137,2,255,76,137,131,233,
  255,72,139,139,233,72,139,147,233,76,141,129,233,73,131,184,233,0,15,132,
  244,247,77,139,128,233,248,1,255,102,252,247,129,233,236,15,149,208,72,131,
  252,250,0,15,149,212,132,196,15,149,208,102,252,247,130,233,236,15,148,212,
  132,196,15,132,244,248,82,65,80,76,137,252,247,72,139,179,233,73,186,237,
  237,65,252,255,210,65,88,90,248,2,255,73,137,144,233,255,72,139,139,233,72,
  137,139,233,255,72,139,139,233,73,137,142,233,255,73,139,142,233,72,137,139,
  233,73,199,134,233,237,255,72,139,131,233,255,72,3,131,233,255,72,43,131,
  233,255,72,15,175,131,233,255,72,153,72,252,247,187,233,255,72,137,147,233,
  255,72,137,131,233,255,72,252,255,131,233,255,72,252,255,139,233,255,252,
  242,15,16,131,233,255,252,242,15,88,131,233,255,252,242,15,92,131,233,255,
  252,242,15,89,131,233,255,252,242,15,94,131,233,255,252,242,15,17,131,233,
  255,252,242,72,15,42,131,233,252,242,15,17,131,233,255,252,242,72,15,44,131,
  233,72,137,131,233,255,72,59,131,233,255,15,148,208,255,15,149,208,255,15,
  156,208,255,15,158,208,255,15,159,208,255,15,157,208,255,72,15,182,192,72,
  137,131,233,255,76,137,252,247,72,199,198,237,73,186,237,237,65,252,255,210,
  73,139,140,253,36,233,72,139,137,233,72,137,136,233,102,199,128,233,236,65,
  139,142,233,137,136,233,72,137,131,233,255,76,139,147,233,77,133,210,255,
  15,132,244,247,102,65,252,247,130,233,236,255,15,133,244,247,77,139,154,233,
  77,139,155,233,77,133,219,255,15,132,244,247,76,137,252,247,76,137,214,72,
  141,147,233,77,139,147,233,65,252,255,210,252,233,244,248,248,1,255,76,137,
  147,233,248,2,255,76,137,252,247,255,76,137,252,246,255,76,137,252,242,255,
  76,137,252,241,255,77,137,252,240,255,77,137,252,241,255,77,137,252,243,65,
  83,255,76,137,231,255,76,137,230,255,76,137,226,255,77,137,224,255,77,137,
  225,255,77,137,227,65,83,255,76,137,252,239,255,76,137,252,238,255,76,137,
  252,234,255,76,137,252,233,255,77,137,232,255,77,137,252,233,255,77,137,252,
  235,65,83,255,77,141,156,253,36,233,255,76,137,223,255,76,137,222,255,76,
  137,218,255,76,137,217,255,77,137,216,255,77,137,217,255,77,137,219,65,83,
  255,72,139,187,233,255,72,139,179,233,255,72,139,147,233,255,72,139,139,233,
  255,76,139,131,233,255,76,139,139,233,255,76,139,155,233,65,83,255,102,72,
  15,110,131,233,255,102,72,15,110,139,233,255,102,72,15,110,147,233,255,102,
  72,15,110,155,233,255,102,72,15,110,163,233,255,102,72,15,110,171,233,255,
  102,72,15,110,179,233,255,102,72,15,110,187,233,255,76,141,155,233,255,77,
  139,157,233,77,139,155,233,255,72,199,199,237,255,72,199,198,237,255,72,199,
  194,237,255,72,199,193,237,255,73,199,192,237,255,73,199,193,237,255,73,199,
  195,237,65,83,255,73,187,237,237,255,102,73,15,110,195,255,102,73,15,110,
  203,255,102,73,15,110,211,255,102,73,15,110,219,255,102,73,15,110,227,255,
  102,73,15,110,252,235,255,102,73,15,110,252,243,255,102,73,15,110,252,251,
  255,72,139,8,72,137,139,233,255,72,139,139,233,72,137,8,255,73,131,190,233,
  0,15,132,244,247,76,137,252,247,73,186,237,237,65,252,255,210,248,1,255,252,
  233,244,10,255,252,233,245,255,72,139,131,233,72,133,192,15,133,245,255,72,
  139,131,233,72,133,192,15,132,245,255,72,139,139,233,72,133,201,15,132,244,
  247,73,139,150,233,72,139,146,233,72,57,209,15,132,244,247,252,233,245,248,
  1,255,72,139,139,233,73,139,148,253,36,233,72,139,146,233,255,72,131,252,
  249,0,15,132,244,247,255,102,252,247,129,233,236,255,72,59,145,233,15,133,
  244,247,255,102,252,247,129,233,236,15,133,244,247,255,76,137,252,247,72,
  199,198,237,72,199,194,237,73,186,237,237,65,252,255,210,255,72,199,192,237,
  252,233,244,11,248,2,255,76,137,252,247,76,137,252,238,72,199,194,237,73,
  186,237,237,65,252,255,210,73,137,195,255,77,139,148,253,36,233,255,76,139,
  139,233,77,137,138,233,255,73,185,237,237,77,137,138,233,255,77,139,141,233,
  77,139,137,233,77,137,138,233,255,65,199,132,253,36,233,237,255,73,199,132,
  253,36,233,237,255,72,141,147,233,73,137,148,253,36,233,255,73,139,150,233,
  72,139,18,73,137,148,253,36,233,255,72,141,21,245,73,137,148,253,36,233,255,
  65,82,65,83,255,76,137,252,247,72,139,179,233,72,137,226,76,137,209,73,186,
  237,237,65,252,255,210,255,65,91,65,90,255,76,137,252,247,72,137,198,76,137,
  218,76,137,209,255,76,139,144,233,77,139,146,233,65,252,255,210,255,76,137,
  252,247,72,139,179,233,76,137,218,72,199,193,237,73,186,237,237,65,252,255,
  210,255,72,199,192,1,0,0,0,252,233,244,11,255,77,59,166,233,15,132,244,247,
  72,141,13,244,247,73,137,140,253,36,233,72,199,192,1,0,0,0,252,233,244,11,
  248,1,255,205,3,255
};

#line 8 "src/jit/emit_x64.dasc"
//|.section code
#define DASM_SECTION_CODE	0
#define DASM_MAXSECTION		1
#line 9 "src/jit/emit_x64.dasc"
//|.globals JIT_LABEL_
enum {
  JIT_LABEL_exit,
  JIT_LABEL_out,
  JIT_LABEL__MAX
};
#line 10 "src/jit/emit_x64.dasc"

/* type declarations */
//|.type REGISTER, MVMRegister
#define Dt1(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 13 "src/jit/emit_x64.dasc"
//|.type ARGCTX, MVMArgProcContext
#define Dt2(_V) (int)(ptrdiff_t)&(((MVMArgProcContext *)0)_V)
#line 14 "src/jit/emit_x64.dasc"
//|.type STATICFRAME, MVMStaticFrame
#define Dt3(_V) (int)(ptrdiff_t)&(((MVMStaticFrame *)0)_V)
#line 15 "src/jit/emit_x64.dasc"
//|.type P6OPAQUE, MVMP6opaque
#define Dt4(_V) (int)(ptrdiff_t)&(((MVMP6opaque *)0)_V)
#line 16 "src/jit/emit_x64.dasc"
//|.type P6OBODY, MVMP6opaqueBody
#define Dt5(_V) (int)(ptrdiff_t)&(((MVMP6opaqueBody *)0)_V)
#line 17 "src/jit/emit_x64.dasc"
//|.type MVMINSTANCE, MVMInstance
#define Dt6(_V) (int)(ptrdiff_t)&(((MVMInstance *)0)_V)
#line 18 "src/jit/emit_x64.dasc"
//|.type OBJECT, MVMObject
#define Dt7(_V) (int)(ptrdiff_t)&(((MVMObject *)0)_V)
#line 19 "src/jit/emit_x64.dasc"
//|.type COLLECTABLE, MVMCollectable
#define Dt8(_V) (int)(ptrdiff_t)&(((MVMCollectable *)0)_V)
#line 20 "src/jit/emit_x64.dasc"
//|.type STABLE, MVMSTable
#define Dt9(_V) (int)(ptrdiff_t)&(((MVMSTable *)0)_V)
#line 21 "src/jit/emit_x64.dasc"
//|.type STRING, MVMString*
#define DtA(_V) (int)(ptrdiff_t)&(((MVMString* *)0)_V)
#line 22 "src/jit/emit_x64.dasc"
//|.type OBJECTPTR, MVMObject*
#define DtB(_V) (int)(ptrdiff_t)&(((MVMObject* *)0)_V)
#line 23 "src/jit/emit_x64.dasc"
//|.type CONTAINERSPEC, MVMContainerSpec
#define DtC(_V) (int)(ptrdiff_t)&(((MVMContainerSpec *)0)_V)
#line 24 "src/jit/emit_x64.dasc"
//|.type U16, MVMuint16
#define DtD(_V) (int)(ptrdiff_t)&(((MVMuint16 *)0)_V)
#line 25 "src/jit/emit_x64.dasc"
//|.type U32, MVMuint32
#define DtE(_V) (int)(ptrdiff_t)&(((MVMuint32 *)0)_V)
#line 26 "src/jit/emit_x64.dasc"
//|.type U64, MVMuint64
#define DtF(_V) (int)(ptrdiff_t)&(((MVMuint64 *)0)_V)
#line 27 "src/jit/emit_x64.dasc"



/* Static allocation of relevant types to registers. I pick
 * callee-save registers for efficiency. It is likely we'll be calling
 * quite a C functions, and this saves us the trouble of storing
 * them. Moreover, C compilers preferentially do not use callee-saved
 * registers, and so in most cases, these won't be touched at all. */
//|.type TC, MVMThreadContext, r14
#define Dt10(_V) (int)(ptrdiff_t)&(((MVMThreadContext *)0)_V)
#line 36 "src/jit/emit_x64.dasc"
/* Alternative base pointer. I'll be using this often, so picking rbx
 * here rather than the extended registers will lead to smaller
 * bytecode */
//|.type WORK, MVMRegister, rbx
#define Dt11(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 40 "src/jit/emit_x64.dasc"
//|.type FRAME, MVMFrame, r12
#define Dt12(_V) (int)(ptrdiff_t)&(((MVMFrame *)0)_V)
#line 41 "src/jit/emit_x64.dasc"
//|.type CU, MVMCompUnit, r13
#define Dt13(_V) (int)(ptrdiff_t)&(((MVMCompUnit *)0)_V)
#line 42 "src/jit/emit_x64.dasc"


//|.macro saveregs
//| push TC; push WORK; push FRAME; push CU;
//|.endmacro

//|.macro restoreregs
//| pop CU; pop FRAME; pop WORK; pop TC
//|.endmacro


const MVMint32 MVM_jit_support(void) {
    return 1;
}

const unsigned char * MVM_jit_actions(void) {
    return actions;
}

const unsigned int MVM_jit_num_globals(void) {
    return JIT_LABEL__MAX;
}


/* C Call argument registers */
//|.if WIN32
//|.define ARG1, rcx
//|.define ARG2, rdx
//|.define ARG3, r8
//|.define ARG4, r9
//|.else
//|.define ARG1, rdi
//|.define ARG2, rsi
//|.define ARG3, rdx
//|.define ARG4, rcx
//|.define ARG5, r8
//|.define ARG6, r9
//|.endif

/* C call argument registers for floating point */
//|.if WIN32
//|.define ARG1F, xmm0
//|.define ARG2F, xmm1
//|.define ARG3F, xmm2
//|.define ARG4F, xmm3
//|.else
//|.define ARG1F, xmm0
//|.define ARG2F, xmm1
//|.define ARG3F, xmm2
//|.define ARG4F, xmm3
//|.define ARG5F, xmm4
//|.define ARG6F, xmm5
//|.define ARG7F, xmm6
//|.define ARG8F, xmm7
//|.endif

/* Special register for the function to be invoked 
 * (chosen because it isn't involved in argument passing
 *  and volatile) */
//|.define FUNCTION, r10
/* all-purpose temporary registers */
//|.define TMP1, rcx
//|.define TMP2, rdx
//|.define TMP3, r8
//|.define TMP4, r9
//|.define TMP5, r10
//|.define TMP6, r11
/* same, but 32 bits wide */
//|.define TMP1d, ecx
//|.define TMP2d, edx
//|.define TMP3d, r8d
//|.define TMP4d, r9d
//|.define TMP5d, r10d
//|.define TMP6d, r11d

/* return value */
//|.define RV, rax
//|.define RVF, xmm0

//|.macro callr, reg
//|.if WIN32
//| sub rsp, 32
//| call reg
//| add rsp, 32
//|.else
//| call reg
//|.endif
//|.endmacro

//|.macro callp, funcptr
//| mov64 FUNCTION, (uintptr_t)funcptr
//| callr FUNCTION
//|.endmacro


//|.macro check_wb, root, ref;
//| test word COLLECTABLE:root->flags, MVM_CF_SECOND_GEN;
//| setnz al;
//| cmp ref, 0x0;
//| setne ah;
//| test ah, al;
//| setnz al;
//| test word COLLECTABLE:ref->flags, MVM_CF_SECOND_GEN;
//| setz ah;
//| test ah, al;
//|.endmacro;

//|.macro hit_wb, obj
//| mov ARG1, TC;
//| mov ARG2, obj;
//| callp &MVM_gc_write_barrier_hit;
//|.endmacro

//|.macro get_spesh_slot, reg, idx;
//| mov reg, FRAME->effective_spesh_slots;
//| mov reg, OBJECTPTR:reg[idx];
//|.endmacro


//|.macro get_vmnull, reg
//| mov reg, TC->instance;
//| mov reg, MVMINSTANCE:reg->VMNull;
//|.endmacro

//|.macro get_cur_op, reg
//| mov reg, TC->interp_cur_op
//| mov reg, [reg]
//|.endmacro

//|.macro get_string, reg, idx
//| mov reg, CU->body.strings;
//| mov reg, STRING:reg[idx];
//|.endmacro

//|.macro is_type_object, reg
//| test word OBJECT:reg->header.flags, MVM_CF_TYPE_OBJECT
//|.endmacro

//|.macro gc_sync_point
//| cmp qword TC->gc_status, 0;
//| je >1;
//| mov ARG1, TC;
//| callp &MVM_gc_enter_from_interrupt;
//|1:
//|.endmacro

/* A function prologue is always the same in x86 / x64, becuase
 * we do not provide variable arguments, instead arguments are provided
 * via a frame. All JIT entry points receive a prologue. */
void MVM_jit_emit_prologue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    /* Setup stack */
    //| push rbp;
    //| mov rbp, rsp;
    dasm_put(Dst, 0);
#line 196 "src/jit/emit_x64.dasc"
    /* save callee-save registers */
    //| saveregs;
    dasm_put(Dst, 5);
#line 198 "src/jit/emit_x64.dasc"
    /* setup special frame variables */
    //| mov TC,   ARG1;
    //| mov CU,   ARG2;
    //| mov FRAME, TC->cur_frame;
    //| mov WORK, FRAME->work;
    dasm_put(Dst, 13, Dt10(->cur_frame), Dt12(->work));
#line 203 "src/jit/emit_x64.dasc"
    /* ARG3 contains our 'entry label' */
    //| jmp ARG3
    dasm_put(Dst, 32);
#line 205 "src/jit/emit_x64.dasc"

}

/* And a function epilogue is also always the same */
void MVM_jit_emit_epilogue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    //| ->exit:
    //| mov RV, 0;
    //| ->out:
    dasm_put(Dst, 36);
#line 214 "src/jit/emit_x64.dasc"
    /* restore callee-save registers */
    //| restoreregs;
    dasm_put(Dst, 48);
#line 216 "src/jit/emit_x64.dasc"
    /* Restore stack */
    //| mov rsp, rbp;
    //| pop rbp;
    //| ret;
    dasm_put(Dst, 56);
#line 220 "src/jit/emit_x64.dasc"
}

static MVMuint64 try_emit_gen2_ref(MVMThreadContext *tc, MVMJitGraph *jg,
                                   MVMObject *obj, MVMint16 reg, 
                                   dasm_State **Dst) {
    if (!(obj->header.flags & MVM_CF_SECOND_GEN))
        return 0;
    //| mov64 TMP1, (uintptr_t)obj;
    //| mov WORK[reg], TMP1;
    dasm_put(Dst, 63, (unsigned int)((uintptr_t)obj), (unsigned int)(((uintptr_t)obj)>>32), Dt11([reg]));
#line 229 "src/jit/emit_x64.dasc"
    return 1;
}

/* compile per instruction, can't really do any better yet */
void MVM_jit_emit_primitive(MVMThreadContext *tc, MVMJitGraph *jg,
                            MVMJitPrimitive * prim, dasm_State **Dst) {
    MVMSpeshIns *ins = prim->ins;
    MVMuint16 op = ins->info->opcode;
    MVM_jit_log(tc, "emit opcode: <%s>\n", ins->info->name);
    /* Quite a few of these opcodes are copies. Ultimately, I want to
     * move copies to their own node (MVMJitCopy or such), and reduce
     * the number of copies (and thereby increase the efficiency), but
     * currently that isn't really feasible. */
    switch (op) {
    case MVM_OP_const_i64_16: {
        MVMint32 reg = ins->operands[0].reg.orig;
        /* Upgrade to 64 bit */
        MVMint64 val = (MVMint64)ins->operands[1].lit_i16;
        //| mov WORK[reg], qword val;
        dasm_put(Dst, 72, Dt11([reg]), val);
#line 248 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_i64: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMint64 val = ins->operands[1].lit_i64;
        //| mov64 TMP1, val;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 63, (unsigned int)(val), (unsigned int)((val)>>32), Dt11([reg]));
#line 255 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_n64: {
        MVMint16 reg = ins->operands[0].reg.orig;
        MVMint64 valbytes = ins->operands[1].lit_i64;
        MVM_jit_log(tc, "store const %f\n", ins->operands[1].lit_n64);
        //| mov64 TMP1, valbytes;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 63, (unsigned int)(valbytes), (unsigned int)((valbytes)>>32), Dt11([reg]));
#line 263 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_s: {
         MVMint16 reg = ins->operands[0].reg.orig;
         MVMuint32 idx = ins->operands[1].lit_str_idx;
         MVMStaticFrame *sf = jg->sg->sf;
         MVMString * s = sf->body.cu->body.strings[idx];
         if (!try_emit_gen2_ref(tc, jg, (MVMObject*)s, reg, Dst)) {
             //| get_string TMP1, idx;
             //| mov WORK[reg], TMP1;
             dasm_put(Dst, 78, Dt13(->body.strings), DtA([idx]), Dt11([reg]));
#line 273 "src/jit/emit_x64.dasc"
         }
         break;
    }
    case MVM_OP_null: {
        MVMint16 reg = ins->operands[0].reg.orig;
        //| get_vmnull TMP1;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 91, Dt10(->instance), Dt6(->VMNull), Dt11([reg]));
#line 280 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_gethow:
    case MVM_OP_getwhat: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[0].reg.orig;
        //| mov TMP1, WORK[obj];
        //| mov TMP1, OBJECT:TMP1->st;
        dasm_put(Dst, 104, Dt11([obj]), Dt7(->st));
#line 288 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_gethow) {
            //| mov TMP1, STABLE:TMP1->HOW;
            dasm_put(Dst, 108, Dt9(->HOW));
#line 290 "src/jit/emit_x64.dasc"
        } else {
            //| mov TMP1, STABLE:TMP1->WHAT;
            dasm_put(Dst, 108, Dt9(->WHAT));
#line 292 "src/jit/emit_x64.dasc"
        }
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 67, Dt11([dst]));
#line 294 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getlex: {
        MVMint16 *lexical_types;
        MVMStaticFrame * sf = jg->sg->sf;
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 idx = ins->operands[1].lex.idx;
        MVMint16 out = ins->operands[1].lex.outers;
        MVMint16 i;
        //| mov TMP6, FRAME;
        dasm_put(Dst, 113);
#line 304 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            /* I'm going to skip compiling the check whether the outer
             * node really exists, because if the code has run N times
             * correctly, then the outer frame must have existed then,
             * and since this chain is static, it should still exist
             * now.  If it doesn't exist, that means we crash.
             *
             * NB: inlining /might/ make this all wrong! But, if that
             * happens, the interpreter will panic even without JIT */
            //| mov TMP6, FRAME:TMP6->outer;
            dasm_put(Dst, 117, Dt12(->outer));
#line 314 "src/jit/emit_x64.dasc"
            sf = sf->body.outer;
        }
        /* get array of lexicals */
        //| mov TMP5, FRAME:TMP6->env;
        dasm_put(Dst, 122, Dt12(->env));
#line 318 "src/jit/emit_x64.dasc"
        /* read value */
        //| mov TMP5, REGISTER:TMP5[idx];
        dasm_put(Dst, 127, Dt1([idx]));
#line 320 "src/jit/emit_x64.dasc"
        /* it seems that if at runtime, if the outer frame has been inlined,
         * this /could/ be wrong. But if that is so, the interpreted instruction
         * would also be wrong, because it'd refer to the wrong lexical. */
        lexical_types = (!out && jg->sg->lexical_types ?
                         jg->sg->lexical_types :
                         sf->body.lexical_types);
        MVM_jit_log(tc, "Lexical type of register: %d\n", lexical_types[idx]);
        if (lexical_types[idx] == MVM_reg_obj) {
            MVM_jit_log(tc, "Emit lex vifivy check\n");
            /* NB: this code path hasn't been checked. */
            /* if it is zero, check if we need to auto-vivify */        
            //| cmp TMP5, 0;
            //| jne >1; 
            dasm_put(Dst, 132);
#line 333 "src/jit/emit_x64.dasc"
            /* setup args */
            //| mov ARG1, TC;
            //| mov ARG2, TMP6;
            //| mov ARG3, idx;
            //| callp &MVM_frame_vivify_lexical;
            dasm_put(Dst, 142, idx, (unsigned int)((uintptr_t)&MVM_frame_vivify_lexical), (unsigned int)(((uintptr_t)&MVM_frame_vivify_lexical)>>32));
#line 338 "src/jit/emit_x64.dasc"
            /* use return value for the result */
            //| mov TMP5, RV;
            //|1:
            dasm_put(Dst, 162);
#line 341 "src/jit/emit_x64.dasc"
        } 
        /* store the value */
        //| mov WORK[dst], TMP5;
        dasm_put(Dst, 168, Dt11([dst]));
#line 344 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_bindlex: {
        MVMint16 idx = ins->operands[0].lex.idx;
        MVMint16 out = ins->operands[0].lex.outers;
        MVMint16 src = ins->operands[1].reg.orig;
        MVMint16 i;
        //| mov TMP1, FRAME;
        dasm_put(Dst, 173);
#line 352 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            //| mov TMP1, FRAME:TMP1->outer;
            dasm_put(Dst, 108, Dt12(->outer));
#line 354 "src/jit/emit_x64.dasc"
        }
        //| mov TMP1, FRAME:TMP1->env;
        //| mov TMP2, WORK[src];
        //| mov REGISTER:TMP1[idx], TMP2;
        dasm_put(Dst, 177, Dt12(->env), Dt11([src]), Dt1([idx]));
#line 358 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_getarg_o:
    case MVM_OP_sp_getarg_n:
    case MVM_OP_sp_getarg_s:
    case MVM_OP_sp_getarg_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMuint16 idx = ins->operands[1].callsite_idx;
        //| mov TMP1, FRAME->params.args;
        //| mov TMP1, REGISTER:TMP1[idx];
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 190, Dt12(->params.args), Dt1([idx]), Dt11([reg]));
#line 369 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6oget_i:
    case MVM_OP_sp_p6oget_n:
    case MVM_OP_sp_p6oget_s:
    case MVM_OP_sp_p6oget_o:
    case MVM_OP_sp_p6ogetvc_o:
    case MVM_OP_sp_p6ogetvt_o: {
        MVMint16 dst    = ins->operands[0].reg.orig;
        MVMint16 obj    = ins->operands[1].reg.orig;
        MVMint16 offset = ins->operands[2].lit_i16;
        MVMint16 body   = offsetof(MVMP6opaque, body);
        //| mov TMP1, WORK[obj];
        //| cmp aword P6OPAQUE:TMP1->body.replaced, 0;
        //| jne >1;
        //| lea TMP2, [TMP1 + (offset + body)];
        //| jmp >2;
        //|1:
        //| mov TMP2, P6OPAQUE:TMP1->body.replaced;
        //| lea TMP2, [TMP2 + offset];
        //|2:
        dasm_put(Dst, 205, Dt11([obj]), Dt4(->body.replaced), (offset + body), Dt4(->body.replaced), offset);
#line 390 "src/jit/emit_x64.dasc"
        /* TMP1 now contains address of item */
        if (op == MVM_OP_sp_p6oget_o) {
            //| mov TMP3, [TMP2];
            //| cmp TMP3, 0;
            dasm_put(Dst, 239);
#line 394 "src/jit/emit_x64.dasc"
            /* Check if object doesn't point to NULL */
            //| jne >3;
            dasm_put(Dst, 248);
#line 396 "src/jit/emit_x64.dasc"
            /* Otherwise load VMNull */ 
            //| get_vmnull TMP3;
            //|3:
            dasm_put(Dst, 253, Dt10(->instance), Dt6(->VMNull));
#line 399 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_sp_p6ogetvt_o) {
            /* vivify as type object */ 
            MVMint16 spesh_idx = ins->operands[3].lit_i16;
            //| mov TMP3, [TMP2];
            dasm_put(Dst, 264);
#line 403 "src/jit/emit_x64.dasc"
            /* check for null */
            //| cmp TMP3, 0;
            //| jne >4;
            dasm_put(Dst, 268);
#line 406 "src/jit/emit_x64.dasc"
            /* if null, vivify as type object from spesh slot */
            //| get_spesh_slot TMP3, spesh_idx;
            dasm_put(Dst, 278, Dt12(->effective_spesh_slots), DtB([spesh_idx]));
#line 408 "src/jit/emit_x64.dasc"
            /* need to hit write barrier? */
            //| check_wb TMP1, TMP3;
            //| jz >3;
            //| push TMP2; // address
            //| push TMP3; // value
            //| hit_wb WORK[obj]; // write barrier for header 
            //| pop TMP3;
            //| pop TMP2;
            //|3:
            dasm_put(Dst, 289, Dt8(->flags), MVM_CF_SECOND_GEN, Dt8(->flags), MVM_CF_SECOND_GEN, Dt11([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 417 "src/jit/emit_x64.dasc"
            /* store vivified type value in memory location */
            //| mov [TMP2], TMP3;
            //|4:
            dasm_put(Dst, 352);
#line 420 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_sp_p6ogetvc_o) {
            MVMint16 spesh_idx = ins->operands[3].lit_i16;
            //| mov TMP3, [TMP2];
            //| cmp TMP3, 0;
            //| jne >4;
            dasm_put(Dst, 358);
#line 425 "src/jit/emit_x64.dasc"
            /* vivify as clone */
            //| push TMP1;
            //| push TMP2;
            //| mov ARG1, TC; 
            //| get_spesh_slot ARG2, spesh_idx;
            //| callp &MVM_repr_clone;
            //| pop TMP2;
            //| pop TMP1;
            dasm_put(Dst, 371, Dt12(->effective_spesh_slots), DtB([spesh_idx]), (unsigned int)((uintptr_t)&MVM_repr_clone), (unsigned int)(((uintptr_t)&MVM_repr_clone)>>32));
#line 433 "src/jit/emit_x64.dasc"
            /* assign with write barrier */
            //| mov TMP3, RV;
            //| check_wb TMP1, TMP3;
            //| jz >3;
            //| push TMP2;
            //| push TMP3;
            //| hit_wb WORK[obj];
            //| pop TMP3;
            //| pop TMP2;
            //|3: 
            //| mov [TMP2], TMP3;
            dasm_put(Dst, 398, Dt8(->flags), MVM_CF_SECOND_GEN, Dt8(->flags), MVM_CF_SECOND_GEN, Dt11([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 444 "src/jit/emit_x64.dasc"
            /* done */
            //|4:
            dasm_put(Dst, 355);
#line 446 "src/jit/emit_x64.dasc"
        } else {
            /* the regular case */
            //| mov TMP3, [TMP2];
            dasm_put(Dst, 264);
#line 449 "src/jit/emit_x64.dasc"
        }
        /* store in local register */
        //| mov WORK[dst], TMP3;
        dasm_put(Dst, 467, Dt11([dst]));
#line 452 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6obind_i:
    case MVM_OP_sp_p6obind_n:
    case MVM_OP_sp_p6obind_o:
    case MVM_OP_sp_p6obind_s: {
        MVMint16 obj    = ins->operands[0].reg.orig;
        MVMint16 offset = ins->operands[1].callsite_idx;
        MVMint16 val    = ins->operands[2].reg.orig;
        //| mov TMP1, WORK[obj];            // object
        //| mov TMP2, WORK[val];            // value
        //| lea TMP3, P6OPAQUE:TMP1->body;  // body
        //| cmp qword P6OBODY:TMP3->replaced, 0; 
        //| je >1;
        //| mov TMP3, P6OBODY:TMP3->replaced; // replaced object body
        //|1:
        dasm_put(Dst, 472, Dt11([obj]), Dt11([val]), Dt4(->body), Dt5(->replaced), Dt5(->replaced));
#line 468 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_sp_p6obind_o) {
            /* check if we should hit write barrier */
            //| check_wb TMP1, TMP2;
            //| jz >2;
            //| push TMP2; // store value
            //| push TMP3; // store body pointer
            //| hit_wb WORK[obj]
            //| pop TMP3; // restore body pointer
            //| pop TMP2; // restore value
            //|2: // done
            dasm_put(Dst, 500, Dt8(->flags), MVM_CF_SECOND_GEN, Dt8(->flags), MVM_CF_SECOND_GEN, Dt11([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 478 "src/jit/emit_x64.dasc"
        }
        //| mov [TMP3+offset], TMP2; // store value into body
        dasm_put(Dst, 562, offset);
#line 480 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getwhere:
    case MVM_OP_set: {
         MVMint32 reg1 = ins->operands[0].reg.orig;
         MVMint32 reg2 = ins->operands[1].reg.orig;
         //| mov TMP1, WORK[reg2];
         //| mov WORK[reg1], TMP1;
         dasm_put(Dst, 567, Dt11([reg2]), Dt11([reg1]));
#line 488 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_sp_getspeshslot: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 spesh_idx = ins->operands[1].lit_i16;
        //| get_spesh_slot TMP1, spesh_idx;
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 190, Dt12(->effective_spesh_slots), DtB([spesh_idx]), Dt11([dst]));
#line 495 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_setdispatcher: {
        MVMint16 src = ins->operands[0].reg.orig;
        //| mov TMP1, aword WORK[src];
        //| mov aword TC->cur_dispatcher, TMP1;
        dasm_put(Dst, 576, Dt11([src]), Dt10(->cur_dispatcher));
#line 501 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_takedispatcher: {
        MVMint16 dst = ins->operands[0].reg.orig;
        //| mov TMP1, aword TC->cur_dispatcher;
        //| mov aword WORK[dst], TMP1;
        //| mov aword TC->cur_dispatcher, NULL;
        dasm_put(Dst, 585, Dt10(->cur_dispatcher), Dt11([dst]), Dt10(->cur_dispatcher), NULL);
#line 508 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getcode: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMuint16 idx = ins->operands[1].coderef_idx;
        //| mov TMP1, aword CU->body.coderefs;
        //| mov TMP1, aword OBJECTPTR:TMP1[idx];
        //| mov aword WORK[dst], TMP1;
        dasm_put(Dst, 78, Dt13(->body.coderefs), DtB([idx]), Dt11([dst]));
#line 516 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_add_i:
    case MVM_OP_sub_i:
    case MVM_OP_mul_i:
    case MVM_OP_div_i:
    case MVM_OP_mod_i: {
        MVMint32 reg_a = ins->operands[0].reg.orig;
        MVMint32 reg_b = ins->operands[1].reg.orig;
        MVMint32 reg_c = ins->operands[2].reg.orig;
        //| mov rax, WORK[reg_b];
        dasm_put(Dst, 599, Dt11([reg_b]));
#line 527 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_i:
            //| add rax, WORK[reg_c];
            dasm_put(Dst, 604, Dt11([reg_c]));
#line 530 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_i:
            //| sub rax, WORK[reg_c];
            dasm_put(Dst, 609, Dt11([reg_c]));
#line 533 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_i:
            //| imul rax, WORK[reg_c];
            dasm_put(Dst, 614, Dt11([reg_c]));
#line 536 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_i:
        case MVM_OP_mod_i:
            // Convert Quadword to Octoword, i.e. use rax:rdx as one
            // single 16 byte register
            //| cqo; 
            //| idiv qword WORK[reg_c];
            dasm_put(Dst, 620, Dt11([reg_c]));
#line 543 "src/jit/emit_x64.dasc"
            break;
        }
        if (ins->info->opcode == MVM_OP_mod_i) {
            // result of modula is stored in rdx
            //| mov WORK[reg_a], rdx;
            dasm_put(Dst, 628, Dt11([reg_a]));
#line 548 "src/jit/emit_x64.dasc"
        } else {
            // all others in rax
            //| mov WORK[reg_a], rax;
            dasm_put(Dst, 633, Dt11([reg_a]));
#line 551 "src/jit/emit_x64.dasc"
        }
        break;
    }
    case MVM_OP_inc_i: {
         MVMint32 reg = ins->operands[0].reg.orig;
         //| inc qword WORK[reg];
         dasm_put(Dst, 638, Dt11([reg]));
#line 557 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_dec_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        //| dec qword WORK[reg];
        dasm_put(Dst, 644, Dt11([reg]));
#line 562 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_add_n:
    case MVM_OP_sub_n:
    case MVM_OP_mul_n:
    case MVM_OP_div_n: {
        MVMint16 reg_a = ins->operands[0].reg.orig;
        MVMint16 reg_b = ins->operands[1].reg.orig;
        MVMint16 reg_c = ins->operands[2].reg.orig;
        /* Copying data to xmm (floating point) registers requires
         * a special move instruction */
        //| movsd xmm0, qword WORK[reg_b];
        dasm_put(Dst, 650, Dt11([reg_b]));
#line 574 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_n:
            //| addsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 657, Dt11([reg_c]));
#line 577 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_n:
            //| subsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 664, Dt11([reg_c]));
#line 580 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_n:
            //| mulsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 671, Dt11([reg_c]));
#line 583 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_n:
            //| divsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 678, Dt11([reg_c]));
#line 586 "src/jit/emit_x64.dasc"
            break;
        }
        //| movsd qword WORK[reg_a], xmm0;
        dasm_put(Dst, 685, Dt11([reg_a]));
#line 589 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_in: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert simple integer to double precision */
        //| cvtsi2sd xmm0, qword WORK[src];
        //| movsd qword WORK[dst], xmm0;
        dasm_put(Dst, 692, Dt11([src]), Dt11([dst]));
#line 597 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_ni: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert double precision to simple intege */
        //| cvttsd2si rax, qword WORK[src];
        //| mov WORK[dst], rax;
        dasm_put(Dst, 706, Dt11([src]), Dt11([dst]));
#line 605 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_eq_i:
    case MVM_OP_eqaddr:
    case MVM_OP_ne_i:
    case MVM_OP_lt_i:
    case MVM_OP_le_i:
    case MVM_OP_gt_i:
    case MVM_OP_ge_i: {
        MVMint32 reg_a = ins->operands[0].reg.orig;
        MVMint32 reg_b = ins->operands[1].reg.orig;
        MVMint32 reg_c = ins->operands[2].reg.orig;
        //| mov rax, WORK[reg_b];
        dasm_put(Dst, 599, Dt11([reg_b]));
#line 618 "src/jit/emit_x64.dasc"
        /* comparison result in the setting bits in the rflags register */
        //| cmp rax, WORK[reg_c];
        dasm_put(Dst, 718, Dt11([reg_c]));
#line 620 "src/jit/emit_x64.dasc"
        /* copy the right comparison bit to the lower byte of the rax register */
        switch(ins->info->opcode) {
        case MVM_OP_eqaddr:
        case MVM_OP_eq_i:
            //| sete al;
            dasm_put(Dst, 723);
#line 625 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ne_i:
            //| setne al;
            dasm_put(Dst, 727);
#line 628 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_lt_i:
            //| setl al;
            dasm_put(Dst, 731);
#line 631 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_le_i:
            //| setle al;
            dasm_put(Dst, 735);
#line 634 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_gt_i:
            //| setg al;
            dasm_put(Dst, 739);
#line 637 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ge_i:
            //| setge al;
            dasm_put(Dst, 743);
#line 640 "src/jit/emit_x64.dasc"
            break;
        }
        /* zero extend al (lower byte) to rax (whole register) */
        //| movzx rax, al;
        //| mov WORK[reg_a], rax; 
        dasm_put(Dst, 747, Dt11([reg_a]));
#line 645 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_fastcreate: {
        MVMint16 dst       = ins->operands[0].reg.orig;
        MVMuint16 size     = ins->operands[1].lit_i16;
        MVMint16 spesh_idx = ins->operands[2].lit_i16;
        //| mov ARG1, TC;
        //| mov ARG2, size;
        //| callp &MVM_gc_allocate_zeroed;
        //| get_spesh_slot TMP1, spesh_idx;
        //| mov aword OBJECT:RV->st, TMP1;  // st is 64 bit (pointer)
        //| mov word OBJECT:RV->header.size, size; // object size is 16 bit
        //| mov TMP1d, dword TC->thread_id;  // thread id is 32 bit
        //| mov dword OBJECT:RV->header.owner, TMP1d; // does this even work?
        //| mov aword WORK[dst], RV; // store in local register
        dasm_put(Dst, 756, size, (unsigned int)((uintptr_t)&MVM_gc_allocate_zeroed), (unsigned int)(((uintptr_t)&MVM_gc_allocate_zeroed)>>32), Dt12(->effective_spesh_slots), DtB([spesh_idx]), Dt7(->st), Dt7(->header.size), size, Dt10(->thread_id), Dt7(->header.owner), Dt11([dst]));
#line 660 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_decont: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        //| mov TMP5, WORK[src];
        //| test TMP5, TMP5;
        dasm_put(Dst, 803, Dt11([src]));
#line 667 "src/jit/emit_x64.dasc"
        // obj is null
        //| jz >1; 
        //| is_type_object TMP5;
        dasm_put(Dst, 811, Dt7(->header.flags), MVM_CF_TYPE_OBJECT);
#line 670 "src/jit/emit_x64.dasc"
        // object is type object (not concrete)
        //| jnz >1;
        //| mov TMP6, OBJECT:TMP5->st;
        //| mov TMP6, STABLE:TMP6->container_spec;
        //| test TMP6, TMP6;
        dasm_put(Dst, 823, Dt7(->st), Dt9(->container_spec));
#line 675 "src/jit/emit_x64.dasc"
        // container spec is zero
        //| jz >1;
        //| mov ARG1, TC;
        //| mov ARG2, TMP5;      // object
        //| lea ARG3, WORK[dst]; // destination register
        //| mov FUNCTION, CONTAINERSPEC:TMP6->fetch; // get function pointer
        //| callr FUNCTION;
        //| jmp >2;
        //|1:
        dasm_put(Dst, 839, Dt11([dst]), DtC(->fetch));
#line 684 "src/jit/emit_x64.dasc"
        // otherwise just move the object into the register
        //| mov WORK[dst], TMP5;
        //|2:
        dasm_put(Dst, 869, Dt11([dst]));
#line 687 "src/jit/emit_x64.dasc"
        break;
    }
    default:
        MVM_exception_throw_adhoc(tc, "Can't JIT opcode");
    }
}

//|.macro addarg, i, val
//||switch(i) {
//||    case 0:
//|         mov ARG1, val
//||        break;
//||    case 1:
//|         mov ARG2, val
//||        break;
//||    case 2:
//|         mov ARG3, val
//||        break;
//||    case 3:
//|         mov ARG4, val
//||        break;
//|.if not WIN32
//||    case 4:
//|         mov ARG5, val
//||        break;
//||    case 5:
//|         mov ARG6, val
//||        break;
//|.endif
//||    default:
//|         mov TMP6, val;
//|         push TMP6;
//||}
//|.endmacro

//|.macro addarg_f, i, val
//||switch(i) {
//||    case 0:
//|         movd ARG1F, val
//||        break;
//||    case 1:
//|         movd ARG2F, val
//||        break;
//||    case 2:
//|         movd ARG3F, val
//||        break;
//||    case 3:
//|         movd ARG4F, val
//||        break;
//|.if not WIN32
//||    case 4:
//|         movd ARG5F, val
//||        break;
//||    case 5:
//|         movd ARG6F, val
//||        break;
//||    case 6:
//|         movd ARG7F, val
//||        break;
//||    case 7:
//|         movd ARG8F, val
//||        break;
//|.endif
//||    default:
//|         mov TMP6, val;
//|         push TMP6;
//||        break;
//||}
//|.endmacro


/* Call argument decoder */
static void emit_call_arg(MVMThreadContext *tc, MVMJitCallArg arg,
                          MVMint32 i, dasm_State **Dst) {
    switch(arg.type) {
    case MVM_JIT_INTERP_VAR:
        MVM_jit_log(tc, "emit interp call arg %d %d \n", i, arg.v.ivar);
        switch (arg.v.ivar) {
        case MVM_JIT_INTERP_TC:
            //| addarg i, TC;
            switch(i) {
                case 0:
            dasm_put(Dst, 876);
                    break;
                case 1:
            dasm_put(Dst, 881);
                    break;
                case 2:
            dasm_put(Dst, 886);
                    break;
                case 3:
            dasm_put(Dst, 891);
                    break;
                case 4:
            dasm_put(Dst, 896);
                    break;
                case 5:
            dasm_put(Dst, 901);
                    break;
                default:
            dasm_put(Dst, 906);
            }
#line 767 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_INTERP_FRAME:
            //| addarg i, FRAME;
            switch(i) {
                case 0:
            dasm_put(Dst, 913);
                    break;
                case 1:
            dasm_put(Dst, 917);
                    break;
                case 2:
            dasm_put(Dst, 921);
                    break;
                case 3:
            dasm_put(Dst, 173);
                    break;
                case 4:
            dasm_put(Dst, 925);
                    break;
                case 5:
            dasm_put(Dst, 929);
                    break;
                default:
            dasm_put(Dst, 933);
            }
#line 770 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_INTERP_CU:
            //| addarg i, CU;
            switch(i) {
                case 0:
            dasm_put(Dst, 939);
                    break;
                case 1:
            dasm_put(Dst, 944);
                    break;
                case 2:
            dasm_put(Dst, 949);
                    break;
                case 3:
            dasm_put(Dst, 954);
                    break;
                case 4:
            dasm_put(Dst, 959);
                    break;
                case 5:
            dasm_put(Dst, 963);
                    break;
                default:
            dasm_put(Dst, 968);
            }
#line 773 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_INTERP_PARAMS:
            //| lea TMP6, FRAME->params;
            //| addarg i, TMP6;
            dasm_put(Dst, 975, Dt12(->params));
            switch(i) {
                case 0:
            dasm_put(Dst, 982);
                    break;
                case 1:
            dasm_put(Dst, 986);
                    break;
                case 2:
            dasm_put(Dst, 990);
                    break;
                case 3:
            dasm_put(Dst, 994);
                    break;
                case 4:
            dasm_put(Dst, 998);
                    break;
                case 5:
            dasm_put(Dst, 1002);
                    break;
                default:
            dasm_put(Dst, 1006);
            }
#line 777 "src/jit/emit_x64.dasc"
            break;
        }
        break;
    case MVM_JIT_REG_VAL:
        //| addarg i, WORK[arg.v.reg];
        switch(i) {
            case 0:
        dasm_put(Dst, 1012, Dt11([arg.v.reg]));
                break;
            case 1:
        dasm_put(Dst, 1017, Dt11([arg.v.reg]));
                break;
            case 2:
        dasm_put(Dst, 1022, Dt11([arg.v.reg]));
                break;
            case 3:
        dasm_put(Dst, 1027, Dt11([arg.v.reg]));
                break;
            case 4:
        dasm_put(Dst, 1032, Dt11([arg.v.reg]));
                break;
            case 5:
        dasm_put(Dst, 1037, Dt11([arg.v.reg]));
                break;
            default:
        dasm_put(Dst, 1042, Dt11([arg.v.reg]));
        }
#line 782 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_REG_VAL_F:
        //| addarg_f i, qword WORK[arg.v.reg];
        switch(i) {
            case 0:
        dasm_put(Dst, 1049, Dt11([arg.v.reg]));
                break;
            case 1:
        dasm_put(Dst, 1056, Dt11([arg.v.reg]));
                break;
            case 2:
        dasm_put(Dst, 1063, Dt11([arg.v.reg]));
                break;
            case 3:
        dasm_put(Dst, 1070, Dt11([arg.v.reg]));
                break;
            case 4:
        dasm_put(Dst, 1077, Dt11([arg.v.reg]));
                break;
            case 5:
        dasm_put(Dst, 1084, Dt11([arg.v.reg]));
                break;
            case 6:
        dasm_put(Dst, 1091, Dt11([arg.v.reg]));
                break;
            case 7:
        dasm_put(Dst, 1098, Dt11([arg.v.reg]));
                break;
            default:
        dasm_put(Dst, 1042, Dt11([arg.v.reg]));
                break;
        }
#line 785 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_REG_ADDR:
        //| lea TMP6, WORK[arg.v.reg];
        //| addarg i, TMP6;
        dasm_put(Dst, 1105, Dt11([arg.v.reg]));
        switch(i) {
            case 0:
        dasm_put(Dst, 982);
                break;
            case 1:
        dasm_put(Dst, 986);
                break;
            case 2:
        dasm_put(Dst, 990);
                break;
            case 3:
        dasm_put(Dst, 994);
                break;
            case 4:
        dasm_put(Dst, 998);
                break;
            case 5:
        dasm_put(Dst, 1002);
                break;
            default:
        dasm_put(Dst, 1006);
        }
#line 789 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_STR_IDX:
        //| get_string TMP6, arg.v.lit_i64;
        //| addarg i, TMP6;
        dasm_put(Dst, 1110, Dt13(->body.strings), DtA([arg.v.lit_i64]));
        switch(i) {
            case 0:
        dasm_put(Dst, 982);
                break;
            case 1:
        dasm_put(Dst, 986);
                break;
            case 2:
        dasm_put(Dst, 990);
                break;
            case 3:
        dasm_put(Dst, 994);
                break;
            case 4:
        dasm_put(Dst, 998);
                break;
            case 5:
        dasm_put(Dst, 1002);
                break;
            default:
        dasm_put(Dst, 1006);
        }
#line 793 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_LITERAL:
        //| addarg i, arg.v.lit_i64;
        switch(i) {
            case 0:
        dasm_put(Dst, 1119, arg.v.lit_i64);
                break;
            case 1:
        dasm_put(Dst, 1124, arg.v.lit_i64);
                break;
            case 2:
        dasm_put(Dst, 1129, arg.v.lit_i64);
                break;
            case 3:
        dasm_put(Dst, 1134, arg.v.lit_i64);
                break;
            case 4:
        dasm_put(Dst, 1139, arg.v.lit_i64);
                break;
            case 5:
        dasm_put(Dst, 1144, arg.v.lit_i64);
                break;
            default:
        dasm_put(Dst, 1149, arg.v.lit_i64);
        }
#line 796 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_LITERAL_64:
    case MVM_JIT_LITERAL_PTR:
        //| mov64 TMP6, arg.v.lit_i64;
        //| addarg i, TMP6;
        dasm_put(Dst, 1156, (unsigned int)(arg.v.lit_i64), (unsigned int)((arg.v.lit_i64)>>32));
        switch(i) {
            case 0:
        dasm_put(Dst, 982);
                break;
            case 1:
        dasm_put(Dst, 986);
                break;
            case 2:
        dasm_put(Dst, 990);
                break;
            case 3:
        dasm_put(Dst, 994);
                break;
            case 4:
        dasm_put(Dst, 998);
                break;
            case 5:
        dasm_put(Dst, 1002);
                break;
            default:
        dasm_put(Dst, 1006);
        }
#line 801 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_LITERAL_F:
        //| mov64 TMP6, arg.v.lit_i64;
        //| addarg_f i, TMP6;
        dasm_put(Dst, 1156, (unsigned int)(arg.v.lit_i64), (unsigned int)((arg.v.lit_i64)>>32));
        switch(i) {
            case 0:
        dasm_put(Dst, 1161);
                break;
            case 1:
        dasm_put(Dst, 1167);
                break;
            case 2:
        dasm_put(Dst, 1173);
                break;
            case 3:
        dasm_put(Dst, 1179);
                break;
            case 4:
        dasm_put(Dst, 1185);
                break;
            case 5:
        dasm_put(Dst, 1191);
                break;
            case 6:
        dasm_put(Dst, 1198);
                break;
            case 7:
        dasm_put(Dst, 1205);
                break;
            default:
        dasm_put(Dst, 1006);
                break;
        }
#line 805 "src/jit/emit_x64.dasc"
        break;
    }
}


static void emit_posix_callargs(MVMThreadContext *tc, MVMJitGraph *jg,
                                MVMJitCallArg args[], MVMint32 num_args,
                                dasm_State **Dst) {
    MVMint32 num_gpr = 0, num_fpr = 0, num_stack = 0, i;
    MVMJitCallArg in_gpr[6], in_fpr[8], *on_stack;
    on_stack = malloc(sizeof(MVMJitCallArg) * (num_args - 6));
    /* divide in gpr, fpr, stack values */
    for (i = 0; i < num_args; i++) {
        switch (args[i].type) {
        case MVM_JIT_INTERP_VAR:
        case MVM_JIT_REG_VAL:
        case MVM_JIT_REG_ADDR:
        case MVM_JIT_STR_IDX:
        case MVM_JIT_LITERAL:
        case MVM_JIT_LITERAL_64:
        case MVM_JIT_LITERAL_PTR:
            if (num_gpr < 6) {
                in_gpr[num_gpr++] = args[i];
            } else {
                on_stack[num_stack++] = args[i];
            }
            break;
        case MVM_JIT_REG_VAL_F:
        case MVM_JIT_LITERAL_F:
            if (num_fpr < 8) {
                in_fpr[num_fpr++] = args[i];
            } else {
                on_stack[num_stack++] = args[i];
            }
            break;
        }
    }
    for (i = 0; i < num_gpr; i++) {
        emit_call_arg(tc, in_gpr[i], i, Dst);
    }
    for (i = 0; i < num_fpr; i++) {
        emit_call_arg(tc, in_fpr[i], i, Dst);
    }
    /* push right-to-left */
    for (i = num_stack - 1; i >= 0; i--) {
        emit_call_arg(tc, on_stack[i], i + 8, Dst); // always a stack arg
    }
    free(on_stack);
}

static void emit_win64_callargs(MVMThreadContext *tc, MVMJitGraph *jg,
                                MVMJitCallArg args[], MVMint32 num_args,
                                dasm_State **Dst) {
    MVMint32 i;
    /* The difficultiy in win64 call args is handled adequately
     * by the addarg macros. */
    for (i = 0; i < num_args; i++) {
        emit_call_arg(tc, args[i], i, Dst);
    }
}

void MVM_jit_emit_call_c(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitCallC * call_spec, dasm_State **Dst) {

    MVM_jit_log(tc, "emit c call <%d args>\n", call_spec->num_args);
    if (call_spec->has_vargs) {
        MVM_exception_throw_adhoc(tc, "JIT can't handle varargs yet");
    }
    //|.if WIN32;
#line 875 "src/jit/emit_x64.dasc"
    //|.else;
     emit_posix_callargs(tc, jg, call_spec->args, call_spec->num_args, Dst);
    //|.endif
    /* Emit the call. I think we should be able to do something smarter than
     * store the constant into the bytecode, like a data segment. But I'm
     * not sure. */
    //| callp call_spec->func_ptr;
    dasm_put(Dst, 153, (unsigned int)((uintptr_t)call_spec->func_ptr), (unsigned int)(((uintptr_t)call_spec->func_ptr)>>32));
#line 882 "src/jit/emit_x64.dasc"
    /* right, now determine what to do with the return value */
    switch(call_spec->rv_mode) {
    case MVM_JIT_RV_VOID:
        break;
    case MVM_JIT_RV_INT:
    case MVM_JIT_RV_PTR:
        //| mov WORK[call_spec->rv_idx], RV;
        dasm_put(Dst, 633, Dt11([call_spec->rv_idx]));
#line 889 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_NUM:
        //| movsd qword WORK[call_spec->rv_idx], RVF;
        dasm_put(Dst, 685, Dt11([call_spec->rv_idx]));
#line 892 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_DEREF:
        //| mov TMP1, [RV];
        //| mov WORK[call_spec->rv_idx], TMP1;
        dasm_put(Dst, 1212, Dt11([call_spec->rv_idx]));
#line 896 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_ADDR:
        /* store local at address */
        //| mov TMP1, WORK[call_spec->rv_idx];
        //| mov [RV], TMP1;
        dasm_put(Dst, 1220, Dt11([call_spec->rv_idx]));
#line 901 "src/jit/emit_x64.dasc"
        break;
    }
}

void MVM_jit_emit_branch(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitBranch * branch, dasm_State **Dst) {
    MVMSpeshIns *ins = branch->ins;
    MVMint32 name = branch->dest.name;
    /* move gc sync point to the front so as to not have
     * awkward dispatching issues */
    //| gc_sync_point;
    dasm_put(Dst, 1228, Dt10(->gc_status), (unsigned int)((uintptr_t)&MVM_gc_enter_from_interrupt), (unsigned int)(((uintptr_t)&MVM_gc_enter_from_interrupt)>>32));
#line 912 "src/jit/emit_x64.dasc"
    if (ins == NULL || ins->info->opcode == MVM_OP_goto) {
        MVM_jit_log(tc, "emit jump to label %d\n", name);
        if (name == MVM_JIT_BRANCH_EXIT) {
            //| jmp ->exit
            dasm_put(Dst, 1252);
#line 916 "src/jit/emit_x64.dasc"
        } else {
            //| jmp =>(name)
            dasm_put(Dst, 1257, (name));
#line 918 "src/jit/emit_x64.dasc"
        }
    } else {
        MVMint16 reg = ins->operands[0].reg.orig;
        MVM_jit_log(tc, "emit branch <%s> to label %d\n",
                    ins->info->name, name);
        switch(ins->info->opcode) {
        case MVM_OP_if_i:
            //| mov rax, WORK[reg];
            //| test rax, rax;
            //| jnz =>(name); // jump to dynamic label
            dasm_put(Dst, 1261, Dt11([reg]), (name));
#line 928 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_unless_i:
            //| mov rax, WORK[reg];
            //| test rax, rax;
            //| jz =>(name);
            dasm_put(Dst, 1272, Dt11([reg]), (name));
#line 933 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ifnonnull:
            //| mov TMP1, WORK[reg];
            //| test TMP1, TMP1;
            //| jz >1;
            //| get_vmnull TMP2;
            //| cmp TMP1, TMP2;
            //| je >1;
            //| jmp =>(name);
            //|1:
            dasm_put(Dst, 1283, Dt11([reg]), Dt10(->instance), Dt6(->VMNull), (name));
#line 943 "src/jit/emit_x64.dasc"
            break;
        default:
            MVM_exception_throw_adhoc(tc, "JIT: Can't handle conditional <%s>",
                                      ins->info->name);
        }
    }
}

void MVM_jit_emit_label(MVMThreadContext *tc, MVMJitGraph *jg,
                        MVMJitLabel *label, dasm_State **Dst) {
    //| =>(label->name):
    dasm_put(Dst, 251, (label->name));
#line 954 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_guard(MVMThreadContext *tc, MVMJitGraph *jg,
                        MVMJitGuard *guard, dasm_State **Dst) {
    MVMint16 op        = guard->ins->info->opcode;
    MVMint16 obj       = guard->ins->operands[0].lit_i16;
    MVMint16 spesh_idx = guard->ins->operands[1].lit_i16;
    MVM_jit_log(tc, "emit guard <%s>\n", guard->ins->info->name);
    /* load object and spesh slot value */
    //| mov TMP1, WORK[obj];
    //| get_spesh_slot TMP2, spesh_idx;
    dasm_put(Dst, 1315, Dt11([obj]), Dt12(->effective_spesh_slots), DtB([spesh_idx]));
#line 965 "src/jit/emit_x64.dasc"
    if (op == MVM_OP_sp_guardtype) {
        /* object in queston should be a type object, so it shouldn't
         * be zero, should not be concrete, and the STABLE should be
         * equal to the value in the spesh slot */
        /* check for null */
        //| cmp TMP1, 0;
        //| je >1;
        dasm_put(Dst, 1330);
#line 972 "src/jit/emit_x64.dasc"
        /* check if type object (not concrete) */
        //| is_type_object TMP1;
        dasm_put(Dst, 1340, Dt7(->header.flags), MVM_CF_TYPE_OBJECT);
#line 974 "src/jit/emit_x64.dasc"
        /* if zero, this is a concrete object, and we should deopt */
        //| jz >1;
        dasm_put(Dst, 1335);
#line 976 "src/jit/emit_x64.dasc"
        /* get stable and compare */
        //| cmp TMP2, OBJECT:TMP1->st;
        //| jne >1;
        dasm_put(Dst, 1347, Dt7(->st));
#line 979 "src/jit/emit_x64.dasc"
        /* we're good, no need to deopt */
    } else if (op == MVM_OP_sp_guardconc) {
        /* object should be a non-null concrete (non-type) object */
        //| cmp TMP1, 0;
        //| je >1;
        dasm_put(Dst, 1330);
#line 984 "src/jit/emit_x64.dasc"
        /* shouldn't be type object */
        //| is_type_object TMP1;
        //| jnz >1;
        dasm_put(Dst, 1356, Dt7(->header.flags), MVM_CF_TYPE_OBJECT);
#line 987 "src/jit/emit_x64.dasc"
        /* should have our stable */
        //| cmp TMP2, OBJECT:TMP1->st;
        //| jne >1;
        dasm_put(Dst, 1347, Dt7(->st));
#line 990 "src/jit/emit_x64.dasc"
    }
    /* if we're here, we didn't jump to deopt, so skip it */
    //| jmp >2;
    //|1:
    dasm_put(Dst, 862);
#line 994 "src/jit/emit_x64.dasc"
    /* emit deopt */
    //| mov ARG1, TC;
    //| mov ARG2, guard->deopt_offset;
    //| mov ARG3, guard->deopt_target;
    //| callp &MVM_spesh_deopt_one_direct;
    dasm_put(Dst, 1367, guard->deopt_offset, guard->deopt_target, (unsigned int)((uintptr_t)&MVM_spesh_deopt_one_direct), (unsigned int)(((uintptr_t)&MVM_spesh_deopt_one_direct)>>32));
#line 999 "src/jit/emit_x64.dasc"
    /* tell jit driver we're deopting */
    //| mov RV, MVM_JIT_CTRL_DEOPT
    //| jmp ->out;
    //|2:
    dasm_put(Dst, 1388, MVM_JIT_CTRL_DEOPT);
#line 1003 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_invoke(MVMThreadContext *tc, MVMJitGraph *jg, MVMJitInvoke *invoke,
                         dasm_State **Dst) {
    MVMint16 i;
    /* setup the callsite */
    //| mov ARG1, TC;
    //| mov ARG2, CU;
    //| mov ARG3, invoke->callsite_idx;
    //| callp &MVM_args_prepare;
    //| mov TMP6, RV; // store callsite in tmp6, which we don't use until the end
    dasm_put(Dst, 1399, invoke->callsite_idx, (unsigned int)((uintptr_t)&MVM_args_prepare), (unsigned int)(((uintptr_t)&MVM_args_prepare)>>32));
#line 1014 "src/jit/emit_x64.dasc"
    /* Store arguments in the buffer. I use TMP5 as it never conflicts
     * with argument passing (like TMP6, but unlike other TMP regs) */
    //| mov TMP5, FRAME->args;
    dasm_put(Dst, 1423, Dt12(->args));
#line 1017 "src/jit/emit_x64.dasc"
    for (i = 0;  i < invoke->arg_count; i++) {
        MVMSpeshIns *ins = invoke->arg_ins[i];
        switch (ins->info->opcode) {
        case MVM_OP_arg_i:
        case MVM_OP_arg_s:
        case MVM_OP_arg_n:
        case MVM_OP_arg_o: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint16 src = ins->operands[1].reg.orig;
            //| mov TMP4, WORK[src];
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1430, Dt11([src]), Dt1([dst]));
#line 1028 "src/jit/emit_x64.dasc"
            break;
        }
        case MVM_OP_argconst_n:
        case MVM_OP_argconst_i: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint64 val = ins->operands[1].lit_i64;
            //| mov64 TMP4, val;
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1439, (unsigned int)(val), (unsigned int)((val)>>32), Dt1([dst]));
#line 1036 "src/jit/emit_x64.dasc"
            break;
        }
        case MVM_OP_argconst_s: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint32 idx = ins->operands[1].lit_str_idx;
            //| get_string TMP4, idx;
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1448, Dt13(->body.strings), DtA([idx]), Dt1([dst]));
#line 1043 "src/jit/emit_x64.dasc"
            break;
        }
        default:
            MVM_exception_throw_adhoc(tc, "JIT invoke: Can't add arg <%s>",
                                      ins->info->name);
        }
    }

    /* Setup the frame for returning to our current position */
    if (sizeof(MVMReturnType) == 4) {
        //| mov dword FRAME->return_type, invoke->return_type;
        dasm_put(Dst, 1461, Dt12(->return_type), invoke->return_type);
#line 1054 "src/jit/emit_x64.dasc"
    } else {
        MVM_exception_throw_adhoc(tc, "JIT: MVMReturnType has unexpected size");
    }
    /* The register for our return value */
    if (invoke->return_type == MVM_RETURN_VOID) {
        //| mov aword FRAME->return_value, NULL;
        dasm_put(Dst, 1469, Dt12(->return_value), NULL);
#line 1060 "src/jit/emit_x64.dasc"
    } else {
        //| lea TMP2, WORK[invoke->return_register];
        //| mov aword FRAME->return_value, TMP2;
        dasm_put(Dst, 1477, Dt11([invoke->return_register]), Dt12(->return_value));
#line 1063 "src/jit/emit_x64.dasc"
    }
    /* The return address for the interpreter */
    //| get_cur_op TMP2;
    //| mov aword FRAME->return_address, TMP2;
    dasm_put(Dst, 1488, Dt10(->interp_cur_op), Dt12(->return_address));
#line 1067 "src/jit/emit_x64.dasc"

    /* The re-entry label for the JIT, so that we continue in the next BB */
    //| lea TMP2, [=>(invoke->reentry_label)];
    //| mov aword FRAME->jit_entry_label, TMP2;
    dasm_put(Dst, 1502, (invoke->reentry_label), Dt12(->jit_entry_label));
#line 1071 "src/jit/emit_x64.dasc"

    /* if we're not fast, then we should get the code from multi resolution */
    if (!invoke->is_fast) {
        /* first, save callsite and args */
        //| push TMP5; // args
        //| push TMP6; // callsite
        dasm_put(Dst, 1513);
#line 1077 "src/jit/emit_x64.dasc"
        /* setup call MVM_frame_multi_ok(tc, code, &cur_callsite, args); */
        //| mov ARG1, TC;
        //| mov ARG2, WORK[invoke->code_register]; // code object
        //| mov ARG3, rsp; // basically, [rsp] == TMP6 == &cur_callsite
        //| mov ARG4, TMP5; // args
        //| callp &MVM_frame_find_invokee_multi_ok;
        dasm_put(Dst, 1518, Dt11([invoke->code_register]), (unsigned int)((uintptr_t)&MVM_frame_find_invokee_multi_ok), (unsigned int)(((uintptr_t)&MVM_frame_find_invokee_multi_ok)>>32));
#line 1083 "src/jit/emit_x64.dasc"
        /* restore callsite, args, RV now holds code object */
        //| pop TMP6; // callsite
        //| pop TMP5; // args
        dasm_put(Dst, 1541);
#line 1086 "src/jit/emit_x64.dasc"
        /* setup args for call to invoke(tc, code, cur_callsite, args) */
        //| mov ARG1, TC;
        //| mov ARG2, RV;   // code object
        //| mov ARG3, TMP6; // cur_callsite
        //| mov ARG4, TMP5; // nb - this could be pop ARG4, but that would be confusing
        dasm_put(Dst, 1546);
#line 1091 "src/jit/emit_x64.dasc"
        /* get the actual function */
        //| mov FUNCTION, OBJECT:RV->st;
        //| mov FUNCTION, STABLE:FUNCTION->invoke;
        //| callr FUNCTION;
        dasm_put(Dst, 1560, Dt7(->st), Dt9(->invoke));
#line 1095 "src/jit/emit_x64.dasc"
    } else {
        /* call MVM_frame_invoke_code */
        //| mov ARG1, TC;
        //| mov ARG2, WORK[invoke->code_register];
        //| mov ARG3, TMP6; // this is the callsite object
        //| mov ARG4, invoke->spesh_cand;
        //| callp &MVM_frame_invoke_code;
        dasm_put(Dst, 1573, Dt11([invoke->code_register]), invoke->spesh_cand, (unsigned int)((uintptr_t)&MVM_frame_invoke_code), (unsigned int)(((uintptr_t)&MVM_frame_invoke_code)>>32));
#line 1102 "src/jit/emit_x64.dasc"
    }
    /* Almost done. jump out into the interprete */
    //| mov RV, 1;
    //| jmp ->out;
    dasm_put(Dst, 1597);
#line 1106 "src/jit/emit_x64.dasc"
}


void MVM_jit_emit_control(MVMThreadContext *tc, MVMJitGraph *jg,
                          MVMJitControl *ctrl, dasm_State **Dst) {
    if (ctrl->type == MVM_JIT_CONTROL_INVOKISH) {
        //| cmp FRAME, TC->cur_frame;
        //| je >1;
        //| lea TMP1, [>1];
        //| mov aword FRAME->jit_entry_label, TMP1;
        //| mov RV, 1;
        //| jmp ->out;
        //|1:
        dasm_put(Dst, 1609, Dt10(->cur_frame), Dt12(->jit_entry_label));
#line 1119 "src/jit/emit_x64.dasc"
    } else if (ctrl->type == MVM_JIT_CONTROL_BREAKPOINT) {
        //| int 3;
        dasm_put(Dst, 1642);
#line 1121 "src/jit/emit_x64.dasc"
    } else {
        MVM_exception_throw_adhoc(tc, "Unknown contol code: <%s>",
                                  ctrl->ins->info->name);
    }
}