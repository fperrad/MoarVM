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
static const unsigned char actions[761] = {
  85,72,137,229,255,65,86,83,65,84,65,85,255,73,137,252,254,72,139,158,233,
  76,139,166,233,76,139,174,233,255,248,10,255,65,93,65,92,91,65,94,255,72,
  137,252,236,93,195,255,72,185,237,237,72,137,139,233,255,72,199,131,233,237,
  255,73,139,142,233,72,139,9,72,139,137,233,72,139,137,233,72,137,139,233,
  255,73,139,142,233,72,139,137,233,72,137,139,233,255,72,139,139,233,72,139,
  137,233,255,73,139,142,233,255,144,72,139,137,233,255,72,139,145,233,255,
  72,139,146,233,255,72,133,210,15,133,244,247,255,82,81,255,76,137,252,247,
  72,139,116,36,8,72,199,194,237,73,186,237,237,65,252,255,210,255,72,131,196,
  16,255,72,137,194,248,1,255,72,137,147,233,255,72,139,137,233,72,139,147,
  233,72,137,145,233,255,73,139,140,253,36,233,72,137,139,233,255,72,139,139,
  233,72,141,137,233,72,131,185,233,0,255,15,132,244,247,72,139,137,233,255,
  72,131,252,249,0,255,15,133,244,248,255,73,139,142,233,72,139,137,233,248,
  2,255,72,139,139,233,72,139,147,233,76,141,129,233,73,131,184,233,0,15,132,
  244,247,77,139,128,233,248,1,255,102,252,247,129,233,236,15,132,244,248,72,
  131,252,250,0,15,132,244,248,255,102,252,247,130,233,236,15,133,244,248,82,
  65,80,76,137,252,247,255,72,139,179,233,73,186,237,237,65,252,255,210,65,
  88,90,248,2,255,73,137,144,233,255,72,139,139,233,72,137,139,233,255,72,139,
  131,233,255,72,3,131,233,255,72,43,131,233,255,72,15,175,131,233,255,72,153,
  72,252,247,187,233,255,72,137,131,233,255,72,252,255,131,233,255,72,252,255,
  139,233,255,252,242,15,16,131,233,255,252,242,15,88,131,233,255,252,242,15,
  92,131,233,255,252,242,15,89,131,233,255,252,242,15,94,131,233,255,252,242,
  15,17,131,233,255,252,242,72,15,42,131,233,252,242,15,17,131,233,255,252,
  242,72,15,44,131,233,72,137,131,233,255,72,59,131,233,255,15,148,208,255,
  15,149,208,255,15,156,208,255,15,158,208,255,15,159,208,255,15,157,208,255,
  72,15,182,192,72,137,131,233,255,72,139,189,233,255,72,139,181,233,255,72,
  139,149,233,255,72,139,141,233,255,76,139,133,233,255,76,139,141,233,255,
  76,137,252,246,255,76,137,252,242,255,76,137,252,241,255,77,137,252,240,255,
  77,137,252,241,255,73,139,190,233,255,73,139,182,233,255,73,139,150,233,255,
  77,139,134,233,255,77,139,142,233,255,73,139,134,233,255,72,139,56,255,72,
  139,48,255,72,139,16,255,72,139,8,255,76,139,0,255,76,139,8,255,72,139,187,
  233,255,72,139,179,233,255,72,139,147,233,255,72,139,139,233,255,76,139,131,
  233,255,76,139,139,233,255,252,242,15,16,139,233,255,252,242,15,16,147,233,
  255,252,242,15,16,155,233,255,252,242,15,16,163,233,255,252,242,15,16,171,
  233,255,252,242,15,16,179,233,255,252,242,15,16,187,233,255,72,199,199,237,
  255,72,199,198,237,255,72,199,194,237,255,72,199,193,237,255,73,199,192,237,
  255,73,199,193,237,255,252,233,244,10,255,252,233,245,255,72,139,131,233,
  72,133,192,15,133,245,255,72,139,131,233,72,133,192,15,132,245,255,249,255,
  72,139,8,72,137,139,233,255,72,139,139,233,72,137,8,255
};

#line 8 "src/jit/emit_x64.dasc"
//|.section code
#define DASM_SECTION_CODE	0
#define DASM_MAXSECTION		1
#line 9 "src/jit/emit_x64.dasc"
//|.globals JIT_LABEL_
enum {
  JIT_LABEL_exit,
  JIT_LABEL__MAX
};
#line 10 "src/jit/emit_x64.dasc"

