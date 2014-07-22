#define wxSTC_INVALID_POSITION -1

// Define start of Scintilla messages to be greater than all edit (EM_*) messages
// as many EM_ messages can be used although that use is deprecated.
#define wxSTC_START 2000
#define wxSTC_OPTIONAL_START 3000
#define wxSTC_LEXER_START 4000
#define wxSTC_WS_INVISIBLE 0
#define wxSTC_WS_VISIBLEALWAYS 1
#define wxSTC_WS_VISIBLEAFTERINDENT 2
#define wxSTC_EOL_CRLF 0
#define wxSTC_EOL_CR 1
#define wxSTC_EOL_LF 2

// The SC_CP_UTF8 value can be used to enter Unicode mode.
// This is the same value as CP_UTF8 in Windows
#define wxSTC_CP_UTF8 65001

// The SC_CP_DBCS value can be used to indicate a DBCS mode for GTK
#define wxSTC_CP_DBCS 1
#define wxSTC_MARKER_MAX 31
#define wxSTC_MARK_CIRCLE 0
#define wxSTC_MARK_ROUNDRECT 1
#define wxSTC_MARK_ARROW 2
#define wxSTC_MARK_SMALLRECT 3
#define wxSTC_MARK_SHORTARROW 4
#define wxSTC_MARK_EMPTY 5
#define wxSTC_MARK_ARROWDOWN 6
#define wxSTC_MARK_MINUS 7
#define wxSTC_MARK_PLUS 8

// Shapes used for outlining column.
#define wxSTC_MARK_VLINE 9
#define wxSTC_MARK_LCORNER 10
#define wxSTC_MARK_TCORNER 11
#define wxSTC_MARK_BOXPLUS 12
#define wxSTC_MARK_BOXPLUSCONNECTED 13
#define wxSTC_MARK_BOXMINUS 14
#define wxSTC_MARK_BOXMINUSCONNECTED 15
#define wxSTC_MARK_LCORNERCURVE 16
#define wxSTC_MARK_TCORNERCURVE 17
#define wxSTC_MARK_CIRCLEPLUS 18
#define wxSTC_MARK_CIRCLEPLUSCONNECTED 19
#define wxSTC_MARK_CIRCLEMINUS 20
#define wxSTC_MARK_CIRCLEMINUSCONNECTED 21

// Invisible mark that only sets the line background color.
#define wxSTC_MARK_BACKGROUND 22
#define wxSTC_MARK_DOTDOTDOT 23
#define wxSTC_MARK_ARROWS 24
#define wxSTC_MARK_PIXMAP 25
#define wxSTC_MARK_CHARACTER 10000

// Markers used for outlining column.
#define wxSTC_MARKNUM_FOLDEREND 25
#define wxSTC_MARKNUM_FOLDEROPENMID 26
#define wxSTC_MARKNUM_FOLDERMIDTAIL 27
#define wxSTC_MARKNUM_FOLDERTAIL 28
#define wxSTC_MARKNUM_FOLDERSUB 29
#define wxSTC_MARKNUM_FOLDER 30
#define wxSTC_MARKNUM_FOLDEROPEN 31
#define wxSTC_MASK_FOLDERS 0xFE000000
#define wxSTC_MARGIN_SYMBOL 0
#define wxSTC_MARGIN_NUMBER 1

// Styles in range 32..37 are predefined for parts of the UI and are not used as normal styles.
// Styles 38 and 39 are for future use.
#define wxSTC_STYLE_DEFAULT 32
#define wxSTC_STYLE_LINENUMBER 33
#define wxSTC_STYLE_BRACELIGHT 34
#define wxSTC_STYLE_BRACEBAD 35
#define wxSTC_STYLE_CONTROLCHAR 36
#define wxSTC_STYLE_INDENTGUIDE 37
#define wxSTC_STYLE_LASTPREDEFINED 39
#define wxSTC_STYLE_MAX 127

// Character set identifiers are used in StyleSetCharacterSet.
// The values are the same as the Windows *_CHARSET values.
#define wxSTC_CHARSET_ANSI 0
#define wxSTC_CHARSET_DEFAULT 1
#define wxSTC_CHARSET_BALTIC 186
#define wxSTC_CHARSET_CHINESEBIG5 136
#define wxSTC_CHARSET_EASTEUROPE 238
#define wxSTC_CHARSET_GB2312 134
#define wxSTC_CHARSET_GREEK 161
#define wxSTC_CHARSET_HANGUL 129
#define wxSTC_CHARSET_MAC 77
#define wxSTC_CHARSET_OEM 255
#define wxSTC_CHARSET_RUSSIAN 204
#define wxSTC_CHARSET_SHIFTJIS 128
#define wxSTC_CHARSET_SYMBOL 2
#define wxSTC_CHARSET_TURKISH 162
#define wxSTC_CHARSET_JOHAB 130
#define wxSTC_CHARSET_HEBREW 177
#define wxSTC_CHARSET_ARABIC 178
#define wxSTC_CHARSET_VIETNAMESE 163
#define wxSTC_CHARSET_THAI 222
#define wxSTC_CASE_MIXED 0
#define wxSTC_CASE_UPPER 1
#define wxSTC_CASE_LOWER 2
#define wxSTC_INDIC_MAX 7
#define wxSTC_INDIC_PLAIN 0
#define wxSTC_INDIC_SQUIGGLE 1
#define wxSTC_INDIC_TT 2
#define wxSTC_INDIC_DIAGONAL 3
#define wxSTC_INDIC_STRIKE 4
#define wxSTC_INDIC_HIDDEN 5
#define wxSTC_INDIC0_MASK 0x20
#define wxSTC_INDIC1_MASK 0x40
#define wxSTC_INDIC2_MASK 0x80
#define wxSTC_INDICS_MASK 0xE0

// PrintColourMode - use same colours as screen.
#define wxSTC_PRINT_NORMAL 0

// PrintColourMode - invert the light value of each style for printing.
#define wxSTC_PRINT_INVERTLIGHT 1

// PrintColourMode - force black text on white background for printing.
#define wxSTC_PRINT_BLACKONWHITE 2

// PrintColourMode - text stays coloured, but all background is forced to be white for printing.
#define wxSTC_PRINT_COLOURONWHITE 3

// PrintColourMode - only the default-background is forced to be white for printing.
#define wxSTC_PRINT_COLOURONWHITEDEFAULTBG 4
#define wxSTC_FIND_WHOLEWORD 2
#define wxSTC_FIND_MATCHCASE 4
#define wxSTC_FIND_WORDSTART 0x00100000
#define wxSTC_FIND_REGEXP 0x00200000
#define wxSTC_FIND_POSIX 0x00400000
#define wxSTC_FOLDLEVELBASE 0x400
#define wxSTC_FOLDLEVELWHITEFLAG 0x1000
#define wxSTC_FOLDLEVELHEADERFLAG 0x2000
#define wxSTC_FOLDLEVELBOXHEADERFLAG 0x4000
#define wxSTC_FOLDLEVELBOXFOOTERFLAG 0x8000
#define wxSTC_FOLDLEVELCONTRACTED 0x10000
#define wxSTC_FOLDLEVELUNINDENT 0x20000
#define wxSTC_FOLDLEVELNUMBERMASK 0x0FFF
#define wxSTC_FOLDFLAG_LINEBEFORE_EXPANDED 0x0002
#define wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED 0x0004
#define wxSTC_FOLDFLAG_LINEAFTER_EXPANDED 0x0008
#define wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED 0x0010
#define wxSTC_FOLDFLAG_LEVELNUMBERS 0x0040
#define wxSTC_FOLDFLAG_BOX 0x0001
#define wxSTC_TIME_FOREVER 10000000
#define wxSTC_WRAP_NONE 0
#define wxSTC_WRAP_WORD 1
#define wxSTC_CACHE_NONE 0
#define wxSTC_CACHE_CARET 1
#define wxSTC_CACHE_PAGE 2
#define wxSTC_CACHE_DOCUMENT 3
#define wxSTC_EDGE_NONE 0
#define wxSTC_EDGE_LINE 1
#define wxSTC_EDGE_BACKGROUND 2
#define wxSTC_CURSORNORMAL -1
#define wxSTC_CURSORWAIT 4

// Constants for use with SetVisiblePolicy, similar to SetCaretPolicy.
#define wxSTC_VISIBLE_SLOP 0x01
#define wxSTC_VISIBLE_STRICT 0x04

// Caret policy, used by SetXCaretPolicy and SetYCaretPolicy.
// If CARET_SLOP is set, we can define a slop value: caretSlop.
// This value defines an unwanted zone (UZ) where the caret is... unwanted.
// This zone is defined as a number of pixels near the vertical margins,
// and as a number of lines near the horizontal margins.
// By keeping the caret away from the edges, it is seen within its context,
// so it is likely that the identifier that the caret is on can be completely seen,
// and that the current line is seen with some of the lines following it which are
// often dependent on that line.
#define wxSTC_CARET_SLOP 0x01

// If CARET_STRICT is set, the policy is enforced... strictly.
// The caret is centred on the display if slop is not set,
// and cannot go in the UZ if slop is set.
#define wxSTC_CARET_STRICT 0x04

// If CARET_JUMPS is set, the display is moved more energetically
// so the caret can move in the same direction longer before the policy is applied again.
#define wxSTC_CARET_JUMPS 0x10

// If CARET_EVEN is not set, instead of having symmetrical UZs,
// the left and bottom UZs are extended up to right and top UZs respectively.
// This way, we favour the displaying of useful information: the begining of lines,
// where most code reside, and the lines after the caret, eg. the body of a function.
#define wxSTC_CARET_EVEN 0x08

// Maximum value of keywordSet parameter of SetKeyWords.
#define wxSTC_KEYWORDSET_MAX 8

// Notifications
// Type of modification and the action which caused the modification.
// These are defined as a bit mask to make it easy to specify which notifications are wanted.
// One bit is set from each of SC_MOD_* and SC_PERFORMED_*.
#define wxSTC_MOD_INSERTTEXT 0x1
#define wxSTC_MOD_DELETETEXT 0x2
#define wxSTC_MOD_CHANGESTYLE 0x4
#define wxSTC_MOD_CHANGEFOLD 0x8
#define wxSTC_PERFORMED_USER 0x10
#define wxSTC_PERFORMED_UNDO 0x20
#define wxSTC_PERFORMED_REDO 0x40
#define wxSTC_LASTSTEPINUNDOREDO 0x100
#define wxSTC_MOD_CHANGEMARKER 0x200
#define wxSTC_MOD_BEFOREINSERT 0x400
#define wxSTC_MOD_BEFOREDELETE 0x800
#define wxSTC_MODEVENTMASKALL 0xF77

