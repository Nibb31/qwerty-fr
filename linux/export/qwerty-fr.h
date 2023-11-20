/* This file generated automatically by xkbcomp */
/* DO  NOT EDIT */
#ifndef QWERTY_FR_H
#define QWERTY_FR_H 1

#ifndef XKB_IN_SERVER
#define GET_ATOM(d,s)	XInternAtom(d,s,0)
#define DPYTYPE	Display *
#else
#define GET_ATOM(d,s)	MakeAtom(s,strlen(s),1)
#define DPYTYPE	char *
#endif
#define NUM_KEYS	256

#define	vmod_NumLock	0
#define	vmod_Alt	1
#define	vmod_LevelThree	2
#define	vmod_LAlt	3
#define	vmod_RAlt	4
#define	vmod_RControl	5
#define	vmod_LControl	6
#define	vmod_ScrollLock	7
#define	vmod_LevelFive	8
#define	vmod_AltGr	9
#define	vmod_Meta	10
#define	vmod_Super	11
#define	vmod_Hyper	12

#define	vmod_NumLockMask	(1<<0)
#define	vmod_AltMask	(1<<1)
#define	vmod_LevelThreeMask	(1<<2)
#define	vmod_LAltMask	(1<<3)
#define	vmod_RAltMask	(1<<4)
#define	vmod_RControlMask	(1<<5)
#define	vmod_LControlMask	(1<<6)
#define	vmod_ScrollLockMask	(1<<7)
#define	vmod_LevelFiveMask	(1<<8)
#define	vmod_AltGrMask	(1<<9)
#define	vmod_MetaMask	(1<<10)
#define	vmod_SuperMask	(1<<11)
#define	vmod_HyperMask	(1<<12)

/* keycodes name is "evdev+aliases(qwerty)" */
static XkbKeyNameRec	keyNames[NUM_KEYS]= {
    {      ""  },    {      ""  },    {      ""  },    {      ""  },
    {      ""  },    {      ""  },    {      ""  },    {      ""  },
    {      ""  },    {   "ESC"  },    {  "AE01"  },    {  "AE02"  },
    {  "AE03"  },    {  "AE04"  },    {  "AE05"  },    {  "AE06"  },
    {  "AE07"  },    {  "AE08"  },    {  "AE09"  },    {  "AE10"  },
    {  "AE11"  },    {  "AE12"  },    {  "BKSP"  },    {   "TAB"  },
    {  "AD01"  },    {  "AD02"  },    {  "AD03"  },    {  "AD04"  },
    {  "AD05"  },    {  "AD06"  },    {  "AD07"  },    {  "AD08"  },
    {  "AD09"  },    {  "AD10"  },    {  "AD11"  },    {  "AD12"  },
    {  "RTRN"  },    {  "LCTL"  },    {  "AC01"  },    {  "AC02"  },
    {  "AC03"  },    {  "AC04"  },    {  "AC05"  },    {  "AC06"  },
    {  "AC07"  },    {  "AC08"  },    {  "AC09"  },    {  "AC10"  },
    {  "AC11"  },    {  "TLDE"  },    {  "LFSH"  },    {  "BKSL"  },
    {  "AB01"  },    {  "AB02"  },    {  "AB03"  },    {  "AB04"  },
    {  "AB05"  },    {  "AB06"  },    {  "AB07"  },    {  "AB08"  },
    {  "AB09"  },    {  "AB10"  },    {  "RTSH"  },    {  "KPMU"  },
    {  "LALT"  },    {  "SPCE"  },    {  "CAPS"  },    {  "FK01"  },
    {  "FK02"  },    {  "FK03"  },    {  "FK04"  },    {  "FK05"  },
    {  "FK06"  },    {  "FK07"  },    {  "FK08"  },    {  "FK09"  },
    {  "FK10"  },    {  "NMLK"  },    {  "SCLK"  },    {   "KP7"  },
    {   "KP8"  },    {   "KP9"  },    {  "KPSU"  },    {   "KP4"  },
    {   "KP5"  },    {   "KP6"  },    {  "KPAD"  },    {   "KP1"  },
    {   "KP2"  },    {   "KP3"  },    {   "KP0"  },    {  "KPDL"  },
    {  "LVL3"  },    {      ""  },    {  "LSGT"  },    {  "FK11"  },
    {  "FK12"  },    {  "AB11"  },    {  "KATA"  },    {  "HIRA"  },
    {  "HENK"  },    {  "HKTG"  },    {  "MUHE"  },    {  "JPCM"  },
    {  "KPEN"  },    {  "RCTL"  },    {  "KPDV"  },    {  "PRSC"  },
    {  "RALT"  },    {  "LNFD"  },    {  "HOME"  },    {    "UP"  },
    {  "PGUP"  },    {  "LEFT"  },    {  "RGHT"  },    {   "END"  },
    {  "DOWN"  },    {  "PGDN"  },    {   "INS"  },    {  "DELE"  },
    {  "I120"  },    {  "MUTE"  },    {  "VOL-"  },    {  "VOL+"  },
    {  "POWR"  },    {  "KPEQ"  },    {  "I126"  },    {  "PAUS"  },
    {  "I128"  },    {  "I129"  },    {  "HNGL"  },    {  "HJCV"  },
    {  "AE13"  },    {  "LWIN"  },    {  "RWIN"  },    {  "COMP"  },
    {  "STOP"  },    {  "AGAI"  },    {  "PROP"  },    {  "UNDO"  },
    {  "FRNT"  },    {  "COPY"  },    {  "OPEN"  },    {  "PAST"  },
    {  "FIND"  },    {   "CUT"  },    {  "HELP"  },    {  "I147"  },
    {  "I148"  },    {  "I149"  },    {  "I150"  },    {  "I151"  },
    {  "I152"  },    {  "I153"  },    {  "I154"  },    {  "I155"  },
    {  "I156"  },    {  "I157"  },    {  "I158"  },    {  "I159"  },
    {  "I160"  },    {  "I161"  },    {  "I162"  },    {  "I163"  },
    {  "I164"  },    {  "I165"  },    {  "I166"  },    {  "I167"  },
    {  "I168"  },    {  "I169"  },    {  "I170"  },    {  "I171"  },
    {  "I172"  },    {  "I173"  },    {  "I174"  },    {  "I175"  },
    {  "I176"  },    {  "I177"  },    {  "I178"  },    {  "I179"  },
    {  "I180"  },    {  "I181"  },    {  "I182"  },    {  "I183"  },
    {  "I184"  },    {  "I185"  },    {  "I186"  },    {  "I187"  },
    {  "I188"  },    {  "I189"  },    {  "I190"  },    {  "FK13"  },
    {  "FK14"  },    {  "FK15"  },    {  "FK16"  },    {  "FK17"  },
    {  "FK18"  },    {  "FK19"  },    {  "FK20"  },    {  "FK21"  },
    {  "FK22"  },    {  "FK23"  },    {  "FK24"  },    {  "MDSW"  },
    {   "ALT"  },    {  "META"  },    {  "SUPR"  },    {  "HYPR"  },
    {  "I208"  },    {  "I209"  },    {  "I210"  },    {  "I211"  },
    {  "I212"  },    {  "I213"  },    {  "I214"  },    {  "I215"  },
    {  "I216"  },    {  "I217"  },    {  "I218"  },    {  "I219"  },
    {  "I220"  },    {  "I221"  },    {  "I222"  },    {  "I223"  },
    {  "I224"  },    {  "I225"  },    {  "I226"  },    {  "I227"  },
    {  "I228"  },    {  "I229"  },    {  "I230"  },    {  "I231"  },
    {  "I232"  },    {  "I233"  },    {  "I234"  },    {  "I235"  },
    {  "I236"  },    {  "I237"  },    {  "I238"  },    {  "I239"  },
    {  "I240"  },    {  "I241"  },    {  "I242"  },    {  "I243"  },
    {  "I244"  },    {  "I245"  },    {  "I246"  },    {  "I247"  },
    {  "I248"  },    {  "I249"  },    {  "I250"  },    {  "I251"  },
    {  "I252"  },    {  "I253"  },    {  "I254"  },    {  "I255"  }
};
/* types name is "complete" */
static Atom lnames_ONE_LEVEL[1];

static XkbKTMapEntryRec map_TWO_LEVEL[1]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } }
};
static Atom lnames_TWO_LEVEL[2];

static XkbKTMapEntryRec map_ALPHABETIC[2]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 1,      1, {        LockMask,        LockMask,               0 } }
};
static Atom lnames_ALPHABETIC[2];

static XkbKTMapEntryRec map_KEYPAD[1]= {
    { 0,      1, {               0,               0, vmod_NumLocMask } }
};
static Atom lnames_KEYPAD[2];

static XkbKTMapEntryRec map_SHIFT_ALT[1]= {
    { 0,      1, {       ShiftMask,       ShiftMask,     vmod_AlMask } }
};
static Atom lnames_SHIFT_ALT[2];

static XkbKTMapEntryRec map_PC_SUPER_LEVEL2[1]= {
    { 1,      1, {        Mod4Mask,        Mod4Mask,               0 } }
};
static Atom lnames_PC_SUPER_LEVEL2[2];

static XkbKTMapEntryRec map_PC_CONTROL_LEVEL2[1]= {
    { 1,      1, {     ControlMask,     ControlMask,               0 } }
};
static Atom lnames_PC_CONTROL_LEVEL2[2];

static XkbKTMapEntryRec map_PC_LCONTROL_LEVEL2[1]= {
    { 0,      1, {               0,               0, vmod_LControMask } }
};
static Atom lnames_PC_LCONTROL_LEVEL2[2];

static XkbKTMapEntryRec map_PC_RCONTROL_LEVEL2[1]= {
    { 0,      1, {               0,               0, vmod_RControMask } }
};
static Atom lnames_PC_RCONTROL_LEVEL2[2];

static XkbKTMapEntryRec map_PC_ALT_LEVEL2[1]= {
    { 0,      1, {               0,               0,     vmod_AlMask } }
};
static Atom lnames_PC_ALT_LEVEL2[2];

static XkbKTMapEntryRec map_PC_LALT_LEVEL2[1]= {
    { 0,      1, {               0,               0,    vmod_LAlMask } }
};
static Atom lnames_PC_LALT_LEVEL2[2];

static XkbKTMapEntryRec map_PC_RALT_LEVEL2[1]= {
    { 0,      1, {               0,               0,    vmod_RAlMask } }
};
static Atom lnames_PC_RALT_LEVEL2[2];

static XkbKTMapEntryRec map_CTRL_ALT[4]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      4, {     ControlMask,     ControlMask,     vmod_AlMask } }
};
static XkbModsRec preserve_CTRL_ALT[4]= {
    {         ShiftMask,       ShiftMask,               0 },
    {                 0,               0,               0 },
    {         ShiftMask,       ShiftMask,               0 },
    {                 0,               0,               0 }
};
static Atom lnames_CTRL_ALT[5];

static XkbKTMapEntryRec map_LOCAL_EIGHT_LEVEL[15]= {
    { 1,      0, { ShiftMask|LockMask, ShiftMask|LockMask,               0 } },
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 1,      1, {        LockMask,        LockMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      2, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      3, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 1,      4, {     ControlMask,     ControlMask,               0 } },
    { 1,      4, { ShiftMask|LockMask|ControlMask, ShiftMask|LockMask|ControlMask,               0 } },
    { 1,      5, { ShiftMask|ControlMask, ShiftMask|ControlMask,               0 } },
    { 1,      5, { LockMask|ControlMask, LockMask|ControlMask,               0 } },
    { 0,      6, {     ControlMask,     ControlMask, vmod_LevelThreMask } },
    { 0,      6, { ShiftMask|LockMask|ControlMask, ShiftMask|LockMask|ControlMask, vmod_LevelThreMask } },
    { 0,      7, { ShiftMask|ControlMask, ShiftMask|ControlMask, vmod_LevelThreMask } },
    { 0,      7, { LockMask|ControlMask, LockMask|ControlMask, vmod_LevelThreMask } }
};
static Atom lnames_LOCAL_EIGHT_LEVEL[8];