/* Static allocation of relevant types to registers. I pick
 * callee-save registers for efficiency. It is likely we'll be calling
 * quite a C functions, and this saves us the trouble of storing
 * them. Moreover, C compilers preferentially do not use callee-saved
 * registers, and so in most cases, these won't be touched at all. */
//|.type TC, MVMThreadContext, r14
#define Dt1(_V) (int)(ptrdiff_t)&(((MVMThreadContext *)0)_V)
#line 17 "src/jit/emit_x64.dasc"
//|.type FRAME, MVMFrame
#define Dt2(_V) (int)(ptrdiff_t)&(((MVMFrame *)0)_V)
#line 18 "src/jit/emit_x64.dasc"
//|.type REGISTER, MVMRegister
#define Dt3(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 19 "src/jit/emit_x64.dasc"
//|.type ARGCTX, MVMArgProcContext
#define Dt4(_V) (int)(ptrdiff_t)&(((MVMArgProcContext *)0)_V)
#line 20 "src/jit/emit_x64.dasc"
//|.type STATICFRAME, MVMStaticFrame
#define Dt5(_V) (int)(ptrdiff_t)&(((MVMStaticFrame *)0)_V)
#line 21 "src/jit/emit_x64.dasc"
//|.type COMPUNIT, MVMCompUnit
#define Dt6(_V) (int)(ptrdiff_t)&(((MVMCompUnit *)0)_V)
#line 22 "src/jit/emit_x64.dasc"
//|.type CUBODY, MVMCompUnitBody
#define Dt7(_V) (int)(ptrdiff_t)&(((MVMCompUnitBody *)0)_V)
#line 23 "src/jit/emit_x64.dasc"
//|.type P6OPAQUE, MVMP6opaque
#define Dt8(_V) (int)(ptrdiff_t)&(((MVMP6opaque *)0)_V)
#line 24 "src/jit/emit_x64.dasc"
//|.type P6OBODY, MVMP6opaqueBody
#define Dt9(_V) (int)(ptrdiff_t)&(((MVMP6opaqueBody *)0)_V)
#line 25 "src/jit/emit_x64.dasc"
//|.type MVMINSTANCE, MVMInstance
#define DtA(_V) (int)(ptrdiff_t)&(((MVMInstance *)0)_V)
#line 26 "src/jit/emit_x64.dasc"
//|.type OBJECT, MVMObject
#define DtB(_V) (int)(ptrdiff_t)&(((MVMObject *)0)_V)
#line 27 "src/jit/emit_x64.dasc"
//|.type COLLECTABLE, MVMCollectable
#define DtC(_V) (int)(ptrdiff_t)&(((MVMCollectable *)0)_V)
#line 28 "src/jit/emit_x64.dasc"
//|.type STABLE, MVMSTable
#define DtD(_V) (int)(ptrdiff_t)&(((MVMSTable *)0)_V)
#line 29 "src/jit/emit_x64.dasc"
//|.type STRING, MVMString*
#define DtE(_V) (int)(ptrdiff_t)&(((MVMString* *)0)_V)
#line 30 "src/jit/emit_x64.dasc"
//|.type U16, MVMuint16
#define DtF(_V) (int)(ptrdiff_t)&(((MVMuint16 *)0)_V)
#line 31 "src/jit/emit_x64.dasc"
//|.type U32, MVMuint32
#define Dt10(_V) (int)(ptrdiff_t)&(((MVMuint32 *)0)_V)
#line 32 "src/jit/emit_x64.dasc"
//|.type U64, MVMuint64
#define Dt11(_V) (int)(ptrdiff_t)&(((MVMuint64 *)0)_V)
#line 33 "src/jit/emit_x64.dasc"

/* 'alternative base pointer. I'll be using this often, so picking rbx
 * here rather than the extended registers will likely lead to smaller
 * bytecode */
//|.type WORK, MVMRegister, rbx
#define Dt12(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 38 "src/jit/emit_x64.dasc"
//|.type ARGS, MVMRegister, r12
#define Dt13(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 39 "src/jit/emit_x64.dasc"
//|.type ENV,  MVMRegister, r13
#define Dt14(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 40 "src/jit/emit_x64.dasc"


//|.macro saveregs
//| push TC; push WORK; push ARGS; push ENV
//|.endmacro

//|.macro restoreregs
//| pop ENV; pop ARGS; pop WORK; pop TC
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