// Symbolic key codes and modifier flags.
// ASCII and other printable characters below 256.
// Extended keys above 300.
#define wxSTC_KEY_DOWN 300
#define wxSTC_KEY_UP 301
#define wxSTC_KEY_LEFT 302
#define wxSTC_KEY_RIGHT 303
#define wxSTC_KEY_HOME 304
#define wxSTC_KEY_END 305
#define wxSTC_KEY_PRIOR 306
#define wxSTC_KEY_NEXT 307
#define wxSTC_KEY_DELETE 308
#define wxSTC_KEY_INSERT 309
#define wxSTC_KEY_ESCAPE 7
#define wxSTC_KEY_BACK 8
#define wxSTC_KEY_TAB 9
#define wxSTC_KEY_RETURN 13
#define wxSTC_KEY_ADD 310
#define wxSTC_KEY_SUBTRACT 311
#define wxSTC_KEY_DIVIDE 312
#define wxSTC_SCMOD_SHIFT 1
#define wxSTC_SCMOD_CTRL 2
#define wxSTC_SCMOD_ALT 4

// For SciLexer.h
#define wxSTC_LEX_CONTAINER 0
#define wxSTC_LEX_NULL 1
#define wxSTC_LEX_PYTHON 2
#define wxSTC_LEX_CPP 3
#define wxSTC_LEX_HTML 4
#define wxSTC_LEX_XML 5
#define wxSTC_LEX_PERL 6
#define wxSTC_LEX_SQL 7
#define wxSTC_LEX_VB 8
#define wxSTC_LEX_PROPERTIES 9
#define wxSTC_LEX_ERRORLIST 10
#define wxSTC_LEX_MAKEFILE 11
#define wxSTC_LEX_BATCH 12
#define wxSTC_LEX_XCODE 13
#define wxSTC_LEX_LATEX 14
#define wxSTC_LEX_LUA 15
#define wxSTC_LEX_DIFF 16
#define wxSTC_LEX_CONF 17
#define wxSTC_LEX_PASCAL 18
#define wxSTC_LEX_AVE 19
#define wxSTC_LEX_ADA 20
#define wxSTC_LEX_LISP 21
#define wxSTC_LEX_RUBY 22
#define wxSTC_LEX_EIFFEL 23
#define wxSTC_LEX_EIFFELKW 24
#define wxSTC_LEX_TCL 25
#define wxSTC_LEX_NNCRONTAB 26
#define wxSTC_LEX_BULLANT 27
#define wxSTC_LEX_VBSCRIPT 28
#define wxSTC_LEX_ASP 29
#define wxSTC_LEX_PHP 30
#define wxSTC_LEX_BAAN 31
#define wxSTC_LEX_MATLAB 32
#define wxSTC_LEX_SCRIPTOL 33
#define wxSTC_LEX_ASM 34
#define wxSTC_LEX_CPPNOCASE 35
#define wxSTC_LEX_FORTRAN 36
#define wxSTC_LEX_F77 37
#define wxSTC_LEX_CSS 38
#define wxSTC_LEX_POV 39
#define wxSTC_LEX_LOUT 40
#define wxSTC_LEX_ESCRIPT 41
#define wxSTC_LEX_PS 42
#define wxSTC_LEX_NSIS 43
#define wxSTC_LEX_MMIXAL 44

// When a lexer specifies its language as SCLEX_AUTOMATIC it receives a
// value assigned in sequence from SCLEX_AUTOMATIC+1.
#define wxSTC_LEX_AUTOMATIC 1000

// Lexical states for SCLEX_PYTHON
#define wxSTC_P_DEFAULT 0
#define wxSTC_P_COMMENTLINE 1
#define wxSTC_P_NUMBER 2
#define wxSTC_P_STRING 3
#define wxSTC_P_CHARACTER 4
#define wxSTC_P_WORD 5
#define wxSTC_P_TRIPLE 6
#define wxSTC_P_TRIPLEDOUBLE 7
#define wxSTC_P_CLASSNAME 8
#define wxSTC_P_DEFNAME 9
#define wxSTC_P_OPERATOR 10
#define wxSTC_P_IDENTIFIER 11
#define wxSTC_P_COMMENTBLOCK 12
#define wxSTC_P_STRINGEOL 13

// Lexical states for SCLEX_CPP
#define wxSTC_C_DEFAULT 0
#define wxSTC_C_COMMENT 1
#define wxSTC_C_COMMENTLINE 2
#define wxSTC_C_COMMENTDOC 3
#define wxSTC_C_NUMBER 4
#define wxSTC_C_WORD 5
#define wxSTC_C_STRING 6
#define wxSTC_C_CHARACTER 7
#define wxSTC_C_UUID 8
#define wxSTC_C_PREPROCESSOR 9
#define wxSTC_C_OPERATOR 10
#define wxSTC_C_IDENTIFIER 11
#define wxSTC_C_STRINGEOL 12
#define wxSTC_C_VERBATIM 13
#define wxSTC_C_REGEX 14
#define wxSTC_C_COMMENTLINEDOC 15
#define wxSTC_C_WORD2 16
#define wxSTC_C_COMMENTDOCKEYWORD 17
#define wxSTC_C_COMMENTDOCKEYWORDERROR 18
#define wxSTC_C_GLOBALCLASS 19

// Lexical states for SCLEX_HTML, SCLEX_XML
#define wxSTC_H_DEFAULT 0
#define wxSTC_H_TAG 1
#define wxSTC_H_TAGUNKNOWN 2
#define wxSTC_H_ATTRIBUTE 3
#define wxSTC_H_ATTRIBUTEUNKNOWN 4
#define wxSTC_H_NUMBER 5
#define wxSTC_H_DOUBLESTRING 6
#define wxSTC_H_SINGLESTRING 7
#define wxSTC_H_OTHER 8
#define wxSTC_H_COMMENT 9
#define wxSTC_H_ENTITY 10

// XML and ASP
#define wxSTC_H_TAGEND 11
#define wxSTC_H_XMLSTART 12
#define wxSTC_H_XMLEND 13
#define wxSTC_H_SCRIPT 14
#define wxSTC_H_ASP 15
#define wxSTC_H_ASPAT 16
#define wxSTC_H_CDATA 17
#define wxSTC_H_QUESTION 18

// More HTML
#define wxSTC_H_VALUE 19

// X-Code
#define wxSTC_H_XCCOMMENT 20

// SGML
#define wxSTC_H_SGML_DEFAULT 21
#define wxSTC_H_SGML_COMMAND 22
#define wxSTC_H_SGML_1ST_PARAM 23
#define wxSTC_H_SGML_DOUBLESTRING 24
#define wxSTC_H_SGML_SIMPLESTRING 25
#define wxSTC_H_SGML_ERROR 26
#define wxSTC_H_SGML_SPECIAL 27
#define wxSTC_H_SGML_ENTITY 28
#define wxSTC_H_SGML_COMMENT 29
#define wxSTC_H_SGML_1ST_PARAM_COMMENT 30
#define wxSTC_H_SGML_BLOCK_DEFAULT 31

// Embedded Javascript
#define wxSTC_HJ_START 40
#define wxSTC_HJ_DEFAULT 41
#define wxSTC_HJ_COMMENT 42
#define wxSTC_HJ_COMMENTLINE 43
#define wxSTC_HJ_COMMENTDOC 44
#define wxSTC_HJ_NUMBER 45
#define wxSTC_HJ_WORD 46
#define wxSTC_HJ_KEYWORD 47
#define wxSTC_HJ_DOUBLESTRING 48
#define wxSTC_HJ_SINGLESTRING 49
#define wxSTC_HJ_SYMBOLS 50
#define wxSTC_HJ_STRINGEOL 51
#define wxSTC_HJ_REGEX 52

// ASP Javascript
#define wxSTC_HJA_START 55
#define wxSTC_HJA_DEFAULT 56
#define wxSTC_HJA_COMMENT 57
#define wxSTC_HJA_COMMENTLINE 58
#define wxSTC_HJA_COMMENTDOC 59
#define wxSTC_HJA_NUMBER 60
#define wxSTC_HJA_WORD 61
#define wxSTC_HJA_KEYWORD 62
#define wxSTC_HJA_DOUBLESTRING 63
#define wxSTC_HJA_SINGLESTRING 64
#define wxSTC_HJA_SYMBOLS 65
#define wxSTC_HJA_STRINGEOL 66
#define wxSTC_HJA_REGEX 67

// Embedded VBScript
#define wxSTC_HB_START 70
#define wxSTC_HB_DEFAULT 71
#define wxSTC_HB_COMMENTLINE 72
#define wxSTC_HB_NUMBER 73
#define wxSTC_HB_WORD 74
#define wxSTC_HB_STRING 75
#define wxSTC_HB_IDENTIFIER 76
#define wxSTC_HB_STRINGEOL 77

// ASP VBScript
#define wxSTC_HBA_START 80
#define wxSTC_HBA_DEFAULT 81
#define wxSTC_HBA_COMMENTLINE 82
#define wxSTC_HBA_NUMBER 83
#define wxSTC_HBA_WORD 84
#define wxSTC_HBA_STRING 85
#define wxSTC_HBA_IDENTIFIER 86
#define wxSTC_HBA_STRINGEOL 87

// Embedded Python
#define wxSTC_HP_START 90
#define wxSTC_HP_DEFAULT 91
#define wxSTC_HP_COMMENTLINE 92
#define wxSTC_HP_NUMBER 93
#define wxSTC_HP_STRING 94
#define wxSTC_HP_CHARACTER 95
#define wxSTC_HP_WORD 96
#define wxSTC_HP_TRIPLE 97
#define wxSTC_HP_TRIPLEDOUBLE 98
#define wxSTC_HP_CLASSNAME 99
#define wxSTC_HP_DEFNAME 100
#define wxSTC_HP_OPERATOR 101
#define wxSTC_HP_IDENTIFIER 102