static XkbKTMapEntryRec map_THREE_LEVEL[3]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      2, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } }
};
static Atom lnames_THREE_LEVEL[3];

static XkbKTMapEntryRec map_EIGHT_LEVEL[7]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      4, {               0,               0, vmod_LevelFivMask } },
    { 0,      5, {       ShiftMask,       ShiftMask, vmod_LevelFivMask } },
    { 0,      6, {               0,               0, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, {       ShiftMask,       ShiftMask, vmod_LevelThreMask|vmod_LevelFivMask } }
};
static Atom lnames_EIGHT_LEVEL[8];

static XkbKTMapEntryRec map_EIGHT_LEVEL_ALPHABETIC[13]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 1,      1, {        LockMask,        LockMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      3, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 0,      2, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } },
    { 0,      4, {               0,               0, vmod_LevelFivMask } },
    { 0,      5, {       ShiftMask,       ShiftMask, vmod_LevelFivMask } },
    { 0,      5, {        LockMask,        LockMask, vmod_LevelFivMask } },
    { 0,      6, {               0,               0, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, {       ShiftMask,       ShiftMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, {        LockMask,        LockMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      6, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask|vmod_LevelFivMask } }
};
static Atom lnames_EIGHT_LEVEL_ALPHABETIC[8];

static XkbKTMapEntryRec map_EIGHT_LEVEL_LEVEL_FIVE_LOCK[28]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      4, {               0,               0, vmod_LevelFivMask } },
    { 0,      5, {       ShiftMask,       ShiftMask, vmod_LevelFivMask } },
    { 0,      6, {               0,               0, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, {       ShiftMask,       ShiftMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      4, {               0,               0, vmod_NumLocMask } },
    { 0,      5, {       ShiftMask,       ShiftMask, vmod_NumLocMask } },
    { 0,      6, {               0,               0, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      7, {       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      1, {       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelFivMask } },
    { 0,      2, {               0,               0, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask } },
    { 1,      1, { ShiftMask|LockMask, ShiftMask|LockMask,               0 } },
    { 0,      2, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 0,      3, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } },
    { 0,      4, {        LockMask,        LockMask, vmod_LevelFivMask } },
    { 0,      5, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelFivMask } },
    { 0,      6, {        LockMask,        LockMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      4, {        LockMask,        LockMask, vmod_NumLocMask } },
    { 0,      5, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask } },
    { 0,      6, {        LockMask,        LockMask, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      7, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      1, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask|vmod_LevelFivMask } },
    { 0,      2, {        LockMask,        LockMask, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      3, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask } }
};
static XkbModsRec preserve_EIGHT_LEVEL_LEVEL_FIVE_LOCK[28]= {
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {         ShiftMask,       ShiftMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {         ShiftMask,       ShiftMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {         ShiftMask,       ShiftMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {         ShiftMask,       ShiftMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 }
};
static Atom lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[8];

static XkbKTMapEntryRec map_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[28]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      4, {               0,               0, vmod_LevelFivMask } },
    { 0,      5, {       ShiftMask,       ShiftMask, vmod_LevelFivMask } },
    { 0,      6, {               0,               0, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, {       ShiftMask,       ShiftMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      4, {               0,               0, vmod_NumLocMask } },
    { 0,      5, {       ShiftMask,       ShiftMask, vmod_NumLocMask } },
    { 0,      6, {               0,               0, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      7, {       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      1, {       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelFivMask } },
    { 0,      2, {               0,               0, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask } },
    { 1,      1, {        LockMask,        LockMask,               0 } },
    { 0,      2, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 0,      3, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } },
    { 0,      4, {        LockMask,        LockMask, vmod_LevelFivMask } },
    { 0,      5, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelFivMask } },
    { 0,      6, {        LockMask,        LockMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      4, {        LockMask,        LockMask, vmod_NumLocMask } },
    { 0,      5, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask } },
    { 0,      6, {        LockMask,        LockMask, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      7, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      1, {        LockMask,        LockMask, vmod_NumLocMask|vmod_LevelFivMask } },
    { 0,      3, {        LockMask,        LockMask, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      2, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask } }
};
static XkbModsRec preserve_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[28]= {
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {         ShiftMask,       ShiftMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {         ShiftMask,       ShiftMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 }
};
static Atom lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[8];

static XkbKTMapEntryRec map_EIGHT_LEVEL_SEMIALPHABETIC[14]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 1,      1, {        LockMask,        LockMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      2, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 0,      3, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } },
    { 0,      4, {               0,               0, vmod_LevelFivMask } },
    { 0,      5, {       ShiftMask,       ShiftMask, vmod_LevelFivMask } },
    { 0,      5, {        LockMask,        LockMask, vmod_LevelFivMask } },
    { 0,      5, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelFivMask } },
    { 0,      6, {               0,               0, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, {       ShiftMask,       ShiftMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      6, {        LockMask,        LockMask, vmod_LevelThreMask|vmod_LevelFivMask } },
    { 0,      7, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask|vmod_LevelFivMask } }
};
static XkbModsRec preserve_EIGHT_LEVEL_SEMIALPHABETIC[14]= {
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {          LockMask,        LockMask,               0 },
    {          LockMask,        LockMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {          LockMask,        LockMask,               0 },
    {          LockMask,        LockMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {          LockMask,        LockMask,               0 },
    {          LockMask,        LockMask,               0 }
};
static Atom lnames_EIGHT_LEVEL_SEMIALPHABETIC[8];

static XkbKTMapEntryRec map_FOUR_LEVEL[3]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } }
};
static Atom lnames_FOUR_LEVEL[4];

static XkbKTMapEntryRec map_FOUR_LEVEL_ALPHABETIC[6]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 1,      1, {        LockMask,        LockMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      3, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 0,      2, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } }
};
static Atom lnames_FOUR_LEVEL_ALPHABETIC[4];

static XkbKTMapEntryRec map_FOUR_LEVEL_SEMIALPHABETIC[6]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 1,      1, {        LockMask,        LockMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      2, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 0,      3, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } }
};
static XkbModsRec preserve_FOUR_LEVEL_SEMIALPHABETIC[6]= {
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {          LockMask,        LockMask,               0 },
    {          LockMask,        LockMask,               0 }
};
static Atom lnames_FOUR_LEVEL_SEMIALPHABETIC[4];

static XkbKTMapEntryRec map_FOUR_LEVEL_MIXED_KEYPAD[7]= {
    { 0,      0, {       ShiftMask,       ShiftMask, vmod_NumLocMask } },
    { 0,      1, {               0,               0, vmod_NumLocMask } },
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      2, {               0,               0, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelThreMask } }
};
static Atom lnames_FOUR_LEVEL_MIXED_KEYPAD[4];

static XkbKTMapEntryRec map_FOUR_LEVEL_X[3]= {
    { 0,      1, {               0,               0, vmod_LevelThreMask } },
    { 0,      2, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      3, {     ControlMask,     ControlMask,     vmod_AlMask } }
};
static Atom lnames_FOUR_LEVEL_X[4];

static XkbKTMapEntryRec map_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC[6]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 1,      3, {        LockMask,        LockMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      2, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 0,      2, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } }
};
static XkbModsRec preserve_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC[6]= {
    {                 0,               0,               0 },
    {          LockMask,        LockMask,               0 },
    {                 0,               0,               0 },
    {                 0,               0,               0 },
    {          LockMask,        LockMask,               0 },
    {                 0,               0,               0 }
};
static Atom lnames_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC[4];

static XkbKTMapEntryRec map_FOUR_LEVEL_PLUS_LOCK[7]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 1,      4, {        LockMask,        LockMask,               0 } },
    { 1,      1, { ShiftMask|LockMask, ShiftMask|LockMask,               0 } },
    { 0,      2, {        LockMask,        LockMask, vmod_LevelThreMask } },
    { 0,      3, { ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask } }
};
static Atom lnames_FOUR_LEVEL_PLUS_LOCK[5];

static XkbKTMapEntryRec map_FOUR_LEVEL_KEYPAD[6]= {
    { 1,      1, {       ShiftMask,       ShiftMask,               0 } },
    { 0,      1, {               0,               0, vmod_NumLocMask } },
    { 0,      2, {               0,               0, vmod_LevelThreMask } },
    { 0,      3, {       ShiftMask,       ShiftMask, vmod_LevelThreMask } },
    { 0,      3, {               0,               0, vmod_NumLocMask|vmod_LevelThreMask } },
    { 0,      2, {       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelThreMask } }
};
static Atom lnames_FOUR_LEVEL_KEYPAD[4];

static XkbKeyTypeRec dflt_types[]= {
    {
	{               0,               0,               0 },
	1,
	0,	NULL,	NULL,
	None,	lnames_ONE_LEVEL
    },
    {
	{       ShiftMask,       ShiftMask,               0 },
	2,
	1,	map_TWO_LEVEL,	NULL,
	None,	lnames_TWO_LEVEL
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask,               0 },
	2,
	2,	map_ALPHABETIC,	NULL,
	None,	lnames_ALPHABETIC
    },
    {
	{       ShiftMask,       ShiftMask, vmod_NumLocMask },
	2,
	1,	map_KEYPAD,	NULL,
	None,	lnames_KEYPAD
    },
    {
	{       ShiftMask,       ShiftMask,     vmod_AlMask },
	2,
	1,	map_SHIFT_ALT,	NULL,
	None,	lnames_SHIFT_ALT
    },
    {
	{        Mod4Mask,        Mod4Mask,               0 },
	2,
	1,	map_PC_SUPER_LEVEL2,	NULL,
	None,	lnames_PC_SUPER_LEVEL2
    },
    {
	{     ControlMask,     ControlMask,               0 },
	2,
	1,	map_PC_CONTROL_LEVEL2,	NULL,
	None,	lnames_PC_CONTROL_LEVEL2
    },
    {
	{               0,               0, vmod_LControMask },
	2,
	1,	map_PC_LCONTROL_LEVEL2,	NULL,
	None,	lnames_PC_LCONTROL_LEVEL2
    },
    {
	{               0,               0, vmod_RControMask },
	2,
	1,	map_PC_RCONTROL_LEVEL2,	NULL,
	None,	lnames_PC_RCONTROL_LEVEL2
    },
    {
	{               0,               0,     vmod_AlMask },
	2,
	1,	map_PC_ALT_LEVEL2,	NULL,
	None,	lnames_PC_ALT_LEVEL2
    },
    {
	{               0,               0,    vmod_LAlMask },
	2,
	1,	map_PC_LALT_LEVEL2,	NULL,
	None,	lnames_PC_LALT_LEVEL2
    },
    {
	{               0,               0,    vmod_RAlMask },
	2,
	1,	map_PC_RALT_LEVEL2,	NULL,
	None,	lnames_PC_RALT_LEVEL2
    },
    {
	{ ShiftMask|ControlMask, ShiftMask|ControlMask, vmod_AlMask|vmod_LevelThreMask },
	5,
	4,	map_CTRL_ALT,	preserve_CTRL_ALT,
	None,	lnames_CTRL_ALT
    },
    {
	{ ShiftMask|LockMask|ControlMask, ShiftMask|LockMask|ControlMask, vmod_LevelThreMask },
	8,
	15,	map_LOCAL_EIGHT_LEVEL,	NULL,
	None,	lnames_LOCAL_EIGHT_LEVEL
    },
    {
	{       ShiftMask,       ShiftMask, vmod_LevelThreMask },
	3,
	3,	map_THREE_LEVEL,	NULL,
	None,	lnames_THREE_LEVEL
    },
    {
	{       ShiftMask,       ShiftMask, vmod_LevelThreMask|vmod_LevelFivMask },
	8,
	7,	map_EIGHT_LEVEL,	NULL,
	None,	lnames_EIGHT_LEVEL
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask|vmod_LevelFivMask },
	8,
	13,	map_EIGHT_LEVEL_ALPHABETIC,	NULL,
	None,	lnames_EIGHT_LEVEL_ALPHABETIC
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask },
	8,
	28,	map_EIGHT_LEVEL_LEVEL_FIVE_LOCK,	preserve_EIGHT_LEVEL_LEVEL_FIVE_LOCK,
	None,	lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask, vmod_NumLocMask|vmod_LevelThreMask|vmod_LevelFivMask },
	8,
	28,	map_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK,	preserve_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK,
	None,	lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask|vmod_LevelFivMask },
	8,
	14,	map_EIGHT_LEVEL_SEMIALPHABETIC,	preserve_EIGHT_LEVEL_SEMIALPHABETIC,
	None,	lnames_EIGHT_LEVEL_SEMIALPHABETIC
    },
    {
	{       ShiftMask,       ShiftMask, vmod_LevelThreMask },
	4,
	3,	map_FOUR_LEVEL,	NULL,
	None,	lnames_FOUR_LEVEL
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask },
	4,
	6,	map_FOUR_LEVEL_ALPHABETIC,	NULL,
	None,	lnames_FOUR_LEVEL_ALPHABETIC
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask },
	4,
	6,	map_FOUR_LEVEL_SEMIALPHABETIC,	preserve_FOUR_LEVEL_SEMIALPHABETIC,
	None,	lnames_FOUR_LEVEL_SEMIALPHABETIC
    },
    {
	{       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelThreMask },
	4,
	7,	map_FOUR_LEVEL_MIXED_KEYPAD,	NULL,
	None,	lnames_FOUR_LEVEL_MIXED_KEYPAD
    },
    {
	{ ShiftMask|ControlMask, ShiftMask|ControlMask, vmod_AlMask|vmod_LevelThreMask },
	4,
	3,	map_FOUR_LEVEL_X,	NULL,
	None,	lnames_FOUR_LEVEL_X
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask },
	4,
	6,	map_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC,	preserve_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC,
	None,	lnames_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC
    },
    {
	{ ShiftMask|LockMask, ShiftMask|LockMask, vmod_LevelThreMask },
	5,
	7,	map_FOUR_LEVEL_PLUS_LOCK,	NULL,
	None,	lnames_FOUR_LEVEL_PLUS_LOCK
    },
    {
	{       ShiftMask,       ShiftMask, vmod_NumLocMask|vmod_LevelThreMask },
	4,
	6,	map_FOUR_LEVEL_KEYPAD,	NULL,
	None,	lnames_FOUR_LEVEL_KEYPAD
    }
};
#define num_dflt_types (sizeof(dflt_types)/sizeof(XkbKeyTypeRec))