/* return value */
//|.define RV, rax
//|.define RVF, xmm0

//|.macro callp, funcptr
//| mov64 FUNCTION, (uintptr_t)funcptr
//|.if WIN32
//| sub rsp, 32
//| call FUNCTION
//| add rsp, 32
//|.else
//| call FUNCTION
//|.endif
//|.endmacro

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
//||        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
//||}
//|.endmacro

//|.macro addarg_f, i, val
//||switch(i) {
//||    case 0:
//|         movsd ARG1F, qword val
//||        break;
//||    case 1:
//|         movsd ARG2F, qword val
//||        break;
//||    case 2:
//|         movsd ARG3F, qword val
//||        break;
//||    case 3:
//|         movsd ARG4F, qword val
//||        break;
//|.if not WIN32
//||    case 4:
//|         movsd ARG5F, qword val
//||        break;
//||    case 5:
//|         movsd ARG6F, qword val
//||        break;
//||    case 6:
//|         movsd ARG7F, qword val
//||        break;
//||    case 7:
//|         movsd ARG8F, qword val
//||        break;
//|.endif
//||    default:
//||        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
//||}
//|.endmacro

/* A function prologue is always the same in x86 / x64, becuase
 * we do not provide variable arguments, instead arguments are provided
 * via a frame. All JIT entry points receive a prologue. */
void MVM_jit_emit_prologue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    /* Setup stack */
    //| push rbp
    //| mov rbp, rsp
    dasm_put(Dst, 0);
#line 191 "src/jit/emit_x64.dasc"
    /* save callee-save registers */
    //| saveregs
    dasm_put(Dst, 5);
#line 193 "src/jit/emit_x64.dasc"
    /* setup special frame variables */
    //| mov TC,   ARG1
    //| mov WORK, FRAME:ARG2->work
    //| mov ARGS, FRAME:ARG2->params.args
    //| mov ENV,  FRAME:ARG2->env
    dasm_put(Dst, 13, Dt2(->work), Dt2(->params.args), Dt2(->env));
#line 198 "src/jit/emit_x64.dasc"
}

/* And a function epilogue is also always the same */
void MVM_jit_emit_epilogue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    //| ->exit:
    dasm_put(Dst, 30);
#line 204 "src/jit/emit_x64.dasc"
    /* restore callee-save registers */
    //| restoreregs
    dasm_put(Dst, 33);
#line 206 "src/jit/emit_x64.dasc"
    /* Restore stack */
    //| mov rsp, rbp
    //| pop rbp
    //| ret
    dasm_put(Dst, 41);
#line 210 "src/jit/emit_x64.dasc"
}