// ASP Python
#define wxSTC_HPA_START 105
#define wxSTC_HPA_DEFAULT 106
#define wxSTC_HPA_COMMENTLINE 107
#define wxSTC_HPA_NUMBER 108
#define wxSTC_HPA_STRING 109
#define wxSTC_HPA_CHARACTER 110
#define wxSTC_HPA_WORD 111
#define wxSTC_HPA_TRIPLE 112
#define wxSTC_HPA_TRIPLEDOUBLE 113
#define wxSTC_HPA_CLASSNAME 114
#define wxSTC_HPA_DEFNAME 115
#define wxSTC_HPA_OPERATOR 116
#define wxSTC_HPA_IDENTIFIER 117

// PHP
#define wxSTC_HPHP_DEFAULT 118
#define wxSTC_HPHP_HSTRING 119
#define wxSTC_HPHP_SIMPLESTRING 120
#define wxSTC_HPHP_WORD 121
#define wxSTC_HPHP_NUMBER 122
#define wxSTC_HPHP_VARIABLE 123
#define wxSTC_HPHP_COMMENT 124
#define wxSTC_HPHP_COMMENTLINE 125
#define wxSTC_HPHP_HSTRING_VARIABLE 126
#define wxSTC_HPHP_OPERATOR 127

// Lexical states for SCLEX_PERL
#define wxSTC_PL_DEFAULT 0
#define wxSTC_PL_ERROR 1
#define wxSTC_PL_COMMENTLINE 2
#define wxSTC_PL_POD 3
#define wxSTC_PL_NUMBER 4
#define wxSTC_PL_WORD 5
#define wxSTC_PL_STRING 6
#define wxSTC_PL_CHARACTER 7
#define wxSTC_PL_PUNCTUATION 8
#define wxSTC_PL_PREPROCESSOR 9
#define wxSTC_PL_OPERATOR 10
#define wxSTC_PL_IDENTIFIER 11
#define wxSTC_PL_SCALAR 12
#define wxSTC_PL_ARRAY 13
#define wxSTC_PL_HASH 14
#define wxSTC_PL_SYMBOLTABLE 15
#define wxSTC_PL_REGEX 17
#define wxSTC_PL_REGSUBST 18
#define wxSTC_PL_LONGQUOTE 19
#define wxSTC_PL_BACKTICKS 20
#define wxSTC_PL_DATASECTION 21
#define wxSTC_PL_HERE_DELIM 22
#define wxSTC_PL_HERE_Q 23
#define wxSTC_PL_HERE_QQ 24
#define wxSTC_PL_HERE_QX 25
#define wxSTC_PL_STRING_Q 26
#define wxSTC_PL_STRING_QQ 27
#define wxSTC_PL_STRING_QX 28
#define wxSTC_PL_STRING_QR 29
#define wxSTC_PL_STRING_QW 30

// Lexical states for SCLEX_VB, SCLEX_VBSCRIPT
#define wxSTC_B_DEFAULT 0
#define wxSTC_B_COMMENT 1
#define wxSTC_B_NUMBER 2
#define wxSTC_B_KEYWORD 3
#define wxSTC_B_STRING 4
#define wxSTC_B_PREPROCESSOR 5
#define wxSTC_B_OPERATOR 6
#define wxSTC_B_IDENTIFIER 7
#define wxSTC_B_DATE 8

// Lexical states for SCLEX_PROPERTIES
#define wxSTC_PROPS_DEFAULT 0
#define wxSTC_PROPS_COMMENT 1
#define wxSTC_PROPS_SECTION 2
#define wxSTC_PROPS_ASSIGNMENT 3
#define wxSTC_PROPS_DEFVAL 4

// Lexical states for SCLEX_LATEX
#define wxSTC_L_DEFAULT 0
#define wxSTC_L_COMMAND 1
#define wxSTC_L_TAG 2
#define wxSTC_L_MATH 3
#define wxSTC_L_COMMENT 4

// Lexical states for SCLEX_LUA
#define wxSTC_LUA_DEFAULT 0
#define wxSTC_LUA_COMMENT 1
#define wxSTC_LUA_COMMENTLINE 2
#define wxSTC_LUA_COMMENTDOC 3
#define wxSTC_LUA_NUMBER 4
#define wxSTC_LUA_WORD 5
#define wxSTC_LUA_STRING 6
#define wxSTC_LUA_CHARACTER 7
#define wxSTC_LUA_LITERALSTRING 8
#define wxSTC_LUA_PREPROCESSOR 9
#define wxSTC_LUA_OPERATOR 10
#define wxSTC_LUA_IDENTIFIER 11
#define wxSTC_LUA_STRINGEOL 12
#define wxSTC_LUA_WORD2 13
#define wxSTC_LUA_WORD3 14
#define wxSTC_LUA_WORD4 15
#define wxSTC_LUA_WORD5 16
#define wxSTC_LUA_WORD6 17
#define wxSTC_LUA_WORD7 18
#define wxSTC_LUA_WORD8 19

// Lexical states for SCLEX_ERRORLIST
#define wxSTC_ERR_DEFAULT 0
#define wxSTC_ERR_PYTHON 1
#define wxSTC_ERR_GCC 2
#define wxSTC_ERR_MS 3
#define wxSTC_ERR_CMD 4
#define wxSTC_ERR_BORLAND 5
#define wxSTC_ERR_PERL 6
#define wxSTC_ERR_NET 7
#define wxSTC_ERR_LUA 8
#define wxSTC_ERR_CTAG 9
#define wxSTC_ERR_DIFF_CHANGED 10
#define wxSTC_ERR_DIFF_ADDITION 11
#define wxSTC_ERR_DIFF_DELETION 12
#define wxSTC_ERR_DIFF_MESSAGE 13
#define wxSTC_ERR_PHP 14
#define wxSTC_ERR_ELF 15
#define wxSTC_ERR_IFC 16

// Lexical states for SCLEX_BATCH
#define wxSTC_BAT_DEFAULT 0
#define wxSTC_BAT_COMMENT 1
#define wxSTC_BAT_WORD 2
#define wxSTC_BAT_LABEL 3
#define wxSTC_BAT_HIDE 4
#define wxSTC_BAT_COMMAND 5
#define wxSTC_BAT_IDENTIFIER 6
#define wxSTC_BAT_OPERATOR 7

// Lexical states for SCLEX_MAKEFILE
#define wxSTC_MAKE_DEFAULT 0
#define wxSTC_MAKE_COMMENT 1
#define wxSTC_MAKE_PREPROCESSOR 2
#define wxSTC_MAKE_IDENTIFIER 3
#define wxSTC_MAKE_OPERATOR 4
#define wxSTC_MAKE_TARGET 5
#define wxSTC_MAKE_IDEOL 9

// Lexical states for SCLEX_DIFF
#define wxSTC_DIFF_DEFAULT 0
#define wxSTC_DIFF_COMMENT 1
#define wxSTC_DIFF_COMMAND 2
#define wxSTC_DIFF_HEADER 3
#define wxSTC_DIFF_POSITION 4
#define wxSTC_DIFF_DELETED 5
#define wxSTC_DIFF_ADDED 6

// Lexical states for SCLEX_CONF (Apache Configuration Files Lexer)
#define wxSTC_CONF_DEFAULT 0
#define wxSTC_CONF_COMMENT 1
#define wxSTC_CONF_NUMBER 2
#define wxSTC_CONF_IDENTIFIER 3
#define wxSTC_CONF_EXTENSION 4
#define wxSTC_CONF_PARAMETER 5
#define wxSTC_CONF_STRING 6
#define wxSTC_CONF_OPERATOR 7
#define wxSTC_CONF_IP 8
#define wxSTC_CONF_DIRECTIVE 9

// Lexical states for SCLEX_AVE, Avenue
#define wxSTC_AVE_DEFAULT 0
#define wxSTC_AVE_COMMENT 1
#define wxSTC_AVE_NUMBER 2
#define wxSTC_AVE_WORD 3
#define wxSTC_AVE_STRING 6
#define wxSTC_AVE_ENUM 7
#define wxSTC_AVE_STRINGEOL 8
#define wxSTC_AVE_IDENTIFIER 9
#define wxSTC_AVE_OPERATOR 10
#define wxSTC_AVE_WORD1 11
#define wxSTC_AVE_WORD2 12
#define wxSTC_AVE_WORD3 13
#define wxSTC_AVE_WORD4 14
#define wxSTC_AVE_WORD5 15
#define wxSTC_AVE_WORD6 16

// Lexical states for SCLEX_ADA
#define wxSTC_ADA_DEFAULT 0
#define wxSTC_ADA_WORD 1
#define wxSTC_ADA_IDENTIFIER 2
#define wxSTC_ADA_NUMBER 3
#define wxSTC_ADA_DELIMITER 4
#define wxSTC_ADA_CHARACTER 5
#define wxSTC_ADA_CHARACTEREOL 6
#define wxSTC_ADA_STRING 7
#define wxSTC_ADA_STRINGEOL 8
#define wxSTC_ADA_LABEL 9
#define wxSTC_ADA_COMMENTLINE 10
#define wxSTC_ADA_ILLEGAL 11

// Lexical states for SCLEX_BAAN
#define wxSTC_BAAN_DEFAULT 0
#define wxSTC_BAAN_COMMENT 1
#define wxSTC_BAAN_COMMENTDOC 2
#define wxSTC_BAAN_NUMBER 3
#define wxSTC_BAAN_WORD 4
#define wxSTC_BAAN_STRING 5
#define wxSTC_BAAN_PREPROCESSOR 6
#define wxSTC_BAAN_OPERATOR 7
#define wxSTC_BAAN_IDENTIFIER 8
#define wxSTC_BAAN_STRINGEOL 9
#define wxSTC_BAAN_WORD2 10

// Lexical states for SCLEX_LISP
#define wxSTC_LISP_DEFAULT 0
#define wxSTC_LISP_COMMENT 1
#define wxSTC_LISP_NUMBER 2
#define wxSTC_LISP_KEYWORD 3
#define wxSTC_LISP_STRING 6
#define wxSTC_LISP_STRINGEOL 8
#define wxSTC_LISP_IDENTIFIER 9
#define wxSTC_LISP_OPERATOR 10