static void
initTypeNames(DPYTYPE dpy)
{
    dflt_types[0].name= GET_ATOM(dpy,"ONE_LEVEL");
    lnames_ONE_LEVEL[0]=	GET_ATOM(dpy,"Any");
    dflt_types[1].name= GET_ATOM(dpy,"TWO_LEVEL");
    lnames_TWO_LEVEL[0]=	GET_ATOM(dpy,"Base");
    lnames_TWO_LEVEL[1]=	GET_ATOM(dpy,"Shift");
    dflt_types[2].name= GET_ATOM(dpy,"ALPHABETIC");
    lnames_ALPHABETIC[0]=	GET_ATOM(dpy,"Base");
    lnames_ALPHABETIC[1]=	GET_ATOM(dpy,"Caps");
    dflt_types[3].name= GET_ATOM(dpy,"KEYPAD");
    lnames_KEYPAD[0]=	GET_ATOM(dpy,"Base");
    lnames_KEYPAD[1]=	GET_ATOM(dpy,"Number");
    dflt_types[4].name= GET_ATOM(dpy,"SHIFT_ALT");
    lnames_SHIFT_ALT[0]=	GET_ATOM(dpy,"Base");
    lnames_SHIFT_ALT[1]=	GET_ATOM(dpy,"Shift_Alt");
    dflt_types[5].name= GET_ATOM(dpy,"PC_SUPER_LEVEL2");
    lnames_PC_SUPER_LEVEL2[0]=	GET_ATOM(dpy,"Base");
    lnames_PC_SUPER_LEVEL2[1]=	GET_ATOM(dpy,"Super");
    dflt_types[6].name= GET_ATOM(dpy,"PC_CONTROL_LEVEL2");
    lnames_PC_CONTROL_LEVEL2[0]=	GET_ATOM(dpy,"Base");
    lnames_PC_CONTROL_LEVEL2[1]=	GET_ATOM(dpy,"Control");
    dflt_types[7].name= GET_ATOM(dpy,"PC_LCONTROL_LEVEL2");
    lnames_PC_LCONTROL_LEVEL2[0]=	GET_ATOM(dpy,"Base");
    lnames_PC_LCONTROL_LEVEL2[1]=	GET_ATOM(dpy,"LControl");
    dflt_types[8].name= GET_ATOM(dpy,"PC_RCONTROL_LEVEL2");
    lnames_PC_RCONTROL_LEVEL2[0]=	GET_ATOM(dpy,"Base");
    lnames_PC_RCONTROL_LEVEL2[1]=	GET_ATOM(dpy,"RControl");
    dflt_types[9].name= GET_ATOM(dpy,"PC_ALT_LEVEL2");
    lnames_PC_ALT_LEVEL2[0]=	GET_ATOM(dpy,"Base");
    lnames_PC_ALT_LEVEL2[1]=	GET_ATOM(dpy,"Alt");
    dflt_types[10].name= GET_ATOM(dpy,"PC_LALT_LEVEL2");
    lnames_PC_LALT_LEVEL2[0]=	GET_ATOM(dpy,"Base");
    lnames_PC_LALT_LEVEL2[1]=	GET_ATOM(dpy,"LAlt");
    dflt_types[11].name= GET_ATOM(dpy,"PC_RALT_LEVEL2");
    lnames_PC_RALT_LEVEL2[0]=	GET_ATOM(dpy,"Base");
    lnames_PC_RALT_LEVEL2[1]=	GET_ATOM(dpy,"RAlt");
    dflt_types[12].name= GET_ATOM(dpy,"CTRL_ALT");
    lnames_CTRL_ALT[0]=	GET_ATOM(dpy,"Base");
    lnames_CTRL_ALT[1]=	GET_ATOM(dpy,"Shift");
    lnames_CTRL_ALT[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_CTRL_ALT[3]=	GET_ATOM(dpy,"Shift_Alt");
    lnames_CTRL_ALT[4]=	GET_ATOM(dpy,"Ctrl_Alt");
    dflt_types[13].name= GET_ATOM(dpy,"LOCAL_EIGHT_LEVEL");
    lnames_LOCAL_EIGHT_LEVEL[0]=	GET_ATOM(dpy,"Base");
    lnames_LOCAL_EIGHT_LEVEL[1]=	GET_ATOM(dpy,"Shift");
    lnames_LOCAL_EIGHT_LEVEL[2]=	GET_ATOM(dpy,"Level3");
    lnames_LOCAL_EIGHT_LEVEL[3]=	GET_ATOM(dpy,"Shift_Level3");
    lnames_LOCAL_EIGHT_LEVEL[4]=	GET_ATOM(dpy,"Ctrl");
    lnames_LOCAL_EIGHT_LEVEL[5]=	GET_ATOM(dpy,"Shift_Ctrl");
    lnames_LOCAL_EIGHT_LEVEL[6]=	GET_ATOM(dpy,"Level3_Ctrl");
    lnames_LOCAL_EIGHT_LEVEL[7]=	GET_ATOM(dpy,"Shift_Level3_Ctrl");
    dflt_types[14].name= GET_ATOM(dpy,"THREE_LEVEL");
    lnames_THREE_LEVEL[0]=	GET_ATOM(dpy,"Base");
    lnames_THREE_LEVEL[1]=	GET_ATOM(dpy,"Shift");
    lnames_THREE_LEVEL[2]=	GET_ATOM(dpy,"Level3");
    dflt_types[15].name= GET_ATOM(dpy,"EIGHT_LEVEL");
    lnames_EIGHT_LEVEL[0]=	GET_ATOM(dpy,"Base");
    lnames_EIGHT_LEVEL[1]=	GET_ATOM(dpy,"Shift");
    lnames_EIGHT_LEVEL[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_EIGHT_LEVEL[3]=	GET_ATOM(dpy,"Shift_Alt");
    lnames_EIGHT_LEVEL[4]=	GET_ATOM(dpy,"X");
    lnames_EIGHT_LEVEL[5]=	GET_ATOM(dpy,"X_Shift");
    lnames_EIGHT_LEVEL[6]=	GET_ATOM(dpy,"X_Alt_Base");
    lnames_EIGHT_LEVEL[7]=	GET_ATOM(dpy,"X_Shift_Alt");
    dflt_types[16].name= GET_ATOM(dpy,"EIGHT_LEVEL_ALPHABETIC");
    lnames_EIGHT_LEVEL_ALPHABETIC[0]=	GET_ATOM(dpy,"Base");
    lnames_EIGHT_LEVEL_ALPHABETIC[1]=	GET_ATOM(dpy,"Shift");
    lnames_EIGHT_LEVEL_ALPHABETIC[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_EIGHT_LEVEL_ALPHABETIC[3]=	GET_ATOM(dpy,"Shift_Alt");
    lnames_EIGHT_LEVEL_ALPHABETIC[4]=	GET_ATOM(dpy,"X");
    lnames_EIGHT_LEVEL_ALPHABETIC[5]=	GET_ATOM(dpy,"X_Shift");
    lnames_EIGHT_LEVEL_ALPHABETIC[6]=	GET_ATOM(dpy,"X_Alt_Base");
    lnames_EIGHT_LEVEL_ALPHABETIC[7]=	GET_ATOM(dpy,"X_Shift_Alt");
    dflt_types[17].name= GET_ATOM(dpy,"EIGHT_LEVEL_LEVEL_FIVE_LOCK");
    lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[0]=	GET_ATOM(dpy,"Base");
    lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[1]=	GET_ATOM(dpy,"Shift");
    lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[3]=	GET_ATOM(dpy,"Shift_Alt");
    lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[4]=	GET_ATOM(dpy,"X");
    lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[5]=	GET_ATOM(dpy,"X_Shift");
    lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[6]=	GET_ATOM(dpy,"X_Alt_Base");
    lnames_EIGHT_LEVEL_LEVEL_FIVE_LOCK[7]=	GET_ATOM(dpy,"X_Shift_Alt");
    dflt_types[18].name= GET_ATOM(dpy,"EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK");
    lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[0]=	GET_ATOM(dpy,"Base");
    lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[1]=	GET_ATOM(dpy,"Shift");
    lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[3]=	GET_ATOM(dpy,"Shift_Alt");
    lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[4]=	GET_ATOM(dpy,"X");
    lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[5]=	GET_ATOM(dpy,"X_Shift");
    lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[6]=	GET_ATOM(dpy,"X_Alt_Base");
    lnames_EIGHT_LEVEL_ALPHABETIC_LEVEL_FIVE_LOCK[7]=	GET_ATOM(dpy,"X_Shift_Alt");
    dflt_types[19].name= GET_ATOM(dpy,"EIGHT_LEVEL_SEMIALPHABETIC");
    lnames_EIGHT_LEVEL_SEMIALPHABETIC[0]=	GET_ATOM(dpy,"Base");
    lnames_EIGHT_LEVEL_SEMIALPHABETIC[1]=	GET_ATOM(dpy,"Shift");
    lnames_EIGHT_LEVEL_SEMIALPHABETIC[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_EIGHT_LEVEL_SEMIALPHABETIC[3]=	GET_ATOM(dpy,"Shift_Alt");
    lnames_EIGHT_LEVEL_SEMIALPHABETIC[4]=	GET_ATOM(dpy,"X");
    lnames_EIGHT_LEVEL_SEMIALPHABETIC[5]=	GET_ATOM(dpy,"X_Shift");
    lnames_EIGHT_LEVEL_SEMIALPHABETIC[6]=	GET_ATOM(dpy,"X_Alt_Base");
    lnames_EIGHT_LEVEL_SEMIALPHABETIC[7]=	GET_ATOM(dpy,"X_Shift_Alt");
    dflt_types[20].name= GET_ATOM(dpy,"FOUR_LEVEL");
    lnames_FOUR_LEVEL[0]=	GET_ATOM(dpy,"Base");
    lnames_FOUR_LEVEL[1]=	GET_ATOM(dpy,"Shift");
    lnames_FOUR_LEVEL[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_FOUR_LEVEL[3]=	GET_ATOM(dpy,"Shift_Alt");
    dflt_types[21].name= GET_ATOM(dpy,"FOUR_LEVEL_ALPHABETIC");
    lnames_FOUR_LEVEL_ALPHABETIC[0]=	GET_ATOM(dpy,"Base");
    lnames_FOUR_LEVEL_ALPHABETIC[1]=	GET_ATOM(dpy,"Shift");
    lnames_FOUR_LEVEL_ALPHABETIC[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_FOUR_LEVEL_ALPHABETIC[3]=	GET_ATOM(dpy,"Shift_Alt");
    dflt_types[22].name= GET_ATOM(dpy,"FOUR_LEVEL_SEMIALPHABETIC");
    lnames_FOUR_LEVEL_SEMIALPHABETIC[0]=	GET_ATOM(dpy,"Base");
    lnames_FOUR_LEVEL_SEMIALPHABETIC[1]=	GET_ATOM(dpy,"Shift");
    lnames_FOUR_LEVEL_SEMIALPHABETIC[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_FOUR_LEVEL_SEMIALPHABETIC[3]=	GET_ATOM(dpy,"Shift_Alt");
    dflt_types[23].name= GET_ATOM(dpy,"FOUR_LEVEL_MIXED_KEYPAD");
    lnames_FOUR_LEVEL_MIXED_KEYPAD[0]=	GET_ATOM(dpy,"Base");
    lnames_FOUR_LEVEL_MIXED_KEYPAD[1]=	GET_ATOM(dpy,"Number");
    lnames_FOUR_LEVEL_MIXED_KEYPAD[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_FOUR_LEVEL_MIXED_KEYPAD[3]=	GET_ATOM(dpy,"Shift_Alt");
    dflt_types[24].name= GET_ATOM(dpy,"FOUR_LEVEL_X");
    lnames_FOUR_LEVEL_X[0]=	GET_ATOM(dpy,"Base");
    lnames_FOUR_LEVEL_X[1]=	GET_ATOM(dpy,"Alt_Base");
    lnames_FOUR_LEVEL_X[2]=	GET_ATOM(dpy,"Shift_Alt");
    lnames_FOUR_LEVEL_X[3]=	GET_ATOM(dpy,"Ctrl_Alt");
    dflt_types[25].name= GET_ATOM(dpy,"SEPARATE_CAPS_AND_SHIFT_ALPHABETIC");
    lnames_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC[0]=	GET_ATOM(dpy,"Base");
    lnames_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC[1]=	GET_ATOM(dpy,"Shift");
    lnames_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC[2]=	GET_ATOM(dpy,"AltGr_Base");
    lnames_SEPARATE_CAPS_AND_SHIFT_ALPHABETIC[3]=	GET_ATOM(dpy,"Shift_AltGr");
    dflt_types[26].name= GET_ATOM(dpy,"FOUR_LEVEL_PLUS_LOCK");
    lnames_FOUR_LEVEL_PLUS_LOCK[0]=	GET_ATOM(dpy,"Base");
    lnames_FOUR_LEVEL_PLUS_LOCK[1]=	GET_ATOM(dpy,"Shift");
    lnames_FOUR_LEVEL_PLUS_LOCK[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_FOUR_LEVEL_PLUS_LOCK[3]=	GET_ATOM(dpy,"Shift_Alt");
    lnames_FOUR_LEVEL_PLUS_LOCK[4]=	GET_ATOM(dpy,"Lock");
    dflt_types[27].name= GET_ATOM(dpy,"FOUR_LEVEL_KEYPAD");
    lnames_FOUR_LEVEL_KEYPAD[0]=	GET_ATOM(dpy,"Base");
    lnames_FOUR_LEVEL_KEYPAD[1]=	GET_ATOM(dpy,"Number");
    lnames_FOUR_LEVEL_KEYPAD[2]=	GET_ATOM(dpy,"Alt_Base");
    lnames_FOUR_LEVEL_KEYPAD[3]=	GET_ATOM(dpy,"Alt_Number");
}
#define NUM_SYMBOLS	457
static KeySym	symCache[NUM_SYMBOLS]= {
           NoSymbol,       XK_Escape,            XK_1,       XK_exclam,
      XK_exclamdown,   XK_exclamdown,            XK_2,           XK_at,
     XK_twosuperior, XK_threesuperior,            XK_3,   XK_numbersign,
     XK_ecircumflex,  XK_Ecircumflex,            XK_4,       XK_dollar,
        XK_EuroSign,     XK_sterling,            XK_5,      XK_percent,
               XK_6,  XK_asciicircum,            XK_7,    XK_ampersand,
     XK_ucircumflex,  XK_Ucircumflex,            XK_8,     XK_asterisk,
     XK_icircumflex,  XK_Icircumflex,            XK_9,    XK_parenleft,
     XK_ocircumflex,  XK_Ocircumflex,            XK_0,   XK_parenright,
          XK_degree, XK_dead_abovering,        XK_minus,   XK_underscore,
        XK_division,    XK_plusminus,        XK_equal,         XK_plus,
        XK_notequal,        NoSymbol,    XK_BackSpace,    XK_BackSpace,
             XK_Tab, XK_ISO_Left_Tab,            XK_q,            XK_Q,
     XK_acircumflex,  XK_Acircumflex,            XK_w,            XK_W,
      XK_ediaeresis,   XK_Ediaeresis,            XK_e,            XK_E,
          XK_eacute,       XK_Eacute,            XK_r,            XK_R,
      XK_registered,    XK_copyright,            XK_t,            XK_T,
       XK_trademark,        NoSymbol,            XK_y,            XK_Y,
      XK_udiaeresis,   XK_Udiaeresis,            XK_u,            XK_U,
          XK_ugrave,       XK_Ugrave,            XK_i,            XK_I,
      XK_idiaeresis,   XK_Idiaeresis,            XK_o,            XK_O,
              XK_oe,           XK_OE,            XK_p,            XK_P,
         XK_section,        NoSymbol,  XK_bracketleft,    XK_braceleft,
    XK_guillemotleft, XK_leftdoublequotemark, XK_bracketright,   XK_braceright,
    XK_guillemotright, XK_rightdoublequotemark,       XK_Return,    XK_Control_L,
               XK_a,            XK_A,       XK_agrave,       XK_Agrave,
               XK_s,            XK_S,       XK_ssharp,        NoSymbol,
               XK_d,            XK_D,       XK_egrave,       XK_Egrave,
               XK_f,            XK_F,   XK_VoidSymbol,   XK_VoidSymbol,
               XK_g,            XK_G,   XK_dead_greek,   XK_VoidSymbol,
               XK_h,            XK_H,   XK_ydiaeresis,   XK_Ydiaeresis,
               XK_j,            XK_J,   XK_udiaeresis,   XK_Udiaeresis,
               XK_k,            XK_K,   XK_idiaeresis,   XK_Idiaeresis,
               XK_l,            XK_L,   XK_odiaeresis,   XK_Odiaeresis,
       XK_semicolon,        XK_colon,   XK_dead_acute, XK_dead_abovering,
      XK_apostrophe,     XK_quotedbl,   XK_dead_grave, XK_dead_diaeresis,
           XK_grave,   XK_asciitilde,   XK_dead_grave,   XK_dead_tilde,
         XK_Shift_L,    XK_backslash,          XK_bar,   XK_VoidSymbol,
    XK_doublelowquotemark,            XK_z,            XK_Z,   XK_adiaeresis,
      XK_Adiaeresis,            XK_x,            XK_X,     XK_multiply,
        XK_division,            XK_c,            XK_C,     XK_ccedilla,
        XK_Ccedilla,            XK_v,            XK_V,            XK_b,
               XK_B,            XK_n,            XK_N,       XK_ntilde,
          XK_Ntilde,            XK_m,            XK_M,           XK_mu,
           NoSymbol,        XK_comma,         XK_less, XK_lessthanequal,
           NoSymbol,       XK_period,      XK_greater, XK_greaterthanequal,
           NoSymbol,        XK_slash,     XK_question, XK_questiondown,
           NoSymbol,      XK_Shift_R,  XK_KP_Multiply,  XK_KP_Multiply,
     XK_KP_Multiply,  XK_KP_Multiply, XK_XF86ClearGrab,        XK_Alt_L,
          XK_Meta_L,        XK_space,        XK_space, XK_nobreakspace,
           XK_U202F,    XK_Caps_Lock, XK_ISO_Next_Group,           XK_F1,
              XK_F1,           XK_F1,           XK_F1, XK_XF86Switch_VT_1,
              XK_F2,           XK_F2,           XK_F2,           XK_F2,
    XK_XF86Switch_VT_2,           XK_F3,           XK_F3,           XK_F3,
              XK_F3, XK_XF86Switch_VT_3,           XK_F4,           XK_F4,
              XK_F4,           XK_F4, XK_XF86Switch_VT_4,           XK_F5,
              XK_F5,           XK_F5,           XK_F5, XK_XF86Switch_VT_5,
              XK_F6,           XK_F6,           XK_F6,           XK_F6,
    XK_XF86Switch_VT_6,           XK_F7,           XK_F7,           XK_F7,
              XK_F7, XK_XF86Switch_VT_7,           XK_F8,           XK_F8,
              XK_F8,           XK_F8, XK_XF86Switch_VT_8,           XK_F9,
              XK_F9,           XK_F9,           XK_F9, XK_XF86Switch_VT_9,
             XK_F10,          XK_F10,          XK_F10,          XK_F10,
    XK_XF86Switch_VT_10,     XK_Num_Lock,  XK_Scroll_Lock,      XK_KP_Home,
            XK_KP_7,        XK_KP_Up,         XK_KP_8,     XK_KP_Prior,
            XK_KP_9,  XK_KP_Subtract,  XK_KP_Subtract,  XK_KP_Subtract,
     XK_KP_Subtract, XK_XF86Prev_VMode,      XK_KP_Left,         XK_KP_4,
        XK_KP_Begin,         XK_KP_5,     XK_KP_Right,         XK_KP_6,
          XK_KP_Add,       XK_KP_Add,       XK_KP_Add,       XK_KP_Add,
    XK_XF86Next_VMode,       XK_KP_End,         XK_KP_1,      XK_KP_Down,
            XK_KP_2,      XK_KP_Next,         XK_KP_3,    XK_KP_Insert,
            XK_KP_0,    XK_KP_Delete,   XK_KP_Decimal, XK_ISO_Level3_Shift,
            XK_less,      XK_greater, XK_lessthanequal, XK_greaterthanequal,
             XK_F11,          XK_F11,          XK_F11,          XK_F11,
    XK_XF86Switch_VT_11,          XK_F12,          XK_F12,          XK_F12,
             XK_F12, XK_XF86Switch_VT_12,     XK_Katakana,     XK_Hiragana,
     XK_Henkan_Mode, XK_Hiragana_Katakana,     XK_Muhenkan,     XK_KP_Enter,
       XK_Control_R,    XK_KP_Divide,    XK_KP_Divide,    XK_KP_Divide,
       XK_KP_Divide,   XK_XF86Ungrab,        XK_Print,      XK_Sys_Req,
    XK_ISO_Level3_Shift,     XK_Linefeed,         XK_Home,           XK_Up,
           XK_Prior,         XK_Left,        XK_Right,          XK_End,
            XK_Down,         XK_Next,       XK_Insert,       XK_Delete,
    XK_XF86AudioMute, XK_XF86AudioLowerVolume, XK_XF86AudioRaiseVolume, XK_XF86PowerOff,
        XK_KP_Equal,    XK_plusminus,        XK_Pause,        XK_Break,
     XK_XF86LaunchA,   XK_KP_Decimal,   XK_KP_Decimal,       XK_Hangul,
    XK_Hangul_Hanja,      XK_Super_L,      XK_Super_R,         XK_Menu,
          XK_Cancel,         XK_Redo,     XK_SunProps,         XK_Undo,
        XK_SunFront,     XK_XF86Copy,     XK_XF86Open,    XK_XF86Paste,
            XK_Find,      XK_XF86Cut,         XK_Help,   XK_XF86MenuKB,
    XK_XF86Calculator,    XK_XF86Sleep,   XK_XF86WakeUp, XK_XF86Explorer,
        XK_XF86Send,     XK_XF86Xfer,  XK_XF86Launch1,  XK_XF86Launch2,
         XK_XF86WWW,      XK_XF86DOS, XK_XF86ScreenSaver, XK_XF86RotateWindows,
    XK_XF86TaskPane,     XK_XF86Mail, XK_XF86Favorites, XK_XF86MyComputer,
        XK_XF86Back,  XK_XF86Forward,    XK_XF86Eject, XK_XF86AudioNext,
    XK_XF86AudioPlay, XK_XF86AudioPause, XK_XF86AudioPrev, XK_XF86AudioStop,
       XK_XF86Eject, XK_XF86AudioRecord, XK_XF86AudioRewind,    XK_XF86Phone,
       XK_XF86Tools, XK_XF86HomePage,   XK_XF86Reload,    XK_XF86Close,
    XK_XF86ScrollUp, XK_XF86ScrollDown,    XK_parenleft,   XK_parenright,
       XK_XF86Tools,  XK_XF86Launch5,  XK_XF86Launch6,  XK_XF86Launch7,
     XK_XF86Launch8,  XK_XF86Launch9, XK_XF86AudioMicMute, XK_XF86TouchpadToggle,
    XK_XF86TouchpadOn, XK_XF86TouchpadOff,  XK_Mode_switch,        NoSymbol,
           XK_Alt_L,        NoSymbol,       XK_Meta_L,        NoSymbol,
         XK_Super_L,        NoSymbol,      XK_Hyper_L, XK_XF86AudioPlay,
    XK_XF86AudioPause,  XK_XF86Launch3,  XK_XF86Launch4,  XK_XF86Suspend,
       XK_XF86Close, XK_XF86AudioPlay, XK_XF86AudioForward,        XK_Print,
      XK_XF86WebCam, XK_XF86AudioPreset,     XK_XF86Mail, XK_XF86Messenger,
      XK_XF86Search,       XK_XF86Go,  XK_XF86Finance,     XK_XF86Game,
        XK_XF86Shop,       XK_Cancel, XK_XF86MonBrightnessDown, XK_XF86MonBrightnessUp,
    XK_XF86AudioMedia,  XK_XF86Display, XK_XF86KbdLightOnOff, XK_XF86KbdBrightnessDown,
    XK_XF86KbdBrightnessUp,    XK_XF86Eject,      XK_XF86New,         XK_Redo,
     XK_XF86LaunchB,     XK_XF86Send,    XK_XF86Reply, XK_XF86MailForward,
        XK_XF86Save, XK_XF86Documents,  XK_XF86Battery, XK_XF86Bluetooth,
        XK_XF86WLAN,      XK_XF86UWB, XK_XF86Next_VMode, XK_XF86Prev_VMode,
    XK_XF86MonBrightnessCycle, XK_XF86BrightnessAuto, XK_XF86DisplayOff,     XK_XF86WWAN,
      XK_XF86RFKill
};
static XkbSymMapRec	symMap[NUM_KEYS]= {
    {  0, 0x0,   0 }, {  0, 0x0,   0 }, {  0, 0x0,   0 }, {  0, 0x0,   0 },
    {  0, 0x0,   0 }, {  0, 0x0,   0 }, {  0, 0x0,   0 }, {  0, 0x0,   0 },
    {  0, 0x0,   0 }, {  0, 0x1,   1 }, { 20, 0x1,   2 }, { 20, 0x1,   6 },
    { 20, 0x1,  10 }, { 20, 0x1,  14 }, {  1, 0x1,  18 }, {  1, 0x1,  20 },
    { 20, 0x1,  22 }, { 20, 0x1,  26 }, { 20, 0x1,  30 }, { 20, 0x1,  34 },
    { 20, 0x1,  38 }, { 20, 0x1,  42 }, {  1, 0x1,  46 }, {  1, 0x1,  48 },
    { 21, 0x1,  50 }, { 21, 0x1,  54 }, { 21, 0x1,  58 }, { 22, 0x1,  62 },
    { 22, 0x1,  66 }, { 21, 0x1,  70 }, { 21, 0x1,  74 }, { 21, 0x1,  78 },
    { 21, 0x1,  82 }, { 22, 0x1,  86 }, { 20, 0x1,  90 }, { 20, 0x1,  94 },
    {  0, 0x1,  98 }, {  0, 0x1,  99 }, { 21, 0x1, 100 }, { 22, 0x1, 104 },
    { 21, 0x1, 108 }, { 22, 0x1, 112 }, { 22, 0x1, 116 }, { 21, 0x1, 120 },
    { 21, 0x1, 124 }, { 21, 0x1, 128 }, { 21, 0x1, 132 }, { 20, 0x1, 136 },
    { 20, 0x1, 140 }, { 20, 0x1, 144 }, {  0, 0x1, 148 }, { 20, 0x1, 149 },
    { 21, 0x1, 153 }, { 22, 0x1, 157 }, { 21, 0x1, 161 }, {  2, 0x1, 165 },
    {  2, 0x1, 167 }, { 21, 0x1, 169 }, { 22, 0x1, 173 }, { 20, 0x1, 177 },
    { 20, 0x1, 181 }, { 20, 0x1, 185 }, {  0, 0x1, 189 }, { 12, 0x1, 190 },
    {  1, 0x1, 195 }, { 20, 0x1, 197 }, {  1, 0x1, 201 }, { 12, 0x1, 203 },
    { 12, 0x1, 208 }, { 12, 0x1, 213 }, { 12, 0x1, 218 }, { 12, 0x1, 223 },
    { 12, 0x1, 228 }, { 12, 0x1, 233 }, { 12, 0x1, 238 }, { 12, 0x1, 243 },
    { 12, 0x1, 248 }, {  0, 0x1, 253 }, {  0, 0x1, 254 }, {  3, 0x1, 255 },
    {  3, 0x1, 257 }, {  3, 0x1, 259 }, { 12, 0x1, 261 }, {  3, 0x1, 266 },
    {  3, 0x1, 268 }, {  3, 0x1, 270 }, { 12, 0x1, 272 }, {  3, 0x1, 277 },
    {  3, 0x1, 279 }, {  3, 0x1, 281 }, {  3, 0x1, 283 }, {  3, 0x1, 285 },
    {  0, 0x1, 287 }, {  0, 0x0,   0 }, { 20, 0x1, 288 }, { 12, 0x1, 292 },
    { 12, 0x1, 297 }, {  0, 0x0,   0 }, {  0, 0x1, 302 }, {  0, 0x1, 303 },
    {  0, 0x1, 304 }, {  0, 0x1, 305 }, {  0, 0x1, 306 }, {  0, 0x0,   0 },
    {  0, 0x1, 307 }, {  0, 0x1, 308 }, { 12, 0x1, 309 }, {  9, 0x1, 314 },
    {  0, 0x1, 316 }, {  0, 0x1, 317 }, {  0, 0x1, 318 }, {  0, 0x1, 319 },
    {  0, 0x1, 320 }, {  0, 0x1, 321 }, {  0, 0x1, 322 }, {  0, 0x1, 323 },
    {  0, 0x1, 324 }, {  0, 0x1, 325 }, {  0, 0x1, 326 }, {  0, 0x1, 327 },
    {  0, 0x0,   0 }, {  0, 0x1, 328 }, {  0, 0x1, 329 }, {  0, 0x1, 330 },
    {  0, 0x1, 331 }, {  0, 0x1, 332 }, {  0, 0x1, 333 }, {  6, 0x1, 334 },
    {  0, 0x1, 336 }, {  3, 0x1, 337 }, {  0, 0x1, 339 }, {  0, 0x1, 340 },
    {  0, 0x0,   0 }, {  0, 0x1, 341 }, {  0, 0x1, 342 }, {  0, 0x1, 343 },
    {  0, 0x1, 344 }, {  0, 0x1, 345 }, {  0, 0x1, 346 }, {  0, 0x1, 347 },
    {  0, 0x1, 348 }, {  0, 0x1, 349 }, {  0, 0x1, 350 }, {  0, 0x1, 351 },
    {  0, 0x1, 352 }, {  0, 0x1, 353 }, {  0, 0x1, 354 }, {  0, 0x1, 355 },
    {  0, 0x1, 356 }, {  0, 0x0,   0 }, {  0, 0x1, 357 }, {  0, 0x1, 358 },
    {  0, 0x1, 359 }, {  0, 0x1, 360 }, {  0, 0x0,   0 }, {  0, 0x1, 361 },
    {  0, 0x1, 362 }, {  0, 0x1, 363 }, {  0, 0x1, 364 }, {  0, 0x1, 365 },
    {  0, 0x1, 366 }, {  0, 0x1, 367 }, {  0, 0x1, 368 }, {  0, 0x1, 369 },
    {  0, 0x1, 370 }, {  0, 0x1, 371 }, {  0, 0x1, 372 }, {  0, 0x1, 373 },
    {  0, 0x0,   0 }, {  0, 0x1, 374 }, {  0, 0x1, 437 }, {  0, 0x1, 375 },
    {  1, 0x1, 376 }, {  0, 0x1, 378 }, {  1, 0x1, 379 }, {  0, 0x1, 381 },
    {  0, 0x1, 382 }, {  0, 0x1, 383 }, {  0, 0x0,   0 }, {  0, 0x1, 384 },
    {  0, 0x1, 385 }, {  0, 0x1, 386 }, {  0, 0x1, 387 }, {  0, 0x0,   0 },
    {  0, 0x0,   0 }, {  0, 0x1, 388 }, {  0, 0x1, 389 }, {  0, 0x1, 390 },
    {  0, 0x1, 391 }, {  0, 0x1, 438 }, {  0, 0x1, 439 }, {  0, 0x1, 392 },
    {  0, 0x1, 393 }, {  0, 0x1, 394 }, {  0, 0x1, 395 }, {  0, 0x1, 396 },
    {  0, 0x1, 397 }, {  0, 0x0,   0 }, {  0, 0x1, 398 }, {  0, 0x1, 399 },
    {  0, 0x1, 400 }, {  0, 0x1, 401 }, {  0, 0x0,   0 }, {  0, 0x1, 402 },
    {  1, 0x1, 403 }, {  1, 0x1, 405 }, {  1, 0x1, 407 }, {  1, 0x1, 409 },
    {  0, 0x1, 411 }, {  0, 0x1, 412 }, {  0, 0x1, 413 }, {  0, 0x1, 414 },
    {  0, 0x1, 440 }, {  0, 0x1, 415 }, {  0, 0x1, 416 }, {  0, 0x1, 417 },
    {  0, 0x1, 418 }, {  0, 0x0,   0 }, {  0, 0x1, 419 }, {  0, 0x0,   0 },
    {  0, 0x1, 420 }, {  0, 0x1, 421 }, {  0, 0x0,   0 }, {  0, 0x1, 422 },
    {  0, 0x1, 423 }, {  0, 0x1, 424 }, {  0, 0x1, 425 }, {  0, 0x1, 426 },
    {  0, 0x1, 427 }, {  0, 0x1, 428 }, {  0, 0x0,   0 }, {  0, 0x1, 429 },
    {  0, 0x1, 430 }, {  0, 0x1, 431 }, {  0, 0x1, 432 }, {  0, 0x1, 433 },
    {  0, 0x1, 434 }, {  0, 0x1, 435 }, {  0, 0x1, 436 }, {  0, 0x1, 441 },
    {  0, 0x1, 442 }, {  0, 0x1, 443 }, {  0, 0x1, 444 }, {  0, 0x1, 445 },
    {  0, 0x1, 446 }, {  0, 0x1, 447 }, {  0, 0x1, 448 }, {  0, 0x1, 449 },
    {  0, 0x0,   0 }, {  0, 0x1, 450 }, {  0, 0x1, 451 }, {  0, 0x1, 452 },
    {  0, 0x1, 453 }, {  0, 0x1, 454 }, {  0, 0x1, 455 }, {  0, 0x1, 456 }
};
static XkbClientMapRec clientMap= {
    NUM_TYPES,   NUM_TYPES,   types, 
    NUM_SYMBOLS, NUM_SYMBOLS, symCache, symMap
};

#define NUM_ACTIONS	1
static XkbAnyAction 	actionCache[NUM_ACTIONS]= {
    {       XkbSA_NoAction, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }
};
static unsigned short	keyActions[NUM_KEYS]= {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
};
static XkbBehavior behaviors[NUM_KEYS]= {
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 },
    {   0,    0 }, {   0,    0 }, {   0,    0 }, {   0,    0 }
};
static unsigned char explicit_parts[NUM_KEYS]= {
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0, 0x01, 0x01, 0x01, 0x01,    0,    0,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,    0,    0,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01,    0,    0, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01,    0, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,    0, 0x0f,
       0, 0x01,    0, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f,
    0x0f, 0x0f, 0x0f, 0x0f, 0x0f,    0,    0,    0,
       0,    0, 0x0f,    0,    0,    0, 0x0f,    0,
       0,    0,    0,    0, 0x01,    0, 0x01, 0x0f,
    0x0f,    0,    0,    0,    0,    0,    0,    0,
       0,    0, 0x0f, 0x0f, 0x01,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0, 0x0f,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0,
       0,    0,    0,    0,    0,    0,    0,    0
};
static unsigned short vmodmap[NUM_KEYS]= {
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0,      0,
         0,      0,      0,      0,      0,      0,      0};
static XkbServerMapRec serverMap= {
    1, 1, (XkbAction *)actionCache,
    behaviors, keyActions, explicit_parts,
    {   0,   0,   0,   0,   0,   0,   0,   0,
        0,   0,   0,   0,   0,   0,   0,   0 },
    vmodmap
};

/* compat name is "complete" */
static XkbSymInterpretRec dfltSI[123]= {
    {    XK_ISO_Level2_Latch, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_Exactly, ShiftMask,
         255,
       {      XkbSA_LatchMods, { 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Shift_Lock, 0x0000,
         XkbSI_AnyOf, ShiftMask|LockMask,
         255,
       {       XkbSA_LockMods, { 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Num_Lock, 0x0000,
         XkbSI_AnyOf, 0xff,
         0,
       {       XkbSA_LockMods, { 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_ISO_Level3_Shift, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOf, 0xff,
         2,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00 } } },
    {    XK_ISO_Level3_Latch, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOf, 0xff,
         2,
       {      XkbSA_LatchMods, { 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00 } } },
    {    XK_ISO_Level3_Lock, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOf, 0xff,
         2,
       {       XkbSA_LockMods, { 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00 } } },
    {    XK_Alt_L, 0x0000,
         XkbSI_AnyOf, 0xff,
         1,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Alt_R, 0x0000,
         XkbSI_AnyOf, 0xff,
         1,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Meta_L, 0x0000,
         XkbSI_AnyOf, 0xff,
         10,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Meta_R, 0x0000,
         XkbSI_AnyOf, 0xff,
         10,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Super_L, 0x0000,
         XkbSI_AnyOf, 0xff,
         11,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Super_R, 0x0000,
         XkbSI_AnyOf, 0xff,
         11,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Hyper_L, 0x0000,
         XkbSI_AnyOf, 0xff,
         12,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Hyper_R, 0x0000,
         XkbSI_AnyOf, 0xff,
         12,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Scroll_Lock, 0x0000,
         XkbSI_AnyOf, 0xff,
         7,
       {       XkbSA_LockMods, { 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Level5_Shift, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOf, 0xff,
         8,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Level5_Latch, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOf, 0xff,
         8,
       {      XkbSA_LatchMods, { 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Level5_Lock, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOf, 0xff,
         8,
       {       XkbSA_LockMods, { 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 } } },
    {    XK_Mode_switch, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOfOrNone, 0xff,
         9,
       {       XkbSA_SetGroup, { 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Level3_Shift, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00 } } },
    {    XK_ISO_Level3_Latch, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {      XkbSA_LatchMods, { 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00 } } },
    {    XK_ISO_Level3_Lock, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {       XkbSA_LockMods, { 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00 } } },
    {    XK_ISO_Group_Latch, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOfOrNone, 0xff,
         9,
       {     XkbSA_LatchGroup, { 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Next_Group, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOfOrNone, 0xff,
         9,
       {      XkbSA_LockGroup, { 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Prev_Group, 0x0000,
         XkbSI_LevelOneOnly|XkbSI_AnyOfOrNone, 0xff,
         9,
       {      XkbSA_LockGroup, { 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_First_Group, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {      XkbSA_LockGroup, { 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Last_Group, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {      XkbSA_LockGroup, { 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_1, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0xff, 0xff, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_KP_End, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0xff, 0xff, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_KP_2, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_KP_Down, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_KP_3, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_KP_Next, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_KP_4, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Left, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_6, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Right, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_7, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00 } } },
    {    XK_KP_Home, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00 } } },
    {    XK_KP_8, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00 } } },
    {    XK_KP_Up, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00 } } },
    {    XK_KP_9, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00 } } },
    {    XK_KP_Prior, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00 } } },
    {    XK_KP_5, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Begin, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_F2, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Divide, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_F3, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x04, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Multiply, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x04, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_F4, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x04, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Subtract, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x04, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Separator, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Add, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_0, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_LockPtrBtn, { 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Insert, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_LockPtrBtn, { 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Decimal, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_LockPtrBtn, { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_KP_Delete, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_LockPtrBtn, { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_F25, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_F26, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x04, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_F27, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00 } } },
    {    XK_F29, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00 } } },
    {    XK_F31, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_F33, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0xff, 0xff, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_F35, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_MovePtr, { 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_Pointer_Button_Dflt, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_Button1, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_Button2, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_Button3, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_DblClick_Dflt, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_DblClick1, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_DblClick2, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_DblClick3, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {         XkbSA_PtrBtn, { 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_Drag_Dflt, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_LockPtrBtn, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_Drag1, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_LockPtrBtn, { 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_Drag2, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_LockPtrBtn, { 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_Drag3, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_LockPtrBtn, { 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_EnableKeys, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00 } } },
    {    XK_Pointer_Accelerate, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00 } } },
    {    XK_Pointer_DfltBtnNext, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Pointer_DfltBtnPrev, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {     XkbSA_SetPtrDflt, { 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_AccessX_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00 } } },
    {    XK_AccessX_Feedback_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 } } },
    {    XK_RepeatKeys_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00 } } },
    {    XK_SlowKeys_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00 } } },
    {    XK_BounceKeys_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00 } } },
    {    XK_StickyKeys_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00 } } },
    {    XK_MouseKeys_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00 } } },
    {    XK_MouseKeys_Accel_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00 } } },
    {    XK_Overlay1_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00 } } },
    {    XK_Overlay2_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00 } } },
    {    XK_AudibleBell_Enable, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_LockControls, { 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00 } } },
    {    XK_Terminate_Server, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {      XkbSA_Terminate, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_Alt_L, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00 } } },
    {    XK_Alt_R, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00 } } },
    {    XK_Meta_L, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00 } } },
    {    XK_Meta_R, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00 } } },
    {    XK_Super_L, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00 } } },
    {    XK_Super_R, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00 } } },
    {    XK_Hyper_L, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00 } } },
    {    XK_Hyper_R, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00 } } },
    {    XK_Shift_L, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_1, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_2, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_3, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_4, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_5, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_6, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_7, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_8, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_9, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_10, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_11, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86Switch_VT_12, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {   XkbSA_SwitchScreen, { 0x05, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 } } },
    {    XK_XF86LogGrabInfo, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {              Private, { 0x50, 0x72, 0x47, 0x72, 0x62, 0x73, 0x00 } } },
    {    XK_XF86LogWindowTree, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {              Private, { 0x50, 0x72, 0x57, 0x69, 0x6e, 0x73, 0x00 } } },
    {    XK_XF86Next_VMode, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {              Private, { 0x2b, 0x56, 0x4d, 0x6f, 0x64, 0x65, 0x00 } } },
    {    XK_XF86Prev_VMode, 0x0001,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {              Private, { 0x2d, 0x56, 0x4d, 0x6f, 0x64, 0x65, 0x00 } } },
    {    XK_ISO_Level5_Shift, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {        XkbSA_SetMods, { 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Level5_Latch, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {      XkbSA_LatchMods, { 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 } } },
    {    XK_ISO_Level5_Lock, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {       XkbSA_LockMods, { 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 } } },
    {    XK_Caps_Lock, 0x0000,
         XkbSI_AnyOfOrNone, 0xff,
         255,
       {       XkbSA_LockMods, { 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00 } } },
    {    NoSymbol, 0x0000,
         XkbSI_Exactly, LockMask,
         255,
       {       XkbSA_LockMods, { 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00 } } },
    {    NoSymbol, 0x0000,
         XkbSI_AnyOf, 0xff,
         255,
       {        XkbSA_SetMods, { 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } } }
};
#define num_dfltSI (sizeof(dfltSI)/sizeof(XkbSymInterpretRec))

static XkbCompatMapRec compatMap= {
    dfltSI,
    {   /* group compatibility */
        {            0,            0,            0 },
        {            0,            0, vmod_AltGMask },
        {            0,            0, vmod_AltGMask },
        {            0,            0, vmod_AltGMask }
    },
    num_dfltSI, num_dfltSI
};

static XkbIndicatorRec indicators= {
    0x7ff,
    {
        { 0x80, 0, 0x00, XkbIM_UseLocked, { LockMask,  LockMask, 0 }, 0 },
        { 0x80, 0, 0x00, XkbIM_UseLocked, { 0,  0, vmod_NumLocMask }, 0 },
        { 0x00, 0, 0x00, XkbIM_UseLocked, { 0,  0, vmod_ScrollLocMask }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x80, 0, 0x00, XkbIM_UseLocked, { ShiftMask,  ShiftMask, 0 }, 0 },
        { 0x80, XkbIM_UseEffective, 0xfe, 0, { 0,  0, 0 }, 0 },
        { 0x20, 0, 0x00, 0, { 0,  0, 0 }, XkbMouseKeysMask },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 },
        { 0x00, 0, 0x00, 0, { 0,  0, 0 }, 0 }
    }
};
static void
initIndicatorNames(DPYTYPE dpy,XkbDescPtr xkb)
{
    xkb->names->indicators[ 0]=	GET_ATOM(dpy,"Caps_Lock");
    xkb->names->indicators[ 1]=	GET_ATOM(dpy,"Num_Lock");
    xkb->names->indicators[ 2]=	GET_ATOM(dpy,"Scroll_Lock");
    xkb->names->indicators[ 3]=	GET_ATOM(dpy,"Compose");
    xkb->names->indicators[ 4]=	GET_ATOM(dpy,"Kana");
    xkb->names->indicators[ 5]=	GET_ATOM(dpy,"Sleep");
    xkb->names->indicators[ 6]=	GET_ATOM(dpy,"Suspend");
    xkb->names->indicators[ 7]=	GET_ATOM(dpy,"Mute");
    xkb->names->indicators[ 8]=	GET_ATOM(dpy,"Misc");
    xkb->names->indicators[ 9]=	GET_ATOM(dpy,"Mail");
    xkb->names->indicators[10]=	GET_ATOM(dpy,"Charging");
    xkb->names->indicators[11]=	GET_ATOM(dpy,"Shift_Lock");
    xkb->names->indicators[12]=	GET_ATOM(dpy,"Group_2");
    xkb->names->indicators[13]=	GET_ATOM(dpy,"Mouse_Keys");
}