static MVMuint64 try_emit_gen2_ref(MVMThreadContext *tc, MVMJitGraph *jg,
                                   MVMObject *obj, MVMint16 reg, 
                                   dasm_State **Dst) {
    if (!(obj->header.flags & MVM_CF_SECOND_GEN))
        return 0;
    //| mov64 TMP1, (uintptr_t)obj;
    //| mov WORK[reg], TMP1;
    dasm_put(Dst, 48, (unsigned int)((uintptr_t)obj), (unsigned int)(((uintptr_t)obj)>>32), Dt12([reg]));
#line 219 "src/jit/emit_x64.dasc"
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
        dasm_put(Dst, 57, Dt12([reg]), val);
#line 238 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_i64: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMint64 val = ins->operands[1].lit_i64;
        //| mov64 TMP1, val;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 48, (unsigned int)(val), (unsigned int)((val)>>32), Dt12([reg]));
#line 245 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_n64: {
        MVM_jit_log(tc, "store const %f\n", ins->operands[1].lit_n64);
        MVMint16 reg = ins->operands[0].reg.orig;
        MVMint64 valbytes = ins->operands[1].lit_i64;
        //| mov64 TMP1, valbytes;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 48, (unsigned int)(valbytes), (unsigned int)((valbytes)>>32), Dt12([reg]));
#line 253 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_s: {
         MVMint16 reg = ins->operands[0].reg.orig;
         MVMuint32 idx = ins->operands[1].lit_str_idx;
         MVMStaticFrame *sf = jg->spesh->sf;
         MVMString * s = sf->body.cu->body.strings[idx];
         if (!try_emit_gen2_ref(tc, jg, (MVMObject*)s, reg, Dst)) {
             //| mov TMP1, TC->interp_cu;               // pointer to pointer
             //| mov TMP1, [TMP1];                      // pointer
             //| mov TMP1, COMPUNIT:TMP1->body.strings; // get strings array
             //| mov TMP1, STRING:TMP1[idx];
             //| mov WORK[reg], TMP1;
             dasm_put(Dst, 63, Dt1(->interp_cu), Dt6(->body.strings), DtE([idx]), Dt12([reg]));
#line 266 "src/jit/emit_x64.dasc"
         }
         break;
    }
    case MVM_OP_null: {
        MVMint16 reg = ins->operands[0].reg.orig;
        //| mov TMP1, TC->instance;
        //| mov TMP1, MVMINSTANCE:TMP1->VMNull;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 83, Dt1(->instance), DtA(->VMNull), Dt12([reg]));
#line 274 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_gethow:
    case MVM_OP_getwhat: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[0].reg.orig;
        //| mov TMP1, WORK[obj];
        //| mov TMP1, OBJECT:TMP1->st;
        dasm_put(Dst, 96, Dt12([obj]), DtB(->st));
#line 282 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_gethow) {
            //| mov TMP1, STABLE:TMP1->HOW;
            dasm_put(Dst, 100, DtD(->HOW));
#line 284 "src/jit/emit_x64.dasc"
        } else {
            //| mov TMP1, STABLE:TMP1->WHAT;
            dasm_put(Dst, 100, DtD(->WHAT));
#line 286 "src/jit/emit_x64.dasc"
        }
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 52, Dt12([dst]));
#line 288 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getlex: {
        MVMint16 *lexical_types;
        MVMStaticFrame * sf = jg->spesh->sf;
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 idx = ins->operands[1].lex.idx;
        MVMint16 out = ins->operands[1].lex.outers;
        MVMint16 i;
        //| mov TMP1, TC->cur_frame;
        dasm_put(Dst, 105, Dt1(->cur_frame));
#line 298 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            /* I'm going to skip compiling the check whether the outer
             * node really exists, because if the code has run N times
             * correctly, then the outer frame must have existed then, 
             * and since this chain is static, it should still exist now.
             * If it doesn't exist, that means we crash. */
            //| nop;
            //| mov TMP1, FRAME:TMP1->outer;
            dasm_put(Dst, 110, Dt2(->outer));
#line 306 "src/jit/emit_x64.dasc"
            sf = sf->body.outer;
        }
        /* get array of lexicals */
        //| mov TMP2, FRAME:TMP1->env;
        dasm_put(Dst, 116, Dt2(->env));
#line 310 "src/jit/emit_x64.dasc"
        /* read value */
        //| mov TMP2, REGISTER:TMP2[idx];
        dasm_put(Dst, 121, Dt3([idx]));
#line 312 "src/jit/emit_x64.dasc"
        lexical_types = (jg->spesh->lexical_types ? jg->spesh->lexical_types :
                         sf->body.lexical_types);
        if (lexical_types[idx] == MVM_reg_obj) { 
           /* NB: this code path hasn't been checked. */
            /* if it is zero, check if we need to auto-vivify */        
            //| test TMP2, TMP2;
            //| jnz >1; 
            dasm_put(Dst, 126);
#line 319 "src/jit/emit_x64.dasc"
            /* save frame and value */
            //| push TMP2;
            //| push TMP1;
            dasm_put(Dst, 134);
#line 322 "src/jit/emit_x64.dasc"
            /* setup args */
            //| mov ARG1, TC;
            //| mov ARG2, [rsp+8]; // the frame, which i just pushed
            //| mov ARG3, idx;
            //| callp &MVM_frame_vivify_lexical;
            dasm_put(Dst, 137, idx, (unsigned int)((uintptr_t)&MVM_frame_vivify_lexical), (unsigned int)(((uintptr_t)&MVM_frame_vivify_lexical)>>32));
#line 327 "src/jit/emit_x64.dasc"
            /* restore stack pointer */
            //| add rsp, 16;
            dasm_put(Dst, 159);
#line 329 "src/jit/emit_x64.dasc"
            /* use return value for the result */
            //| mov TMP2, RV;
            //|1:
            dasm_put(Dst, 164);
#line 332 "src/jit/emit_x64.dasc"
        } 
        /* store the value */
        //| mov WORK[dst], TMP2;
        dasm_put(Dst, 170, Dt12([dst]));