// Lexical states for SCLEX_EIFFEL and SCLEX_EIFFELKW
#define wxSTC_EIFFEL_DEFAULT 0
#define wxSTC_EIFFEL_COMMENTLINE 1
#define wxSTC_EIFFEL_NUMBER 2
#define wxSTC_EIFFEL_WORD 3
#define wxSTC_EIFFEL_STRING 4
#define wxSTC_EIFFEL_CHARACTER 5
#define wxSTC_EIFFEL_OPERATOR 6
#define wxSTC_EIFFEL_IDENTIFIER 7
#define wxSTC_EIFFEL_STRINGEOL 8

// Lexical states for SCLEX_NNCRONTAB (nnCron crontab Lexer)
#define wxSTC_NNCRONTAB_DEFAULT 0
#define wxSTC_NNCRONTAB_COMMENT 1
#define wxSTC_NNCRONTAB_TASK 2
#define wxSTC_NNCRONTAB_SECTION 3
#define wxSTC_NNCRONTAB_KEYWORD 4
#define wxSTC_NNCRONTAB_MODIFIER 5
#define wxSTC_NNCRONTAB_ASTERISK 6
#define wxSTC_NNCRONTAB_NUMBER 7
#define wxSTC_NNCRONTAB_STRING 8
#define wxSTC_NNCRONTAB_ENVIRONMENT 9
#define wxSTC_NNCRONTAB_IDENTIFIER 10

// Lexical states for SCLEX_MATLAB
#define wxSTC_MATLAB_DEFAULT 0
#define wxSTC_MATLAB_COMMENT 1
#define wxSTC_MATLAB_COMMAND 2
#define wxSTC_MATLAB_NUMBER 3
#define wxSTC_MATLAB_KEYWORD 4
#define wxSTC_MATLAB_STRING 5
#define wxSTC_MATLAB_OPERATOR 6
#define wxSTC_MATLAB_IDENTIFIER 7

// Lexical states for SCLEX_SCRIPTOL
#define wxSTC_SCRIPTOL_DEFAULT 0
#define wxSTC_SCRIPTOL_COMMENT 1
#define wxSTC_SCRIPTOL_COMMENTLINE 2
#define wxSTC_SCRIPTOL_COMMENTDOC 3
#define wxSTC_SCRIPTOL_NUMBER 4
#define wxSTC_SCRIPTOL_WORD 5
#define wxSTC_SCRIPTOL_STRING 6
#define wxSTC_SCRIPTOL_CHARACTER 7
#define wxSTC_SCRIPTOL_UUID 8
#define wxSTC_SCRIPTOL_PREPROCESSOR 9
#define wxSTC_SCRIPTOL_OPERATOR 10
#define wxSTC_SCRIPTOL_IDENTIFIER 11
#define wxSTC_SCRIPTOL_STRINGEOL 12
#define wxSTC_SCRIPTOL_VERBATIM 13
#define wxSTC_SCRIPTOL_REGEX 14
#define wxSTC_SCRIPTOL_COMMENTLINEDOC 15
#define wxSTC_SCRIPTOL_WORD2 16
#define wxSTC_SCRIPTOL_COMMENTDOCKEYWORD 17
#define wxSTC_SCRIPTOL_COMMENTDOCKEYWORDERROR 18
#define wxSTC_SCRIPTOL_COMMENTBASIC 19

// Lexical states for SCLEX_ASM
#define wxSTC_ASM_DEFAULT 0
#define wxSTC_ASM_COMMENT 1
#define wxSTC_ASM_NUMBER 2
#define wxSTC_ASM_STRING 3
#define wxSTC_ASM_OPERATOR 4
#define wxSTC_ASM_IDENTIFIER 5
#define wxSTC_ASM_CPUINSTRUCTION 6
#define wxSTC_ASM_MATHINSTRUCTION 7
#define wxSTC_ASM_REGISTER 8
#define wxSTC_ASM_DIRECTIVE 9
#define wxSTC_ASM_DIRECTIVEOPERAND 10

// Lexical states for SCLEX_FORTRAN
#define wxSTC_F_DEFAULT 0
#define wxSTC_F_COMMENT 1
#define wxSTC_F_NUMBER 2
#define wxSTC_F_STRING1 3
#define wxSTC_F_STRING2 4
#define wxSTC_F_STRINGEOL 5
#define wxSTC_F_OPERATOR 6
#define wxSTC_F_IDENTIFIER 7
#define wxSTC_F_WORD 8
#define wxSTC_F_WORD2 9
#define wxSTC_F_WORD3 10
#define wxSTC_F_PREPROCESSOR 11
#define wxSTC_F_OPERATOR2 12
#define wxSTC_F_LABEL 13
#define wxSTC_F_CONTINUATION 14

// Lexical states for SCLEX_CSS
#define wxSTC_CSS_DEFAULT 0
#define wxSTC_CSS_TAG 1
#define wxSTC_CSS_CLASS 2
#define wxSTC_CSS_PSEUDOCLASS 3
#define wxSTC_CSS_UNKNOWN_PSEUDOCLASS 4
#define wxSTC_CSS_OPERATOR 5
#define wxSTC_CSS_IDENTIFIER 6
#define wxSTC_CSS_UNKNOWN_IDENTIFIER 7
#define wxSTC_CSS_VALUE 8
#define wxSTC_CSS_COMMENT 9
#define wxSTC_CSS_ID 10
#define wxSTC_CSS_IMPORTANT 11
#define wxSTC_CSS_DIRECTIVE 12
#define wxSTC_CSS_DOUBLESTRING 13
#define wxSTC_CSS_SINGLESTRING 14

// Lexical states for SCLEX_POV
#define wxSTC_POV_DEFAULT 0
#define wxSTC_POV_COMMENT 1
#define wxSTC_POV_COMMENTLINE 2
#define wxSTC_POV_NUMBER 3
#define wxSTC_POV_OPERATOR 4
#define wxSTC_POV_IDENTIFIER 5
#define wxSTC_POV_STRING 6
#define wxSTC_POV_STRINGEOL 7
#define wxSTC_POV_DIRECTIVE 8
#define wxSTC_POV_BADDIRECTIVE 9
#define wxSTC_POV_WORD2 10
#define wxSTC_POV_WORD3 11
#define wxSTC_POV_WORD4 12
#define wxSTC_POV_WORD5 13
#define wxSTC_POV_WORD6 14
#define wxSTC_POV_WORD7 15
#define wxSTC_POV_WORD8 16

// Lexical states for SCLEX_LOUT
#define wxSTC_LOUT_DEFAULT 0
#define wxSTC_LOUT_COMMENT 1
#define wxSTC_LOUT_NUMBER 2
#define wxSTC_LOUT_WORD 3
#define wxSTC_LOUT_WORD2 4
#define wxSTC_LOUT_WORD3 5
#define wxSTC_LOUT_WORD4 6
#define wxSTC_LOUT_STRING 7
#define wxSTC_LOUT_OPERATOR 8
#define wxSTC_LOUT_IDENTIFIER 9
#define wxSTC_LOUT_STRINGEOL 10

// Lexical states for SCLEX_ESCRIPT
#define wxSTC_ESCRIPT_DEFAULT 0
#define wxSTC_ESCRIPT_COMMENT 1
#define wxSTC_ESCRIPT_COMMENTLINE 2
#define wxSTC_ESCRIPT_COMMENTDOC 3
#define wxSTC_ESCRIPT_NUMBER 4
#define wxSTC_ESCRIPT_WORD 5
#define wxSTC_ESCRIPT_STRING 6
#define wxSTC_ESCRIPT_OPERATOR 7
#define wxSTC_ESCRIPT_IDENTIFIER 8
#define wxSTC_ESCRIPT_BRACE 9
#define wxSTC_ESCRIPT_WORD2 10
#define wxSTC_ESCRIPT_WORD3 11

// Lexical states for SCLEX_PS
#define wxSTC_PS_DEFAULT 0
#define wxSTC_PS_COMMENT 1
#define wxSTC_PS_DSC_COMMENT 2
#define wxSTC_PS_DSC_VALUE 3
#define wxSTC_PS_NUMBER 4
#define wxSTC_PS_NAME 5
#define wxSTC_PS_KEYWORD 6
#define wxSTC_PS_LITERAL 7
#define wxSTC_PS_IMMEVAL 8
#define wxSTC_PS_PAREN_ARRAY 9
#define wxSTC_PS_PAREN_DICT 10
#define wxSTC_PS_PAREN_PROC 11
#define wxSTC_PS_TEXT 12
#define wxSTC_PS_HEXSTRING 13
#define wxSTC_PS_BASE85STRING 14
#define wxSTC_PS_BADSTRINGCHAR 15

// Lexical states for SCLEX_NSIS
#define wxSTC_NSIS_DEFAULT 0
#define wxSTC_NSIS_COMMENT 1
#define wxSTC_NSIS_STRINGDQ 2
#define wxSTC_NSIS_STRINGLQ 3
#define wxSTC_NSIS_STRINGRQ 4
#define wxSTC_NSIS_FUNCTION 5
#define wxSTC_NSIS_VARIABLE 6
#define wxSTC_NSIS_LABEL 7
#define wxSTC_NSIS_USERDEFINED 8
#define wxSTC_NSIS_SECTIONDEF 9
#define wxSTC_NSIS_SUBSECTIONDEF 10
#define wxSTC_NSIS_IFDEFINEDEF 11
#define wxSTC_NSIS_MACRODEF 12
#define wxSTC_NSIS_STRINGVAR 13

// Lexical states for SCLEX_MMIXAL
#define wxSTC_MMIXAL_LEADWS 0
#define wxSTC_MMIXAL_COMMENT 1
#define wxSTC_MMIXAL_LABEL 2
#define wxSTC_MMIXAL_OPCODE 3
#define wxSTC_MMIXAL_OPCODE_PRE 4
#define wxSTC_MMIXAL_OPCODE_VALID 5
#define wxSTC_MMIXAL_OPCODE_UNKNOWN 6
#define wxSTC_MMIXAL_OPCODE_POST 7
#define wxSTC_MMIXAL_OPERANDS 8
#define wxSTC_MMIXAL_NUMBER 9
#define wxSTC_MMIXAL_REF 10
#define wxSTC_MMIXAL_CHAR 11
#define wxSTC_MMIXAL_STRING 12
#define wxSTC_MMIXAL_REGISTER 13
#define wxSTC_MMIXAL_HEX 14
#define wxSTC_MMIXAL_OPERATOR 15
#define wxSTC_MMIXAL_SYMBOL 16
#define wxSTC_MMIXAL_INCLUDE 17