static XkbPropertyRec g_props[1]= {
	{	"description", "Generic 105-key PC"	}
};

static XkbColorRec g_colors[6]= {
	{	  6, "black"	},
	{	  3, "white"	},
	{	  3, "grey20"	},
	{	  3, "grey10"	},
	{	  6, "green"	},
	{	  6, "green30"	}
};

static XkbPointRec pts_sh00o00[]= {
	{  180,  180 }
};
static XkbPointRec pts_sh00o01[]= {
	{   20,   10 }, {  160,  160 }
};

static XkbOutlineRec ol_sh00[]= {
	{ 1,	1,	10,	pts_sh00o00	},
	{ 2,	2,	10,	pts_sh00o01	}
};

static XkbPointRec pts_sh01o00[]= {
	{  380,  180 }
};
static XkbPointRec pts_sh01o01[]= {
	{   20,   10 }, {  360,  160 }
};

static XkbOutlineRec ol_sh01[]= {
	{ 1,	1,	10,	pts_sh01o00	},
	{ 2,	2,	10,	pts_sh01o01	}
};

static XkbPointRec pts_sh02o00[]= {
	{  280,  180 }
};
static XkbPointRec pts_sh02o01[]= {
	{   20,   10 }, {  260,  160 }
};

static XkbOutlineRec ol_sh02[]= {
	{ 1,	1,	10,	pts_sh02o00	},
	{ 2,	2,	10,	pts_sh02o01	}
};