#line 335 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_bindlex: {
        MVMint16 idx = ins->operands[0].lex.idx;
        MVMint16 out = ins->operands[0].lex.outers;
        MVMint16 src = ins->operands[1].reg.orig;
        MVMint16 i;
        //| mov TMP1, TC->cur_frame;
        dasm_put(Dst, 105, Dt1(->cur_frame));
#line 343 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            //| mov TMP1, FRAME:TMP1->outer;
            dasm_put(Dst, 100, Dt2(->outer));
#line 345 "src/jit/emit_x64.dasc"
        }
        //| mov TMP1, FRAME:TMP1->env;
        //| mov TMP2, WORK[src];
        //| mov REGISTER:TMP1[idx], TMP2;
        dasm_put(Dst, 175, Dt2(->env), Dt12([src]), Dt3([idx]));
#line 349 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_getarg_o:
    case MVM_OP_sp_getarg_n:
    case MVM_OP_sp_getarg_s:
    case MVM_OP_sp_getarg_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMuint16 idx = ins->operands[1].callsite_idx;
        //| mov TMP1, ARGS[idx];
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 188, Dt13([idx]), Dt12([reg]));
#line 359 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6oget_i:
    case MVM_OP_sp_p6oget_n:
    case MVM_OP_sp_p6oget_s:
    case MVM_OP_sp_p6oget_o: {
        MVMint16 dst    = ins->operands[0].reg.orig;
        MVMint16 obj    = ins->operands[1].reg.orig;
        MVMint16 offset = ins->operands[2].callsite_idx;
        //| mov TMP1, WORK[obj];
        //| lea TMP1, P6OPAQUE:TMP1->body;
        //| cmp qword P6OBODY:TMP1->replaced, 0;
        dasm_put(Dst, 199, Dt12([obj]), Dt8(->body), Dt9(->replaced));
#line 371 "src/jit/emit_x64.dasc"
        /* if not zero then load replacement data pointer */
        //| je >1;
        //| mov TMP1, P6OBODY:TMP1->replaced;
        dasm_put(Dst, 213, Dt9(->replaced));
#line 374 "src/jit/emit_x64.dasc"
        /* otherwise do nothing (i.e. the body is our data pointer) */
        //|1:
        dasm_put(Dst, 167);
#line 376 "src/jit/emit_x64.dasc"
        /* load our value */
        //| mov TMP1, [TMP1 + offset];
        dasm_put(Dst, 100, offset);
#line 378 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_sp_p6oget_o) {
            /* transform null object pointers to VMNull */
            //| cmp TMP1, 0;
            dasm_put(Dst, 222);
#line 381 "src/jit/emit_x64.dasc"
            /* not-null? done */
            //| jne >2;
            dasm_put(Dst, 228);
#line 383 "src/jit/emit_x64.dasc"
            /* store VMNull instead */
            //| mov TMP1, TC->instance;
            //| mov TMP1, MVMINSTANCE:TMP1->VMNull;
            //|2:
            dasm_put(Dst, 233, Dt1(->instance), DtA(->VMNull));
#line 387 "src/jit/emit_x64.dasc"
        }
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 52, Dt12([dst]));
#line 389 "src/jit/emit_x64.dasc"
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
        dasm_put(Dst, 244, Dt12([obj]), Dt12([val]), Dt8(->body), Dt9(->replaced), Dt9(->replaced));
#line 405 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_sp_p6obind_o) {
            /* this is an assembly-version of MVM_gc_write_barrier
             * TMP1 is root, TMP2 is referenced value. And yes, this
             * should be factored out */
            // is our root second gen?
            //| test word COLLECTABLE:TMP1->flags, MVM_CF_SECOND_GEN; 
            //| jz >2; // if not, skip
            //| cmp TMP2, 0; // is value non-null? (should be)
            //| je >2; // if not, skip
            dasm_put(Dst, 272, DtC(->flags), MVM_CF_SECOND_GEN);
#line 414 "src/jit/emit_x64.dasc"
            // is the reference second gen?
            //| test word COLLECTABLE:TMP2->flags, MVM_CF_SECOND_GEN; 
            //| jnz >2;  // if so, skip
            //| push TMP2; // store value
            //| push TMP3; // store body pointer
            //| mov ARG1, TC;  // set tc as first argument
            dasm_put(Dst, 292, DtC(->flags), MVM_CF_SECOND_GEN);