//-----------------------------------------
// Commands that can be bound to keystrokes


// Redoes the next action on the undo history.
#define wxSTC_CMD_REDO 2011

// Select all the text in the document.
#define wxSTC_CMD_SELECTALL 2013

// Undo one action in the undo history.
#define wxSTC_CMD_UNDO 2176

// Cut the selection to the clipboard.
#define wxSTC_CMD_CUT 2177

// Copy the selection to the clipboard.
#define wxSTC_CMD_COPY 2178

// Paste the contents of the clipboard into the document replacing the selection.
#define wxSTC_CMD_PASTE 2179

// Clear the selection.
#define wxSTC_CMD_CLEAR 2180

// Move caret down one line.
#define wxSTC_CMD_LINEDOWN 2300

// Move caret down one line extending selection to new caret position.
#define wxSTC_CMD_LINEDOWNEXTEND 2301

// Move caret up one line.
#define wxSTC_CMD_LINEUP 2302

// Move caret up one line extending selection to new caret position.
#define wxSTC_CMD_LINEUPEXTEND 2303

// Move caret left one character.
#define wxSTC_CMD_CHARLEFT 2304

// Move caret left one character extending selection to new caret position.
#define wxSTC_CMD_CHARLEFTEXTEND 2305

// Move caret right one character.
#define wxSTC_CMD_CHARRIGHT 2306

// Move caret right one character extending selection to new caret position.
#define wxSTC_CMD_CHARRIGHTEXTEND 2307

// Move caret left one word.
#define wxSTC_CMD_WORDLEFT 2308

// Move caret left one word extending selection to new caret position.
#define wxSTC_CMD_WORDLEFTEXTEND 2309

// Move caret right one word.
#define wxSTC_CMD_WORDRIGHT 2310

// Move caret right one word extending selection to new caret position.
#define wxSTC_CMD_WORDRIGHTEXTEND 2311

// Move caret to first position on line.
#define wxSTC_CMD_HOME 2312

// Move caret to first position on line extending selection to new caret position.
#define wxSTC_CMD_HOMEEXTEND 2313

// Move caret to last position on line.
#define wxSTC_CMD_LINEEND 2314

// Move caret to last position on line extending selection to new caret position.
#define wxSTC_CMD_LINEENDEXTEND 2315

// Move caret to first position in document.
#define wxSTC_CMD_DOCUMENTSTART 2316

// Move caret to first position in document extending selection to new caret position.
#define wxSTC_CMD_DOCUMENTSTARTEXTEND 2317

// Move caret to last position in document.
#define wxSTC_CMD_DOCUMENTEND 2318

// Move caret to last position in document extending selection to new caret position.
#define wxSTC_CMD_DOCUMENTENDEXTEND 2319

// Move caret one page up.
#define wxSTC_CMD_PAGEUP 2320

// Move caret one page up extending selection to new caret position.
#define wxSTC_CMD_PAGEUPEXTEND 2321

// Move caret one page down.
#define wxSTC_CMD_PAGEDOWN 2322

// Move caret one page down extending selection to new caret position.
#define wxSTC_CMD_PAGEDOWNEXTEND 2323

// Switch from insert to overtype mode or the reverse.
#define wxSTC_CMD_EDITTOGGLEOVERTYPE 2324

// Cancel any modes such as call tip or auto-completion list display.
#define wxSTC_CMD_CANCEL 2325

// Delete the selection or if no selection, the character before the caret.
#define wxSTC_CMD_DELETEBACK 2326

// If selection is empty or all on one line replace the selection with a tab character.
// If more than one line selected, indent the lines.
#define wxSTC_CMD_TAB 2327

// Dedent the selected lines.
#define wxSTC_CMD_BACKTAB 2328

// Insert a new line, may use a CRLF, CR or LF depending on EOL mode.
#define wxSTC_CMD_NEWLINE 2329

// Insert a Form Feed character.
#define wxSTC_CMD_FORMFEED 2330

// Move caret to before first visible character on line.
// If already there move to first character on line.
#define wxSTC_CMD_VCHOME 2331

// Like VCHome but extending selection to new caret position.
#define wxSTC_CMD_VCHOMEEXTEND 2332

// Magnify the displayed text by increasing the sizes by 1 point.
#define wxSTC_CMD_ZOOMIN 2333

// Make the displayed text smaller by decreasing the sizes by 1 point.
#define wxSTC_CMD_ZOOMOUT 2334

// Delete the word to the left of the caret.
#define wxSTC_CMD_DELWORDLEFT 2335

// Delete the word to the right of the caret.
#define wxSTC_CMD_DELWORDRIGHT 2336

// Cut the line containing the caret.
#define wxSTC_CMD_LINECUT 2337

// Delete the line containing the caret.
#define wxSTC_CMD_LINEDELETE 2338

// Switch the current line with the previous.
#define wxSTC_CMD_LINETRANSPOSE 2339

// Duplicate the current line.
#define wxSTC_CMD_LINEDUPLICATE 2404

// Transform the selection to lower case.
#define wxSTC_CMD_LOWERCASE 2340

// Transform the selection to upper case.
#define wxSTC_CMD_UPPERCASE 2341

// Scroll the document down, keeping the caret visible.
#define wxSTC_CMD_LINESCROLLDOWN 2342

// Scroll the document up, keeping the caret visible.
#define wxSTC_CMD_LINESCROLLUP 2343

// Delete the selection or if no selection, the character before the caret.
// Will not delete the character before at the start of a line.
#define wxSTC_CMD_DELETEBACKNOTLINE 2344

// Move caret to first position on display line.
#define wxSTC_CMD_HOMEDISPLAY 2345

// Move caret to first position on display line extending selection to
// new caret position.
#define wxSTC_CMD_HOMEDISPLAYEXTEND 2346

// Move caret to last position on display line.
#define wxSTC_CMD_LINEENDDISPLAY 2347

// Move caret to last position on display line extending selection to new
// caret position.
#define wxSTC_CMD_LINEENDDISPLAYEXTEND 2348

// These are like their namesakes Home(Extend)?, LineEnd(Extend)?, VCHome(Extend)?
// except they behave differently when word-wrap is enabled:
// They go first to the start / end of the display line, like (Home|LineEnd)Display
// The difference is that, the cursor is already at the point, it goes on to the start
// or end of the document line, as appropriate for (Home|LineEnd|VCHome)Extend.
#define wxSTC_CMD_HOMEWRAP 2349
#define wxSTC_CMD_HOMEWRAPEXTEND 2450
#define wxSTC_CMD_LINEENDWRAP 2451
#define wxSTC_CMD_LINEENDWRAPEXTEND 2452
#define wxSTC_CMD_VCHOMEWRAP 2453
#define wxSTC_CMD_VCHOMEWRAPEXTEND 2454

// Move to the previous change in capitalisation.
#define wxSTC_CMD_WORDPARTLEFT 2390

// Move to the previous change in capitalisation extending selection
// to new caret position.
#define wxSTC_CMD_WORDPARTLEFTEXTEND 2391

// Move to the change next in capitalisation.
#define wxSTC_CMD_WORDPARTRIGHT 2392

// Move to the next change in capitalisation extending selection
// to new caret position.
#define wxSTC_CMD_WORDPARTRIGHTEXTEND 2393

// Delete back from the current position to the start of the line.
#define wxSTC_CMD_DELLINELEFT 2395

// Delete forwards from the current position to the end of the line.
#define wxSTC_CMD_DELLINERIGHT 2396

// Move caret between paragraphs (delimited by empty lines)
#define wxSTC_CMD_PARADOWN 2413
#define wxSTC_CMD_PARADOWNEXTEND 2414
#define wxSTC_CMD_PARAUP 2415
#define wxSTC_CMD_PARAUPEXTEND 2416


// END of generated section
//----------------------------------------------------------------------