static XkbPointRec pts_sh03o00[]= {
	{  280,  180 }
};
static XkbPointRec pts_sh03o01[]= {
	{   20,   10 }, {  260,  160 }
};

static XkbOutlineRec ol_sh03[]= {
	{ 1,	1,	10,	pts_sh03o00	},
	{ 2,	2,	10,	pts_sh03o01	}
};

static XkbPointRec pts_sh04o00[]= {
	{    0,    0 }, {  280,    0 }, {  280,  370 }, {   50,  370 },
	{   50,  180 }, {    0,  180 }
};
static XkbPointRec pts_sh04o01[]= {
	{   20,   10 }, {  260,   10 }, {  260,  350 }, {   70,  350 },
	{   70,  160 }, {   20,  160 }
};
static XkbPointRec pts_sh04o02[]= {
	{   50,    0 }, {  280,  370 }
};

static XkbOutlineRec ol_sh04[]= {
	{ 6,	6,	10,	pts_sh04o00	},
	{ 6,	6,	10,	pts_sh04o01	},
	{ 2,	2,	10,	pts_sh04o02	}
};

static XkbPointRec pts_sh05o00[]= {
	{  330,  180 }
};
static XkbPointRec pts_sh05o01[]= {
	{   20,   10 }, {  310,  160 }
};