#line 420 "src/jit/emit_x64.dasc"
            // NB, c call arguments arguments clobber our temporary
            // space (depending on ABI), so I reload the work object
            // from register space 
            //| mov ARG2, WORK[obj]; // object as second
            //| callp &MVM_gc_write_barrier_hit; // call our function
            //| pop TMP3; // restore body pointer
            //| pop TMP2; // restore value
            //|2: // done
            dasm_put(Dst, 310, Dt12([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 428 "src/jit/emit_x64.dasc"
        }
        //| mov [TMP3+offset], TMP2; // store value into body
        dasm_put(Dst, 328, offset);
#line 430 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getwhere:
    case MVM_OP_set: {
         MVMint32 reg1 = ins->operands[0].reg.orig;
         MVMint32 reg2 = ins->operands[1].reg.orig;
         //| mov TMP1, WORK[reg2]
         //| mov WORK[reg1], TMP1
         dasm_put(Dst, 333, Dt12([reg2]), Dt12([reg1]));
#line 438 "src/jit/emit_x64.dasc"
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
        dasm_put(Dst, 342, Dt12([reg_b]));
#line 450 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_i:
            //| add rax, WORK[reg_c];
            dasm_put(Dst, 347, Dt12([reg_c]));
#line 453 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_i:
            //| sub rax, WORK[reg_c];
            dasm_put(Dst, 352, Dt12([reg_c]));
#line 456 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_i:
            //| imul rax, WORK[reg_c];
            dasm_put(Dst, 357, Dt12([reg_c]));
#line 459 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_i:
        case MVM_OP_mod_i:
            // Convert Quadword to Octoword, i.e. use rax:rdx as one
            // single 16 byte register
            //| cqo; 
            //| idiv qword WORK[reg_c];
            dasm_put(Dst, 363, Dt12([reg_c]));
#line 466 "src/jit/emit_x64.dasc"
            break;
        }
        if (ins->info->opcode == MVM_OP_mod_i) {
            // result of modula is stored in rdx
            //| mov WORK[reg_a], rdx;
            dasm_put(Dst, 170, Dt12([reg_a]));
#line 471 "src/jit/emit_x64.dasc"
        } else {
            // all others in rax
            //| mov WORK[reg_a], rax;
            dasm_put(Dst, 371, Dt12([reg_a]));
#line 474 "src/jit/emit_x64.dasc"
        }
        break;
    }
    case MVM_OP_inc_i: {
         MVMint32 reg = ins->operands[0].reg.orig;
         //| inc qword WORK[reg];
         dasm_put(Dst, 376, Dt12([reg]));
#line 480 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_dec_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        //| dec qword WORK[reg];
        dasm_put(Dst, 382, Dt12([reg]));
#line 485 "src/jit/emit_x64.dasc"
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
        dasm_put(Dst, 388, Dt12([reg_b]));
#line 497 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_n:
            //| addsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 395, Dt12([reg_c]));
#line 500 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_n:
            //| subsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 402, Dt12([reg_c]));
#line 503 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_n:
            //| mulsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 409, Dt12([reg_c]));
#line 506 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_n:
            //| divsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 416, Dt12([reg_c]));
#line 509 "src/jit/emit_x64.dasc"
            break;
        }
        //| movsd qword WORK[reg_a], xmm0;
        dasm_put(Dst, 423, Dt12([reg_a]));
#line 512 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_in: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert simple integer to double precision */
        //| cvtsi2sd xmm0, qword WORK[src];
        //| movsd qword WORK[dst], xmm0;
        dasm_put(Dst, 430, Dt12([src]), Dt12([dst]));
#line 520 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_ni: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert double precision to simple intege */
        //| cvttsd2si rax, qword WORK[src];
        //| mov WORK[dst], rax;
        dasm_put(Dst, 444, Dt12([src]), Dt12([dst]));
#line 528 "src/jit/emit_x64.dasc"
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
        dasm_put(Dst, 342, Dt12([reg_b]));
#line 541 "src/jit/emit_x64.dasc"
        /* comparison result in the setting bits in the rflags register */
        //| cmp rax, WORK[reg_c];
        dasm_put(Dst, 456, Dt12([reg_c]));
#line 543 "src/jit/emit_x64.dasc"
        /* copy the right comparison bit to the lower byte of the rax register */
        switch(ins->info->opcode) {
        case MVM_OP_eqaddr:
        case MVM_OP_eq_i:
            //| sete al;
            dasm_put(Dst, 461);
#line 548 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ne_i:
            //| setne al;
            dasm_put(Dst, 465);
#line 551 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_lt_i:
            //| setl al;
            dasm_put(Dst, 469);
#line 554 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_le_i:
            //| setle al;
            dasm_put(Dst, 473);
#line 557 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_gt_i:
            //| setg al;
            dasm_put(Dst, 477);
#line 560 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ge_i:
            //| setge al;
            dasm_put(Dst, 481);
#line 563 "src/jit/emit_x64.dasc"
            break;
        }
        /* zero extend al (lower byte) to rax (whole register) */
        //| movzx rax, al;
        //| mov WORK[reg_a], rax; 
        dasm_put(Dst, 485, Dt12([reg_a]));
#line 568 "src/jit/emit_x64.dasc"
        break;
    }
    default:
        MVM_exception_throw_adhoc(tc, "Can't JIT opcode");
    }
}