//----------------------------------------------------------------------
// BEGIN generated section.  The following code is automatically generated
//       by gen_iface.py.  Do not edit this file.  Edit stc.h.in instead
//       and regenerate


    // Add text to the document.
    void AddText(const wxString& text);

    // Add array of cells to document.
    void AddStyledText(const wxMemoryBuffer& data);

    // Insert string at a position.
    void InsertText(int pos, const wxString& text);

    // Delete all text in the document.
    void ClearAll();

    // Set all style bytes to 0, remove all folding information.
    void ClearDocumentStyle();

    // The number of characters in the document.
    int GetLength();

    // Returns the character byte at the position.
    int GetCharAt(int pos);

    // Returns the position of the caret.
    int GetCurrentPos();

    // Returns the position of the opposite end of the selection to the caret.
    int GetAnchor();

    // Returns the style byte at the position.
    int GetStyleAt(int pos);

    // Redoes the next action on the undo history.
    void Redo();

    // Choose between collecting actions into the undo
    // history and discarding them.
    void SetUndoCollection(bool collectUndo);

    // Select all the text in the document.
    void SelectAll();

    // Remember the current position in the undo history as the position
    // at which the document was saved.
    void SetSavePoint();

    // Retrieve a buffer of cells.
    wxMemoryBuffer GetStyledText(int startPos, int endPos);

    // Are there any redoable actions in the undo history?
    bool CanRedo();

    // Retrieve the line number at which a particular marker is located.
    int MarkerLineFromHandle(int handle);

    // Delete a marker.
    void MarkerDeleteHandle(int handle);

    // Is undo history being collected?
    bool GetUndoCollection();

    // Are white space characters currently visible?
    // Returns one of SCWS_* constants.
    int GetViewWhiteSpace();

    // Make white space characters invisible, always visible or visible outside indentation.
    void SetViewWhiteSpace(int viewWS);

    // Find the position from a point within the window.
    int PositionFromPoint(wxPoint pt);

    // Find the position from a point within the window but return
    // INVALID_POSITION if not close to text.
    int PositionFromPointClose(int x, int y);

    // Set caret to start of a line and ensure it is visible.
    void GotoLine(int line);

    // Set caret to a position and ensure it is visible.
    void GotoPos(int pos);

    // Set the selection anchor to a position. The anchor is the opposite
    // end of the selection from the caret.
    void SetAnchor(int posAnchor);

    // Retrieve the text of the line containing the caret.
    // Returns the index of the caret on the line.
    wxString GetCurLine(int* linePos);


    // Retrieve the position of the last correctly styled character.
    int GetEndStyled();

    // Convert all line endings in the document to one mode.
    void ConvertEOLs(int eolMode);

    // Retrieve the current end of line mode - one of CRLF, CR, or LF.
    int GetEOLMode();

    // Set the current end of line mode.
    void SetEOLMode(int eolMode);

    // Set the current styling position to pos and the styling mask to mask.
    // The styling mask can be used to protect some bits in each styling byte from modification.
    void StartStyling(int pos, int mask);

    // Change style from current styling position for length characters to a style
    // and move the current styling position to after this newly styled segment.
    void SetStyling(int length, int style);

    // Is drawing done first into a buffer or direct to the screen?
    bool GetBufferedDraw();

    // If drawing is buffered then each line of text is drawn into a bitmap buffer
    // before drawing it to the screen to avoid flicker.
    void SetBufferedDraw(bool buffered);

    // Change the visible size of a tab to be a multiple of the width of a space character.
    void SetTabWidth(int tabWidth);

    // Retrieve the visible size of a tab.
    int GetTabWidth();

    // Set the code page used to interpret the bytes of the document as characters.
    void SetCodePage(int codePage);

    // Set the symbol used for a particular marker number,
    // and optionally the fore and background colours.
    void MarkerDefine(int markerNumber, int markerSymbol,
                const wxColour& foreground,
                const wxColour& background);

    // Set the foreground colour used for a particular marker number.
    void MarkerSetForeground(int markerNumber, const wxColour& fore);

    // Set the background colour used for a particular marker number.
    void MarkerSetBackground(int markerNumber, const wxColour& back);

    // Add a marker to a line, returning an ID which can be used to find or delete the marker.
    int MarkerAdd(int line, int markerNumber);

    // Delete a marker from a line.
    void MarkerDelete(int line, int markerNumber);

    // Delete all markers with a particular number from all lines.
    void MarkerDeleteAll(int markerNumber);

    // Get a bit mask of all the markers set on a line.
    int MarkerGet(int line);

    // Find the next line after lineStart that includes a marker in mask.
    int MarkerNext(int lineStart, int markerMask);

    // Find the previous line before lineStart that includes a marker in mask.
    int MarkerPrevious(int lineStart, int markerMask);

    // Define a marker from a bitmap
    void MarkerDefineBitmap(int markerNumber, const wxBitmap& bmp);

    // Set a margin to be either numeric or symbolic.
    void SetMarginType(int margin, int marginType);

    // Retrieve the type of a margin.
    int GetMarginType(int margin);

    // Set the width of a margin to a width expressed in pixels.
    void SetMarginWidth(int margin, int pixelWidth);

    // Retrieve the width of a margin in pixels.
    int GetMarginWidth(int margin);

    // Set a mask that determines which markers are displayed in a margin.
    void SetMarginMask(int margin, int mask);

    // Retrieve the marker mask of a margin.
    int GetMarginMask(int margin);

    // Make a margin sensitive or insensitive to mouse clicks.
    void SetMarginSensitive(int margin, bool sensitive);

    // Retrieve the mouse click sensitivity of a margin.
    bool GetMarginSensitive(int margin);

    // Clear all the styles and make equivalent to the global default style.
    void StyleClearAll();

    // Set the foreground colour of a style.
    void StyleSetForeground(int style, const wxColour& fore);

    // Set the background colour of a style.
    void StyleSetBackground(int style, const wxColour& back);

    // Set a style to be bold or not.
    void StyleSetBold(int style, bool bold);

    // Set a style to be italic or not.
    void StyleSetItalic(int style, bool italic);

    // Set the size of characters of a style.
    void StyleSetSize(int style, int sizePoints);

    // Set the font of a style.
    void StyleSetFaceName(int style, const wxString& fontName);

    // Set a style to have its end of line filled or not.
    void StyleSetEOLFilled(int style, bool filled);

    // Reset the default style to its state at startup
    void StyleResetDefault();

    // Set a style to be underlined or not.
    void StyleSetUnderline(int style, bool underline);

    // Set a style to be mixed case, or to force upper or lower case.
    void StyleSetCase(int style, int caseForce);

    // Set the character set of the font in a style.
    void StyleSetCharacterSet(int style, int characterSet);

    // Set a style to be a hotspot or not.
    void StyleSetHotSpot(int style, bool hotspot);

    // Set the foreground colour of the selection and whether to use this setting.
    void SetSelForeground(bool useSetting, const wxColour& fore);

    // Set the background colour of the selection and whether to use this setting.
    void SetSelBackground(bool useSetting, const wxColour& back);

    // Set the foreground colour of the caret.
    void SetCaretForeground(const wxColour& fore);

    // When key+modifier combination km is pressed perform msg.
    void CmdKeyAssign(int key, int modifiers, int cmd);

    // When key+modifier combination km do nothing.
    void CmdKeyClear(int key, int modifiers);

    // Drop all key mappings.
    void CmdKeyClearAll();

    // Set the styles for a segment of the document.
    void SetStyleBytes(int length, char* styleBytes);

    // Set a style to be visible or not.
    void StyleSetVisible(int style, bool visible);

    // Get the time in milliseconds that the caret is on and off.
    int GetCaretPeriod();

    // Get the time in milliseconds that the caret is on and off. 0 = steady on.
    void SetCaretPeriod(int periodMilliseconds);

    // Set the set of characters making up words for when moving or selecting by word.
    void SetWordChars(const wxString& characters);

    // Start a sequence of actions that is undone and redone as a unit.
    // May be nested.
    void BeginUndoAction();

    // End a sequence of actions that is undone and redone as a unit.
    void EndUndoAction();

    // Set an indicator to plain, squiggle or TT.
    void IndicatorSetStyle(int indic, int style);

    // Retrieve the style of an indicator.
    int IndicatorGetStyle(int indic);

    // Set the foreground colour of an indicator.
    void IndicatorSetForeground(int indic, const wxColour& fore);

    // Retrieve the foreground colour of an indicator.
    wxColour IndicatorGetForeground(int indic);

    // Set the foreground colour of all whitespace and whether to use this setting.
    void SetWhitespaceForeground(bool useSetting, const wxColour& fore);

    // Set the background colour of all whitespace and whether to use this setting.
    void SetWhitespaceBackground(bool useSetting, const wxColour& back);

    // Divide each styling byte into lexical class bits (default: 5) and indicator
    // bits (default: 3). If a lexer requires more than 32 lexical states, then this
    // is used to expand the possible states.
    void SetStyleBits(int bits);

    // Retrieve number of bits in style bytes used to hold the lexical state.
    int GetStyleBits();

    // Used to hold extra styling information for each line.
    void SetLineState(int line, int state);

    // Retrieve the extra styling information for a line.
    int GetLineState(int line);

    // Retrieve the last line number that has line state.
    int GetMaxLineState();

    // Is the background of the line containing the caret in a different colour?
    bool GetCaretLineVisible();

    // Display the background of the line containing the caret in a different colour.
    void SetCaretLineVisible(bool show);

    // Get the colour of the background of the line containing the caret.
    wxColour GetCaretLineBack();

    /* SetCaretLineBack is changed to SetCaretLineBackground.
    // Set the colour of the background of the line containing the caret.
    void SetCaretLineBack(const wxColour& back);
    */

    // Set a style to be changeable or not (read only).
    // Experimental feature, currently buggy.
    void StyleSetChangeable(int style, bool changeable);

    // Display a auto-completion list.
    // The lenEntered parameter indicates how many characters before
    // the caret should be used to provide context.
    void AutoCompShow(int lenEntered, const wxString& itemList);

    // Remove the auto-completion list from the screen.
    void AutoCompCancel();

    // Is there an auto-completion list visible?
    bool AutoCompActive();

    // Retrieve the position of the caret when the auto-completion list was displayed.
    int AutoCompPosStart();

    // User has selected an item so remove the list and insert the selection.
    void AutoCompComplete();

    // Define a set of character that when typed cancel the auto-completion list.
    void AutoCompStops(const wxString& characterSet);

    // Change the separator character in the string setting up an auto-completion list.
    // Default is space but can be changed if items contain space.
    void AutoCompSetSeparator(int separatorCharacter);

    // Retrieve the auto-completion list separator character.
    int AutoCompGetSeparator();

    // Select the item in the auto-completion list that starts with a string.
    void AutoCompSelect(const wxString& text);

    // Should the auto-completion list be cancelled if the user backspaces to a
    // position before where the box was created.
    void AutoCompSetCancelAtStart(bool cancel);

    // Retrieve whether auto-completion cancelled by backspacing before start.
    bool AutoCompGetCancelAtStart();

    // Define a set of characters that when typed will cause the autocompletion to
    // choose the selected item.
    void AutoCompSetFillUps(const wxString& characterSet);

    // Should a single item auto-completion list automatically choose the item.
    void AutoCompSetChooseSingle(bool chooseSingle);

    // Retrieve whether a single item auto-completion list automatically choose the item.
    bool AutoCompGetChooseSingle();

    // Set whether case is significant when performing auto-completion searches.
    void AutoCompSetIgnoreCase(bool ignoreCase);

    // Retrieve state of ignore case flag.
    bool AutoCompGetIgnoreCase();

    // Display a list of strings and send notification when user chooses one.
    void UserListShow(int listType, const wxString& itemList);

    // Set whether or not autocompletion is hidden automatically when nothing matches.
    void AutoCompSetAutoHide(bool autoHide);

    // Retrieve whether or not autocompletion is hidden automatically when nothing matches.
    bool AutoCompGetAutoHide();

    // Set whether or not autocompletion deletes any word characters
    // after the inserted text upon completion.
    void AutoCompSetDropRestOfWord(bool dropRestOfWord);

    // Retrieve whether or not autocompletion deletes any word characters
    // after the inserted text upon completion.
    bool AutoCompGetDropRestOfWord();

    // Register an image for use in autocompletion lists.
    void RegisterImage(int type, const wxBitmap& bmp);

    // Clear all the registered images.
    void ClearRegisteredImages();

    // Retrieve the auto-completion list type-separator character.
    int AutoCompGetTypeSeparator();

    // Change the type-separator character in the string setting up an auto-completion list.
    // Default is '?' but can be changed if items contain '?'.
    void AutoCompSetTypeSeparator(int separatorCharacter);

    // Set the number of spaces used for one level of indentation.
    void SetIndent(int indentSize);

    // Retrieve indentation size.
    int GetIndent();

    // Indentation will only use space characters if useTabs is false, otherwise
    // it will use a combination of tabs and spaces.
    void SetUseTabs(bool useTabs);

    // Retrieve whether tabs will be used in indentation.
    bool GetUseTabs();

    // Change the indentation of a line to a number of columns.
    void SetLineIndentation(int line, int indentSize);

    // Retrieve the number of columns that a line is indented.
    int GetLineIndentation(int line);

    // Retrieve the position before the first non indentation character on a line.
    int GetLineIndentPosition(int line);

    // Retrieve the column number of a position, taking tab width into account.
    int GetColumn(int pos);

    // Show or hide the horizontal scroll bar.
    void SetUseHorizontalScrollBar(bool show);

    // Is the horizontal scroll bar visible?
    bool GetUseHorizontalScrollBar();

    // Show or hide indentation guides.
    void SetIndentationGuides(bool show);

    // Are the indentation guides visible?
    bool GetIndentationGuides();

    // Set the highlighted indentation guide column.
    // 0 = no highlighted guide.
    void SetHighlightGuide(int column);

    // Get the highlighted indentation guide column.
    int GetHighlightGuide();

    // Get the position after the last visible characters on a line.
    int GetLineEndPosition(int line);

    // Get the code page used to interpret the bytes of the document as characters.
    int GetCodePage();

    // Get the foreground colour of the caret.
    wxColour GetCaretForeground();

    // In read-only mode?
    bool GetReadOnly();

    // Sets the position of the caret.
    void SetCurrentPos(int pos);

    // Sets the position that starts the selection - this becomes the anchor.
    void SetSelectionStart(int pos);

    // Returns the position at the start of the selection.
    int GetSelectionStart();

    // Sets the position that ends the selection - this becomes the currentPosition.
    void SetSelectionEnd(int pos);

    // Returns the position at the end of the selection.
    int GetSelectionEnd();

    // Sets the print magnification added to the point size of each style for printing.
    void SetPrintMagnification(int magnification);

    // Returns the print magnification.
    int GetPrintMagnification();

    // Modify colours when printing for clearer printed text.
    void SetPrintColourMode(int mode);

    // Returns the print colour mode.
    int GetPrintColourMode();

    // Find some text in the document.
    int FindText(int minPos, int maxPos, const wxString& text, int flags);

    // On Windows, will draw the document into a display context such as a printer.
    int FormatRange(bool   doDraw,
               int    startPos,
               int    endPos,
               wxDC*  draw,
               wxDC*  target,  // Why does it use two? Can they be the same?
               wxRect renderRect,
               wxRect pageRect);

    // Retrieve the display line at the top of the display.
    int GetFirstVisibleLine();

    // Retrieve the contents of a line.
    wxString GetLine(int line);

    // Returns the number of lines in the document. There is always at least one.
    int GetLineCount();

    // Sets the size in pixels of the left margin.
    void SetMarginLeft(int pixelWidth);

    // Returns the size in pixels of the left margin.
    int GetMarginLeft();

    // Sets the size in pixels of the right margin.
    void SetMarginRight(int pixelWidth);

    // Returns the size in pixels of the right margin.
    int GetMarginRight();

    // Is the document different from when it was last saved?
    bool GetModify();

    // Select a range of text.
    void SetSelection(int start, int end);

    // Retrieve the selected text.
    wxString GetSelectedText();

    // Retrieve a range of text.
    wxString GetTextRange(int startPos, int endPos);

    // Draw the selection in normal style or with selection highlighted.
    void HideSelection(bool normal);

    // Retrieve the line containing a position.
    int LineFromPosition(int pos);

    // Retrieve the position at the start of a line.
    int PositionFromLine(int line);

    // Scroll horizontally and vertically.
    void LineScroll(int columns, int lines);

    // Ensure the caret is visible.
    void EnsureCaretVisible();

    // Replace the selected text with the argument text.
    void ReplaceSelection(const wxString& text);

    // Set to read only or read write.
    void SetReadOnly(bool readOnly);

    // Will a paste succeed?
    bool CanPaste();

    // Are there any undoable actions in the undo history?
    bool CanUndo();

    // Delete the undo history.
    void EmptyUndoBuffer();

    // Undo one action in the undo history.
    void Undo();

    // Cut the selection to the clipboard.
    void Cut();

    // Copy the selection to the clipboard.
    void Copy();

    // Paste the contents of the clipboard into the document replacing the selection.
    void Paste();

    // Clear the selection.
    void Clear();

    // Replace the contents of the document with the argument text.
    void SetText(const wxString& text);

    // Retrieve all the text in the document.
    wxString GetText();

    // Retrieve the number of characters in the document.
    int GetTextLength();

    // Set to overtype (true) or insert mode.
    void SetOvertype(bool overtype);

    // Returns true if overtype mode is active otherwise false is returned.
    bool GetOvertype();

    // Set the width of the insert mode caret.
    void SetCaretWidth(int pixelWidth);

    // Returns the width of the insert mode caret.
    int GetCaretWidth();

    // Sets the position that starts the target which is used for updating the
    // document without affecting the scroll position.
    void SetTargetStart(int pos);

    // Get the position that starts the target.
    int GetTargetStart();

    // Sets the position that ends the target which is used for updating the
    // document without affecting the scroll position.
    void SetTargetEnd(int pos);

    // Get the position that ends the target.
    int GetTargetEnd();

    // Replace the target text with the argument text.
    // Text is counted so it can contain nulls.
    // Returns the length of the replacement text.
    int ReplaceTarget(const wxString& text);

    // Replace the target text with the argument text after \d processing.
    // Text is counted so it can contain nulls.
    // Looks for \d where d is between 1 and 9 and replaces these with the strings
    // matched in the last search operation which were surrounded by \( and \).
    // Returns the length of the replacement text including any change
    // caused by processing the \d patterns.
    int ReplaceTargetRE(const wxString& text);

    // Search for a counted string in the target and set the target to the found
    // range. Text is counted so it can contain nulls.
    // Returns length of range or -1 for failure in which case target is not moved.
    int SearchInTarget(const wxString& text);

    // Set the search flags used by SearchInTarget.
    void SetSearchFlags(int flags);

    // Get the search flags used by SearchInTarget.
    int GetSearchFlags();

    // Show a call tip containing a definition near position pos.
    void CallTipShow(int pos, const wxString& definition);

    // Remove the call tip from the screen.
    void CallTipCancel();

    // Is there an active call tip?
    bool CallTipActive();

    // Retrieve the position where the caret was before displaying the call tip.
    int CallTipPosAtStart();

    // Highlight a segment of the definition.
    void CallTipSetHighlight(int start, int end);

    // Set the background colour for the call tip.
    void CallTipSetBackground(const wxColour& back);

    // Set the foreground colour for the call tip.
    void CallTipSetForeground(const wxColour& fore);

    // Set the foreground colour for the highlighted part of the call tip.
    void CallTipSetForegroundHighlight(const wxColour& fore);

    // Find the display line of a document line taking hidden lines into account.
    int VisibleFromDocLine(int line);

    // Find the document line of a display line taking hidden lines into account.
    int DocLineFromVisible(int lineDisplay);

    // Set the fold level of a line.
    // This encodes an integer level along with flags indicating whether the
    // line is a header and whether it is effectively white space.
    void SetFoldLevel(int line, int level);

    // Retrieve the fold level of a line.
    int GetFoldLevel(int line);

    // Find the last child line of a header line.
    int GetLastChild(int line, int level);

    // Find the parent line of a child line.
    int GetFoldParent(int line);

    // Make a range of lines visible.
    void ShowLines(int lineStart, int lineEnd);

    // Make a range of lines invisible.
    void HideLines(int lineStart, int lineEnd);

    // Is a line visible?
    bool GetLineVisible(int line);

    // Show the children of a header line.
    void SetFoldExpanded(int line, bool expanded);

    // Is a header line expanded?
    bool GetFoldExpanded(int line);

    // Switch a header line between expanded and contracted.
    void ToggleFold(int line);

    // Ensure a particular line is visible by expanding any header line hiding it.
    void EnsureVisible(int line);

    // Set some style options for folding.
    void SetFoldFlags(int flags);

    // Ensure a particular line is visible by expanding any header line hiding it.
    // Use the currently set visibility policy to determine which range to display.
    void EnsureVisibleEnforcePolicy(int line);

    // Sets whether a tab pressed when caret is within indentation indents.
    void SetTabIndents(bool tabIndents);

    // Does a tab pressed when caret is within indentation indent?
    bool GetTabIndents();

    // Sets whether a backspace pressed when caret is within indentation unindents.
    void SetBackSpaceUnIndents(bool bsUnIndents);

    // Does a backspace pressed when caret is within indentation unindent?
    bool GetBackSpaceUnIndents();

    // Sets the time the mouse must sit still to generate a mouse dwell event.
    void SetMouseDwellTime(int periodMilliseconds);

    // Retrieve the time the mouse must sit still to generate a mouse dwell event.
    int GetMouseDwellTime();

    // Get position of start of word.
    int WordStartPosition(int pos, bool onlyWordCharacters);

    // Get position of end of word.
    int WordEndPosition(int pos, bool onlyWordCharacters);

    // Sets whether text is word wrapped.
    void SetWrapMode(int mode);

    // Retrieve whether text is word wrapped.
    int GetWrapMode();

    // Sets the degree of caching of layout information.
    void SetLayoutCache(int mode);

    // Retrieve the degree of caching of layout information.
    int GetLayoutCache();

    // Sets the document width assumed for scrolling.
    void SetScrollWidth(int pixelWidth);

    // Retrieve the document width assumed for scrolling.
    int GetScrollWidth();

    // Measure the pixel width of some text in a particular style.
    // Nul terminated text argument.
    // Does not handle tab or control characters.
    int TextWidth(int style, const wxString& text);

    // Sets the scroll range so that maximum scroll position has
    // the last line at the bottom of the view (default).
    // Setting this to false allows scrolling one page below the last line.
    void SetEndAtLastLine(bool endAtLastLine);

    // Retrieve whether the maximum scroll position has the last
    // line at the bottom of the view.
    int GetEndAtLastLine();

    // Retrieve the height of a particular line of text in pixels.
    int TextHeight(int line);

    // Show or hide the vertical scroll bar.
    void SetUseVerticalScrollBar(bool show);

    // Is the vertical scroll bar visible?
    bool GetUseVerticalScrollBar();

    // Append a string to the end of the document without changing the selection.
    void AppendText(const wxString& text);

    // Is drawing done in two phases with backgrounds drawn before foregrounds?
    bool GetTwoPhaseDraw();

    // In twoPhaseDraw mode, drawing is performed in two phases, first the background
    // and then the foreground. This avoids chopping off characters that overlap the next run.
    void SetTwoPhaseDraw(bool twoPhase);

    // Make the target range start and end be the same as the selection range start and end.
    void TargetFromSelection();

    // Join the lines in the target.
    void LinesJoin();

    // Split the lines in the target into lines that are less wide than pixelWidth
    // where possible.
    void LinesSplit(int pixelWidth);

    // Set the colours used as a chequerboard pattern in the fold margin
    void SetFoldMarginColour(bool useSetting, const wxColour& back);
    void SetFoldMarginHiColour(bool useSetting, const wxColour& fore);

    // Duplicate the current line.
    void LineDuplicate();

    // Move caret to first position on display line.
    void HomeDisplay();

    // Move caret to first position on display line extending selection to
    // new caret position.
    void HomeDisplayExtend();

    // Move caret to last position on display line.
    void LineEndDisplay();

    // Move caret to last position on display line extending selection to new
    // caret position.
    void LineEndDisplayExtend();

    // Copy the line containing the caret.
    void LineCopy();

    // Move the caret inside current view if it's not there already.
    void MoveCaretInsideView();

    // How many characters are on a line, not including end of line characters?
    int LineLength(int line);

    // Highlight the characters at two positions.
    void BraceHighlight(int pos1, int pos2);

    // Highlight the character at a position indicating there is no matching brace.
    void BraceBadLight(int pos);

    // Find the position of a matching brace or INVALID_POSITION if no match.
    int BraceMatch(int pos);

    // Are the end of line characters visible?
    bool GetViewEOL();

    // Make the end of line characters visible or invisible.
    void SetViewEOL(bool visible);

    // Retrieve a pointer to the document object.
    wxSTCDoc* GetDocPointer();

    // Change the document object used.
    void SetDocPointer(wxSTCDoc* docPointer);

    // Set which document modification events are sent to the container.
    void SetModEventMask(int mask);

    // Retrieve the column number which text should be kept within.
    int GetEdgeColumn();

    // Set the column number of the edge.
    // If text goes past the edge then it is highlighted.
    void SetEdgeColumn(int column);

    // Retrieve the edge highlight mode.
    int GetEdgeMode();

    // The edge may be displayed by a line (EDGE_LINE) or by highlighting text that
    // goes beyond it (EDGE_BACKGROUND) or not displayed at all (EDGE_NONE).
    void SetEdgeMode(int mode);

    // Retrieve the colour used in edge indication.
    wxColour GetEdgeColour();

    // Change the colour used in edge indication.
    void SetEdgeColour(const wxColour& edgeColour);

    // Sets the current caret position to be the search anchor.
    void SearchAnchor();

    // Find some text starting at the search anchor.
    // Does not ensure the selection is visible.
    int SearchNext(int flags, const wxString& text);

    // Find some text starting at the search anchor and moving backwards.
    // Does not ensure the selection is visible.
    int SearchPrev(int flags, const wxString& text);

    // Retrieves the number of lines completely visible.
    int LinesOnScreen();

    // Set whether a pop up menu is displayed automatically when the user presses
    // the wrong mouse button.
    void UsePopUp(bool allowPopUp);

    // Is the selection rectangular? The alternative is the more common stream selection.
    bool SelectionIsRectangle();

    // Set the zoom level. This number of points is added to the size of all fonts.
    // It may be positive to magnify or negative to reduce.
    void SetZoom(int zoom);

    // Retrieve the zoom level.
    int GetZoom();

    // Create a new document object.
    // Starts with reference count of 1 and not selected into editor.
    wxSTCDoc* CreateDocument();

    // Extend life of document.
    void AddRefDocument(wxSTCDoc* docPointer);

    // Release a reference to the document, deleting document if it fades to black.
    void ReleaseDocument(wxSTCDoc* docPointer);

    // Get which document modification events are sent to the container.
    int GetModEventMask();

    // Change internal focus flag.
    void SetSTCFocus(bool focus);

    // Get internal focus flag.
    bool GetSTCFocus();

    // Change error status - 0 = OK.
    void SetStatus(int statusCode);

    // Get error status.
    int GetStatus();

    // Set whether the mouse is captured when its button is pressed.
    void SetMouseDownCaptures(bool captures);

    // Get whether mouse gets captured.
    bool GetMouseDownCaptures();

    // Sets the cursor to one of the SC_CURSOR* values.
    void SetSTCCursor(int cursorType);

    // Get cursor type.
    int GetSTCCursor();

    // Change the way control characters are displayed:
    // If symbol is < 32, keep the drawn way, else, use the given character.
    void SetControlCharSymbol(int symbol);

    // Get the way control characters are displayed.
    int GetControlCharSymbol();

    // Move to the previous change in capitalisation.
    void WordPartLeft();

    // Move to the previous change in capitalisation extending selection
    // to new caret position.
    void WordPartLeftExtend();

    // Move to the change next in capitalisation.
    void WordPartRight();

    // Move to the next change in capitalisation extending selection
    // to new caret position.
    void WordPartRightExtend();

    // Set the way the display area is determined when a particular line
    // is to be moved to by Find, FindNext, GotoLine, etc.
    void SetVisiblePolicy(int visiblePolicy, int visibleSlop);

    // Delete back from the current position to the start of the line.
    void DelLineLeft();

    // Delete forwards from the current position to the end of the line.
    void DelLineRight();

    // Get and Set the xOffset (ie, horizonal scroll position).
    void SetXOffset(int newOffset);
    int GetXOffset();

    // Set the last x chosen value to be the caret x position
    void ChooseCaretX();

    // Set the way the caret is kept visible when going sideway.
    // The exclusion zone is given in pixels.
    void SetXCaretPolicy(int caretPolicy, int caretSlop);

    // Set the way the line the caret is on is kept visible.
    // The exclusion zone is given in lines.
    void SetYCaretPolicy(int caretPolicy, int caretSlop);

    // Set printing to line wrapped (SC_WRAP_WORD) or not line wrapped (SC_WRAP_NONE).
    void SetPrintWrapMode(int mode);

    // Is printing line wrapped.
    int GetPrintWrapMode();

    // Set a fore colour for active hotspots.
    void SetHotspotActiveForeground(bool useSetting, const wxColour& fore);

    // Set a back colour for active hotspots.
    void SetHotspotActiveBackground(bool useSetting, const wxColour& back);

    // Enable / Disable underlining active hotspots.
    void SetHotspotActiveUnderline(bool underline);

    // Given a valid document position, return the previous position taking code
    // page into account. Returns 0 if passed 0.
    int PositionBefore(int pos);

    // Given a valid document position, return the next position taking code
    // page into account. Maximum value returned is the last position in the document.
    int PositionAfter(int pos);

    // Copy a range of text to the clipboard. Positions are clipped into the document.
    void CopyRange(int start, int end);

    // Copy argument text to the clipboard.
    void CopyText(int length, const wxString& text);

    // Start notifying the container of all key presses and commands.
    void StartRecord();

    // Stop notifying the container of all key presses and commands.
    void StopRecord();

    // Set the lexing language of the document.
    void SetLexer(int lexer);

    // Retrieve the lexing language of the document.
    int GetLexer();

    // Colourise a segment of the document using the current lexing language.
    void Colourise(int start, int end);

    // Set up a value that may be used by a lexer for some optional feature.
    void SetProperty(const wxString& key, const wxString& value);

    // Set up the key words used by the lexer.
    void SetKeyWords(int keywordSet, const wxString& keyWords);

    // Set the lexing language of the document based on string name.
    void SetLexerLanguage(const wxString& language);