static XkbOutlineRec ol_sh05[]= {
	{ 1,	1,	10,	pts_sh05o00	},
	{ 2,	2,	10,	pts_sh05o01	}
};

static XkbPointRec pts_sh06o00[]= {
	{  250,  180 }
};
static XkbPointRec pts_sh06o01[]= {
	{   20,   10 }, {  230,  160 }
};

static XkbOutlineRec ol_sh06[]= {
	{ 1,	1,	10,	pts_sh06o00	},
	{ 2,	2,	10,	pts_sh06o01	}
};

static XkbPointRec pts_sh07o00[]= {
	{  500,  180 }
};
static XkbPointRec pts_sh07o01[]= {
	{   20,   10 }, {  480,  160 }
};

static XkbOutlineRec ol_sh07[]= {
	{ 1,	1,	10,	pts_sh07o00	},
	{ 2,	2,	10,	pts_sh07o01	}
};

static XkbPointRec pts_sh08o00[]= {
	{  270,  180 }
};
static XkbPointRec pts_sh08o01[]= {
	{   20,   10 }, {  250,  160 }
};

static XkbOutlineRec ol_sh08[]= {
	{ 1,	1,	10,	pts_sh08o00	},
	{ 2,	2,	10,	pts_sh08o01	}
};

static XkbPointRec pts_sh09o00[]= {
	{  230,  180 }
};
static XkbPointRec pts_sh09o01[]= {
	{   20,   10 }, {  210,  160 }
};