void MVM_jit_emit_call_c(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitCallC * call_spec, dasm_State **Dst) {
    int i;
    MVMJitAddr *args = call_spec->args;
    MVM_jit_log(tc, "emit c call <%d args>\n", call_spec->num_args);
    if (call_spec->has_vargs) {
        MVM_exception_throw_adhoc(tc, "JIT can't handle varargs yet");
    }
    /* first, add arguments */
    for (i = 0; i < call_spec->num_args; i++) {
        switch (args[i].base) {
        case MVM_JIT_ADDR_STACK: /* unlikely to use this now, though */
            //| addarg i, [rbp-args[i].idx];
            switch(i) {
                case 0:
            dasm_put(Dst, 494, -args[i].idx);
                    break;
                case 1:
            dasm_put(Dst, 499, -args[i].idx);
                    break;
                case 2:
            dasm_put(Dst, 504, -args[i].idx);
                    break;
                case 3:
            dasm_put(Dst, 509, -args[i].idx);
                    break;
                case 4:
            dasm_put(Dst, 514, -args[i].idx);
                    break;
                case 5:
            dasm_put(Dst, 519, -args[i].idx);
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 588 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_ADDR_INTERP:
            MVM_jit_log(tc, "emit interp call arg %d %d \n", i, args[i].idx);
            switch (args[i].idx) {
            case MVM_JIT_INTERP_TC:
                //| addarg i, TC;
                switch(i) {
                    case 0:
                dasm_put(Dst, 305);
                        break;
                    case 1:
                dasm_put(Dst, 524);
                        break;
                    case 2:
                dasm_put(Dst, 529);
                        break;
                    case 3:
                dasm_put(Dst, 534);
                        break;
                    case 4:
                dasm_put(Dst, 539);
                        break;
                    case 5:
                dasm_put(Dst, 544);
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 594 "src/jit/emit_x64.dasc"
                 break;
            case MVM_JIT_INTERP_FRAME:
                //| addarg i, TC->cur_frame;
                switch(i) {
                    case 0:
                dasm_put(Dst, 549, Dt1(->cur_frame));
                        break;
                    case 1:
                dasm_put(Dst, 554, Dt1(->cur_frame));
                        break;
                    case 2:
                dasm_put(Dst, 559, Dt1(->cur_frame));
                        break;
                    case 3:
                dasm_put(Dst, 105, Dt1(->cur_frame));
                        break;
                    case 4:
                dasm_put(Dst, 564, Dt1(->cur_frame));
                        break;
                    case 5:
                dasm_put(Dst, 569, Dt1(->cur_frame));
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 597 "src/jit/emit_x64.dasc"
                break;
            case MVM_JIT_INTERP_CU:
                //| mov rax, TC->interp_cu;
                //| addarg i, [rax];
                dasm_put(Dst, 574, Dt1(->interp_cu));
                switch(i) {
                    case 0:
                dasm_put(Dst, 579);
                        break;
                    case 1:
                dasm_put(Dst, 583);
                        break;
                    case 2:
                dasm_put(Dst, 587);
                        break;
                    case 3:
                dasm_put(Dst, 591);
                        break;
                    case 4:
                dasm_put(Dst, 595);
                        break;
                    case 5:
                dasm_put(Dst, 599);
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 601 "src/jit/emit_x64.dasc"
                break;
            }
            break;
        case MVM_JIT_ADDR_REG:
            //| addarg i, WORK[args[i].idx];
            switch(i) {
                case 0:
            dasm_put(Dst, 603, Dt12([args[i].idx]));
                    break;
                case 1:
            dasm_put(Dst, 608, Dt12([args[i].idx]));
                    break;
                case 2:
            dasm_put(Dst, 613, Dt12([args[i].idx]));
                    break;
                case 3:
            dasm_put(Dst, 618, Dt12([args[i].idx]));
                    break;
                case 4:
            dasm_put(Dst, 623, Dt12([args[i].idx]));
                    break;
                case 5:
            dasm_put(Dst, 628, Dt12([args[i].idx]));
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 606 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_ADDR_REG_F:
            //| addarg_f i, WORK[args[i].idx];
            switch(i) {
                case 0:
            dasm_put(Dst, 388, Dt12([args[i].idx]));
                    break;
                case 1:
            dasm_put(Dst, 633, Dt12([args[i].idx]));
                    break;
                case 2:
            dasm_put(Dst, 640, Dt12([args[i].idx]));
                    break;
                case 3:
            dasm_put(Dst, 647, Dt12([args[i].idx]));
                    break;
                case 4:
            dasm_put(Dst, 654, Dt12([args[i].idx]));
                    break;
                case 5:
            dasm_put(Dst, 661, Dt12([args[i].idx]));
                    break;
                case 6:
            dasm_put(Dst, 668, Dt12([args[i].idx]));
                    break;
                case 7:
            dasm_put(Dst, 675, Dt12([args[i].idx]));
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 609 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_ADDR_LITERAL:
            //| addarg i, args[i].idx;
            switch(i) {
                case 0:
            dasm_put(Dst, 682, args[i].idx);
                    break;
                case 1:
            dasm_put(Dst, 687, args[i].idx);
                    break;
                case 2:
            dasm_put(Dst, 692, args[i].idx);
                    break;
                case 3:
            dasm_put(Dst, 697, args[i].idx);
                    break;
                case 4:
            dasm_put(Dst, 702, args[i].idx);
                    break;
                case 5:
            dasm_put(Dst, 707, args[i].idx);
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 612 "src/jit/emit_x64.dasc"
            break;
        }
    }
    /* Emit the call. I think we should be able to do something smarter than
     * store the constant into the bytecode, like a data segment. But I'm
     * not sure. */
     //| callp call_spec->func_ptr
     dasm_put(Dst, 150, (unsigned int)((uintptr_t)call_spec->func_ptr), (unsigned int)(((uintptr_t)call_spec->func_ptr)>>32));
#line 619 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_branch(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitBranch * branch, dasm_State **Dst) {
    MVMSpeshIns *ins = branch->ins;
    MVMint32 name = branch->dest.name;
    if (ins == NULL || ins->info->opcode == MVM_OP_goto) {
        MVM_jit_log(tc, "emit jump to label %d\n", name);
        if (name == MVM_JIT_BRANCH_EXIT) {
            //| jmp ->exit
            dasm_put(Dst, 712);
#line 629 "src/jit/emit_x64.dasc"
        } else {
            //| jmp =>(name)
            dasm_put(Dst, 717, (name));
#line 631 "src/jit/emit_x64.dasc"
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
            dasm_put(Dst, 721, Dt12([reg]), (name));
#line 641 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_unless_i:
            //| mov rax, WORK[reg];
            //| test rax, rax;
            //| jz =>(name);
            dasm_put(Dst, 732, Dt12([reg]), (name));
#line 646 "src/jit/emit_x64.dasc"
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
    dasm_put(Dst, 743, (label->name));
#line 657 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_rvh(MVMThreadContext *tc, MVMJitGraph *jg,
                      MVMJitRVH *rvh, dasm_State **Dst) {
    switch(rvh->mode) {
    case MVM_JIT_RV_VAL_TO_REG:
        //| mov WORK[rvh->addr.idx], RV;
        dasm_put(Dst, 371, Dt12([rvh->addr.idx]));
#line 664 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_VAL_TO_REG_F:
        //| movsd qword WORK[rvh->addr.idx], RVF;
        dasm_put(Dst, 423, Dt12([rvh->addr.idx]));
#line 667 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_REF_TO_REG:
        //| mov TMP1, [RV]; // maybe add an offset?
        //| mov WORK[rvh->addr.idx], TMP1;
        dasm_put(Dst, 745, Dt12([rvh->addr.idx]));
#line 671 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_REG_TO_PTR:
        //| mov TMP1, WORK[rvh->addr.idx];
        //| mov [RV], TMP1;
        dasm_put(Dst, 753, Dt12([rvh->addr.idx]));
#line 675 "src/jit/emit_x64.dasc"
        break;
    }
}