// END of generated section
//----------------------------------------------------------------------
// Others...


    // Returns the line number of the line with the caret.
    int GetCurrentLine();

    // Extract style settings from a spec-string which is composed of one or
    // more of the following comma separated elements:
    //
    //      bold                    turns on bold
    //      italic                  turns on italics
    //      fore:#RRGGBB            sets the foreground colour
    //      back:#RRGGBB            sets the background colour
    //      face:[facename]         sets the font face name to use
    //      size:[num]              sets the font size in points
    //      eol                     turns on eol filling
    //      underline               turns on underlining
    //
    void StyleSetSpec(int styleNum, const wxString& spec);



    // Set style size, face, bold, italic, and underline attributes from
    // a wxFont's attributes.
    void StyleSetFont(int styleNum, wxFont& font);



    // Set all font style attributes at once.
    void StyleSetFontAttr(int styleNum, int size,
                          const wxString& faceName,
                          bool bold, bool italic,
                          bool underline);



    // Perform one of the operations defined by the wxSTC_CMD_* constants.
    void CmdKeyExecute(int cmd);



    // Set the left and right margin in the edit area, measured in pixels.
    void SetMargins(int left, int right);


    // Retrieve the start and end positions of the current selection.

    void GetSelection(int* startPos, int* endPos);


    // Retrieve the point in the window where a position is displayed.
    wxPoint PointFromPosition(int pos);


    // Scroll enough to make the given line visible
    void ScrollToLine(int line);


    // Scroll enough to make the given column visible
    void ScrollToColumn(int column);


    // Send a message to Scintilla
    long SendMsg(int msg, long wp, long lp);


    // Set the vertical scrollbar to use instead of the ont that's built-in.
    void SetVScrollBar(wxScrollBar* bar);


    // Set the horizontal scrollbar to use instead of the ont that's built-in.
    void SetHScrollBar(wxScrollBar* bar);

    // Can be used to prevent the EVT_CHAR handler from adding the char
bool GetLastKeydownProcessed();
void SetLastKeydownProcessed(bool val);

    // Write the contents of the editor to filename
    bool SaveFile(const wxString& filename);

    // Load the contents of filename into the editor
    bool LoadFile(const wxString& filename);

    // Allow for simulating a DnD DragOver
    --wxDragResult DoDragOver(wxCoord x, wxCoord y, wxDragResult def); 

    // Allow for simulating a DnD DropText
    bool DoDropText(long x, long y, const wxString& data);