static XkbOutlineRec ol_sh09[]= {
	{ 1,	1,	10,	pts_sh09o00	},
	{ 2,	2,	10,	pts_sh09o01	}
};

static XkbPointRec pts_sh10o00[]= {
	{ 1130,  180 }
};
static XkbPointRec pts_sh10o01[]= {
	{   20,   10 }, { 1110,  160 }
};

static XkbOutlineRec ol_sh10[]= {
	{ 1,	1,	10,	pts_sh10o00	},
	{ 2,	2,	10,	pts_sh10o01	}
};

static XkbPointRec pts_sh11o00[]= {
	{  370,  180 }
};
static XkbPointRec pts_sh11o01[]= {
	{   20,   10 }, {  350,  160 }
};

static XkbOutlineRec ol_sh11[]= {
	{ 1,	1,	10,	pts_sh11o00	},
	{ 2,	2,	10,	pts_sh11o01	}
};

static XkbPointRec pts_sh12o00[]= {
	{  180,  370 }
};
static XkbPointRec pts_sh12o01[]= {
	{   20,   10 }, {  160,  350 }
};

static XkbOutlineRec ol_sh12[]= {
	{ 1,	1,	10,	pts_sh12o00	},
	{ 2,	2,	10,	pts_sh12o01	}
};

static XkbPointRec pts_sh13o00[]= {
	{  750,  200 }
};

static XkbOutlineRec ol_sh13[]= {
	{ 1,	1,	0,	pts_sh13o00	}
};

static XkbPointRec pts_sh14o00[]= {
	{   50,   10 }
};

static XkbOutlineRec ol_sh14[]= {
	{ 1,	1,	0,	pts_sh14o00	}
};


static XkbShapeRec g_shapes[15]= {
	{ None,   2,   2, ol_sh00,         NULL,	        NULL,
					{    0,    0,  180,  180 } },
	{ None,   2,   2, ol_sh01,         NULL,	        NULL,
					{    0,    0,  380,  180 } },
	{ None,   2,   2, ol_sh02,         NULL,	        NULL,
					{    0,    0,  280,  180 } },
	{ None,   2,   2, ol_sh03,         NULL,	        NULL,
					{    0,    0,  280,  180 } },
	{ None,   3,   3, ol_sh04, &ol_sh04[ 2],	        NULL,
					{    0,    0,  280,  370 } },
	{ None,   2,   2, ol_sh05,         NULL,	        NULL,
					{    0,    0,  330,  180 } },
	{ None,   2,   2, ol_sh06,         NULL,	        NULL,
					{    0,    0,  250,  180 } },
	{ None,   2,   2, ol_sh07,         NULL,	        NULL,
					{    0,    0,  500,  180 } },
	{ None,   2,   2, ol_sh08,         NULL,	        NULL,
					{    0,    0,  270,  180 } },
	{ None,   2,   2, ol_sh09,         NULL,	        NULL,
					{    0,    0,  230,  180 } },
	{ None,   2,   2, ol_sh10,         NULL,	        NULL,
					{    0,    0, 1130,  180 } },
	{ None,   2,   2, ol_sh11,         NULL,	        NULL,
					{    0,    0,  370,  180 } },
	{ None,   2,   2, ol_sh12,         NULL,	        NULL,
					{    0,    0,  180,  370 } },
	{ None,   1,   1, ol_sh13,         NULL,	        NULL,
					{    0,    0,  750,  200 } },
	{ None,   1,   1, ol_sh14,         NULL,	        NULL,
					{    0,    0,   50,   10 } }
};
static XkbKeyRec keys_s00r00[]= {
	{ { "ESC" },	  10,    0,    2 },
	{ { "FK01" },	 200,    0,    1 },
	{ { "FK02" },	  10,    0,    1 },
	{ { "FK03" },	  10,    0,    1 },
	{ { "FK04" },	  10,    0,    1 },
	{ { "FK05" },	 110,    0,    1 },
	{ { "FK06" },	  10,    0,    1 },
	{ { "FK07" },	  10,    0,    1 },
	{ { "FK08" },	  10,    0,    1 },
	{ { "FK09" },	 110,    0,    1 },
	{ { "FK10" },	  10,    0,    1 },
	{ { "FK11" },	  10,    0,    1 },
	{ { "FK12" },	  10,    0,    1 },
	{ { "PRSC" },	  80,    0,    1 },
	{ { "SCLK" },	  10,    0,    1 },
	{ { "PAUS" },	  10,    0,    1 }
};
static XkbRowRec rows_s00[]= {
	{   10,   10, 16, 16, 0, keys_s00r00,  {    0,    0, 3500,  180 } }
};
static XkbKeyRec keys_s01r00[]= {
	{ { "TLDE" },	  10,    0,    1 },
	{ { "AE01" },	  10,    0,    1 },
	{ { "AE02" },	  10,    0,    1 },
	{ { "AE03" },	  10,    0,    1 },
	{ { "AE04" },	  10,    0,    1 },
	{ { "AE05" },	  10,    0,    1 },
	{ { "AE06" },	  10,    0,    1 },
	{ { "AE07" },	  10,    0,    1 },
	{ { "AE08" },	  10,    0,    1 },
	{ { "AE09" },	  10,    0,    1 },
	{ { "AE10" },	  10,    0,    1 },
	{ { "AE11" },	  10,    0,    1 },
	{ { "AE12" },	  10,    0,    1 },
	{ { "BKSP" },	  10,    1,    2 }
};
static XkbKeyRec keys_s01r01[]= {
	{ { "TAB" },	  10,    2,    2 },
	{ { "AD01" },	  10,    0,    1 },
	{ { "AD02" },	  10,    0,    1 },
	{ { "AD03" },	  10,    0,    1 },
	{ { "AD04" },	  10,    0,    1 },
	{ { "AD05" },	  10,    0,    1 },
	{ { "AD06" },	  10,    0,    1 },
	{ { "AD07" },	  10,    0,    1 },
	{ { "AD08" },	  10,    0,    1 },
	{ { "AD09" },	  10,    0,    1 },
	{ { "AD10" },	  10,    0,    1 },
	{ { "AD11" },	  10,    0,    1 },
	{ { "AD12" },	  10,    0,    1 },
	{ { "RTRN" },	  10,    4,    2 }
};
static XkbKeyRec keys_s01r02[]= {
	{ { "CAPS" },	  10,    5,    2 },
	{ { "AC01" },	  10,    0,    1 },
	{ { "AC02" },	  10,    0,    1 },
	{ { "AC03" },	  10,    0,    1 },
	{ { "AC04" },	  10,    0,    1 },
	{ { "AC05" },	  10,    0,    1 },
	{ { "AC06" },	  10,    0,    1 },
	{ { "AC07" },	  10,    0,    1 },
	{ { "AC08" },	  10,    0,    1 },
	{ { "AC09" },	  10,    0,    1 },
	{ { "AC10" },	  10,    0,    1 },
	{ { "AC11" },	  10,    0,    1 },
	{ { "BKSL" },	  10,    0,    1 }
};
static XkbKeyRec keys_s01r03[]= {
	{ { "LFSH" },	  10,    6,    2 },
	{ { "LSGT" },	  10,    0,    1 },
	{ { "AB01" },	  10,    0,    1 },
	{ { "AB02" },	  10,    0,    1 },
	{ { "AB03" },	  10,    0,    1 },
	{ { "AB04" },	  10,    0,    1 },
	{ { "AB05" },	  10,    0,    1 },
	{ { "AB06" },	  10,    0,    1 },
	{ { "AB07" },	  10,    0,    1 },
	{ { "AB08" },	  10,    0,    1 },
	{ { "AB09" },	  10,    0,    1 },
	{ { "AB10" },	  10,    0,    1 },
	{ { "RTSH" },	  10,    7,    2 }
};
static XkbKeyRec keys_s01r04[]= {
	{ { "LCTL" },	  10,    8,    2 },
	{ { "LWIN" },	  10,    9,    2 },
	{ { "LALT" },	  10,    9,    2 },
	{ { "SPCE" },	  10,   10,    1 },
	{ { "RALT" },	  10,    9,    2 },
	{ { "RWIN" },	  10,    9,    2 },
	{ { "MENU" },	  10,    9,    2 },
	{ { "RCTL" },	  10,    9,    2 }
};
static XkbRowRec rows_s01[]= {
	{   10,   10, 14, 14, 0, keys_s01r00,  {    0,    0, 2860,  180 } },
	{  200,   10, 14, 14, 0, keys_s01r01,  {    0,    0, 2860,  370 } },
	{  390,   10, 13, 13, 0, keys_s01r02,  {    0,    0, 2620,  180 } },
	{  580,   10, 13, 13, 0, keys_s01r03,  {    0,    0, 2860,  180 } },
	{  770,   10,  8,  8, 0, keys_s01r04,  {    0,    0, 2860,  180 } }
};
static XkbKeyRec keys_s02r00[]= {
	{ { "INS" },	  10,    0,    2 },
	{ { "HOME" },	  10,    0,    2 },
	{ { "PGUP" },	  10,    0,    2 }
};
static XkbKeyRec keys_s02r01[]= {
	{ { "DELE" },	  10,    0,    2 },
	{ { "END" },	  10,    0,    2 },
	{ { "PGDN" },	  10,    0,    2 }
};
static XkbKeyRec keys_s02r02[]= {
	{ { "UP" },	  10,    0,    2 }
};
static XkbKeyRec keys_s02r03[]= {
	{ { "LEFT" },	  10,    0,    2 },
	{ { "DOWN" },	  10,    0,    2 },
	{ { "RGHT" },	  10,    0,    2 }
};
static XkbRowRec rows_s02[]= {
	{   10,   10,  3,  3, 0, keys_s02r00,  {    0,    0,  570,  180 } },
	{  200,   10,  3,  3, 0, keys_s02r01,  {    0,    0,  570,  180 } },
	{  580,  200,  1,  1, 0, keys_s02r02,  {    0,    0,  190,  180 } },
	{  770,   10,  3,  3, 0, keys_s02r03,  {    0,    0,  570,  180 } }
};
static XkbKeyRec keys_s03r00[]= {
	{ { "NMLK" },	  10,    0,    2 },
	{ { "KPDV" },	  10,    0,    2 },
	{ { "KPMU" },	  10,    0,    2 },
	{ { "KPSU" },	  10,    0,    2 }
};
static XkbKeyRec keys_s03r01[]= {
	{ { "KP7" },	  10,    0,    1 },
	{ { "KP8" },	  10,    0,    1 },
	{ { "KP9" },	  10,    0,    1 },
	{ { "KPAD" },	  10,   12,    2 }
};
static XkbKeyRec keys_s03r02[]= {
	{ { "KP4" },	  10,    0,    1 },
	{ { "KP5" },	  10,    0,    1 },
	{ { "KP6" },	  10,    0,    1 }
};
static XkbKeyRec keys_s03r03[]= {
	{ { "KP1" },	  10,    0,    1 },
	{ { "KP2" },	  10,    0,    1 },
	{ { "KP3" },	  10,    0,    1 },
	{ { "KPEN" },	  10,   12,    2 }
};
static XkbKeyRec keys_s03r04[]= {
	{ { "KP0" },	  10,   11,    1 },
	{ { "KPDL" },	  10,    0,    1 }
};
static XkbRowRec rows_s03[]= {
	{   10,   10,  4,  4, 0, keys_s03r00,  {    0,    0,  760,  180 } },
	{  200,   10,  4,  4, 0, keys_s03r01,  {    0,    0,  760,  370 } },
	{  390,   10,  3,  3, 0, keys_s03r02,  {    0,    0,  570,  180 } },
	{  580,   10,  4,  4, 0, keys_s03r03,  {    0,    0,  760,  370 } },
	{  770,   10,  2,  2, 0, keys_s03r04,  {    0,    0,  570,  180 } }
};

static XkbSectionRec g_sections[4]= {
	{
	    None, /* name */
	       7, /* priority */
	     220, /* top */
	     190, /* left */
	    3510, /* width */
	     190, /* height */
	       0, /* angle */
	       1, /* num_rows */
	       0, /* num_doodads */
	       0, /* num_overlays */
	       1, /* sz_rows */
	       0, /* sz_doodads */
	       0, /* sz_overlays */
	    rows_s00,
	    NULL, /* doodads */
	    {    0,    0, 3510,  190 }, /* bounds */
	    NULL /* overlays */
	},
	{
	    None, /* name */
	       8, /* priority */
	     610, /* top */
	     190, /* left */
	    2870, /* width */
	     950, /* height */
	       0, /* angle */
	       5, /* num_rows */
	       0, /* num_doodads */
	       0, /* num_overlays */
	       5, /* sz_rows */
	       0, /* sz_doodads */
	       0, /* sz_overlays */
	    rows_s01,
	    NULL, /* doodads */
	    {    0,    0, 2870,  950 }, /* bounds */
	    NULL /* overlays */
	},
	{
	    None, /* name */
	       9, /* priority */
	     610, /* top */
	    3120, /* left */
	     580, /* width */
	     950, /* height */
	       0, /* angle */
	       4, /* num_rows */
	       0, /* num_doodads */
	       0, /* num_overlays */
	       4, /* sz_rows */
	       0, /* sz_doodads */
	       0, /* sz_overlays */
	    rows_s02,
	    NULL, /* doodads */
	    {    0,    0,  580,  950 }, /* bounds */
	    NULL /* overlays */
	},
	{
	    None, /* name */
	      10, /* priority */
	     610, /* top */
	    3760, /* left */
	     770, /* width */
	     950, /* height */
	       0, /* angle */
	       5, /* num_rows */
	       0, /* num_doodads */
	       0, /* num_overlays */
	       5, /* sz_rows */
	       0, /* sz_doodads */
	       0, /* sz_overlays */
	    rows_s03,
	    NULL, /* doodads */
	    {    0,    0,  770,  950 }, /* bounds */
	    NULL /* overlays */
	}
};

static Bool
_InitSections(DPYTYPE dpy,XkbGeometryPtr geom)
{
XkbSectionPtr	sections;

    sections= geom->sections;
}
static XkbDoodadRec g_doodads[7];
static void
_InitGeomDoodads(DPYTYPE dpy,XkbGeometryPtr geom)
{
register XkbDoodadPtr doodads;

    doodads= geom->doodads;
    doodads[0].any.name= GET_ATOM(dpy,"LedPanel");
    doodads[0].any.type= XkbSolidDoodad;
    doodads[0].any.priority= 0;
    doodads[0].any.top= 220;
    doodads[0].any.left= 3770;
    doodads[0].any.angle= 0;
    doodads[0].shape.color_ndx= 3;
    doodads[0].shape.shape_ndx= 13;

    doodads[1].any.name= GET_ATOM(dpy,"Num_Lock");
    doodads[1].any.type= XkbIndicatorDoodad;
    doodads[1].any.priority= 1;
    doodads[1].any.top= 370;
    doodads[1].any.left= 3820;
    doodads[1].any.angle= 0;
    doodads[1].indicator.shape_ndx= 14;
    doodads[1].indicator.on_color_ndx= 4;
    doodads[1].indicator.off_color_ndx= 5;

    doodads[2].any.name= GET_ATOM(dpy,"Caps_Lock");
    doodads[2].any.type= XkbIndicatorDoodad;
    doodads[2].any.priority= 2;
    doodads[2].any.top= 370;
    doodads[2].any.left= 4070;
    doodads[2].any.angle= 0;
    doodads[2].indicator.shape_ndx= 14;
    doodads[2].indicator.on_color_ndx= 4;
    doodads[2].indicator.off_color_ndx= 5;

    doodads[3].any.name= GET_ATOM(dpy,"Scroll_Lock");
    doodads[3].any.type= XkbIndicatorDoodad;
    doodads[3].any.priority= 3;
    doodads[3].any.top= 370;
    doodads[3].any.left= 4330;
    doodads[3].any.angle= 0;
    doodads[3].indicator.shape_ndx= 14;
    doodads[3].indicator.on_color_ndx= 4;
    doodads[3].indicator.off_color_ndx= 5;

    doodads[4].any.name= GET_ATOM(dpy,"NumLockLabel");
    doodads[4].any.type= XkbTextDoodad;
    doodads[4].any.priority= 4;
    doodads[4].any.top= 250;
    doodads[4].any.left= 3780;
    doodads[4].any.angle= 0;
    doodads[4].text.width= 198;
    doodads[4].text.height= 100;
    doodads[4].text.color_ndx= 0;
    doodads[4].text.text= "Num\nLock";
    doodads[4].text.font= "-*-helvetica-medium-r-normal--*-120-*-*-*-*-iso8859-1";

    doodads[5].any.name= GET_ATOM(dpy,"CapsLockLabel");
    doodads[5].any.type= XkbTextDoodad;
    doodads[5].any.priority= 5;
    doodads[5].any.top= 250;
    doodads[5].any.left= 4030;
    doodads[5].any.angle= 0;
    doodads[5].text.width= 264;
    doodads[5].text.height= 100;
    doodads[5].text.color_ndx= 0;
    doodads[5].text.text= "Caps\nLock";
    doodads[5].text.font= "-*-helvetica-medium-r-normal--*-120-*-*-*-*-iso8859-1";

    doodads[6].any.name= GET_ATOM(dpy,"ScrollLockLabel");
    doodads[6].any.type= XkbTextDoodad;
    doodads[6].any.priority= 6;
    doodads[6].any.top= 250;
    doodads[6].any.left= 4280;
    doodads[6].any.angle= 0;
    doodads[6].text.width= 396;
    doodads[6].text.height= 100;
    doodads[6].text.color_ndx= 0;
    doodads[6].text.text= "Scroll\nLock";
    doodads[6].text.font= "-*-helvetica-medium-r-normal--*-120-*-*-*-*-iso8859-1";
}

static XkbKeyAliasRec g_aliases[2]= {
	{	"CAPS", "AC00"	},
	{	"LCTL", "AA00"	}
};

static XkbGeometryRec	geom= {
	None,			/* name */
	4700, 1800,		/* width, height */
	"-*-helvetica-medium-r-normal--*-120-*-*-*-*-iso8859-1",/* label font */
	&g_colors[0],		/* label color */
	&g_colors[1],		/* base color */
	1,	6,	15,	/*  sz: props, colors, shapes */
	4,	7,	2,	/*  sz: sections, doodads, aliases */
	1,	6,	15,	/* num: props, colors, shapes */
	4,	7,	2,	/* num: sections, doodads, aliases */
	g_props,	g_colors,	g_shapes,
	g_sections,	g_doodads,	g_aliases
};

static Bool
_InitHdrGeom(DPYTYPE dpy,XkbGeometryPtr geom)
{
    geom->name= GET_ATOM(dpy,"pc_pc105_");
    geom->shapes[ 0].name= GET_ATOM(dpy,"NORM");
    geom->shapes[ 1].name= GET_ATOM(dpy,"BKSP");
    geom->shapes[ 2].name= GET_ATOM(dpy,"TABK");
    geom->shapes[ 3].name= GET_ATOM(dpy,"BKSL");
    geom->shapes[ 4].name= GET_ATOM(dpy,"RTRN");
    geom->shapes[ 5].name= GET_ATOM(dpy,"CAPS");
    geom->shapes[ 6].name= GET_ATOM(dpy,"LFSH");
    geom->shapes[ 7].name= GET_ATOM(dpy,"RTSH");
    geom->shapes[ 8].name= GET_ATOM(dpy,"MODK");
    geom->shapes[ 9].name= GET_ATOM(dpy,"SMOD");
    geom->shapes[10].name= GET_ATOM(dpy,"SPCE");
    geom->shapes[11].name= GET_ATOM(dpy,"KP0");
    geom->shapes[12].name= GET_ATOM(dpy,"KPAD");
    geom->shapes[13].name= GET_ATOM(dpy,"LEDS");
    geom->shapes[14].name= GET_ATOM(dpy,"LED");
    _InitGeomDoodads(dpy,geom);
    _InitSections(dpy,geom);
}

#endif /* QWERTY_FR_H */
