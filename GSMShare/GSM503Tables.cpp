/*
* Copyright 2012 Range Networks, Inc.
*
* This software is distributed under multiple licenses; see the COPYING file in the main directory for licensing information for this specific distribuion.
*
* This use of this software may be subject to additional restrictions.
* See the LEGAL file in the main directory for details.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*/



#include "GSM503Tables.h"


/*
	This array encodes GSM 05.03 Table 7.
*/
const unsigned int GSM::gAMRBitOrderTCH_AFS12_2[244] = {
	   0,   1,   2,   3,   4,   5,   6,   7,   8,   9,
	  10,  11,  12,  13,  14,  23,  15,  16,  17,  18,
	  19,  20,  21,  22,  24,  25,  26,  27,  28,  38,
	 141,  39, 142,  40, 143,  41, 144,  42, 145,  43,
	 146,  44, 147,  45, 148,  46, 149,  47,  97, 150,
	 200,  48,  98, 151, 201,  49,  99, 152, 202,  86,
	 136, 189, 239,  87, 137, 190, 240,  88, 138, 191,
	 241,  91, 194,  92, 195,  93, 196,  94, 197,  95,
	 198,  29,  30,  31,  32,  33,  34,  35,  50, 100,
	 153, 203,  89, 139, 192, 242,  51, 101, 154, 204,
	  55, 105, 158, 208,  90, 140, 193, 243,  59, 109,
	 162, 212,  63, 113, 166, 216,  67, 117, 170, 220,
	  36,  37,  54,  53,  52,  58,  57,  56,  62,  61,
	  60,  66,  65,  64,  70,  69,  68, 104, 103, 102,
	 108, 107, 106, 112, 111, 110, 116, 115, 114, 120,
	 119, 118, 157, 156, 155, 161, 160, 159, 165, 164,
	 163, 169, 168, 167, 173, 172, 171, 207, 206, 205,
	 211, 210, 209, 215, 214, 213, 219, 218, 217, 223,
	 222, 221,  73,  72,  71,  76,  75,  74,  79,  78,
	  77,  82,  81,  80,  85,  84,  83, 123, 122, 121,
	 126, 125, 124, 129, 128, 127, 132, 131, 130, 135,
	 134, 133, 176, 175, 174, 179, 178, 177, 182, 181,
	 180, 185, 184, 183, 188, 187, 186, 226, 225, 224,
	 229, 228, 227, 232, 231, 230, 235, 234, 233, 238,
	 237, 236,  96, 199
};


/*
	This array encodes GSM 05.03 Table 8.
*/
const unsigned int GSM::gAMRBitOrderTCH_AFS10_2[204] = {
	   7,   6,   5,   4,   3,   2,   1,   0,  16,  15,
	  14,  13,  12,  11,  10,   9,   8,  26,  27,  28,
	  29,  30,  31, 115, 116, 117, 118, 119, 120,  72,
	  73, 161, 162,  65,  68,  69, 108, 111, 112, 154,
	 157, 158, 197, 200, 201,  32,  33, 121, 122,  74,
	  75, 163, 164,  66, 109, 155, 198,  19,  23,  21,
	  22,  18,  17,  20,  24,  25,  37,  36,  35,  34,
	  80,  79,  78,  77, 126, 125, 124, 123, 169, 168,
	 167, 166,  70,  67,  71, 113, 110, 114, 159, 156,
	 160, 202, 199, 203,  76, 165,  81,  82,  92,  91,
	  93,  83,  95,  85,  84,  94, 101, 102,  96, 104,
	  86, 103,  87,  97, 127, 128, 138, 137, 139, 129,
	 141, 131, 130, 140, 147, 148, 142, 150, 132, 149,
	 133, 143, 170, 171, 181, 180, 182, 172, 184, 174,
	 173, 183, 190, 191, 185, 193, 175, 192, 176, 186,
	  38,  39,  49,  48,  50,  40,  52,  42,  41,  51,
	  58,  59,  53,  61,  43,  60,  44,  54, 194, 179,
	 189, 196, 177, 195, 178, 187, 188, 151, 136, 146,
	 153, 134, 152, 135, 144, 145, 105,  90, 100, 107,
	  88, 106,  89,  98,  99,  62,  47,  57,  64,  45,
	  63,  46,  55,  56
};


/*
	This array encodes GSM 05.03 Table 9.
*/
const unsigned int GSM::gAMRBitOrderTCH_AFS7_95[159] = {
	   8,   7,   6,   5,   4,   3,   2,  14,  16,   9,
	  10,  12,  13,  15,  11,  17,  20,  22,  24,  23,
	  19,  18,  21,  56,  88, 122, 154,  57,  89, 123,
	 155,  58,  90, 124, 156,  52,  84, 118, 150,  53,
	  85, 119, 151,  27,  93,  28,  94,  29,  95,  30,
	  96,  31,  97,  61, 127,  62, 128,  63, 129,  59,
	  91, 125, 157,  32,  98,  64, 130,   1,   0,  25,
	  26,  33,  99,  34, 100,  65, 131,  66, 132,  54,
	  86, 120, 152,  60,  92, 126, 158,  55,  87, 121,
	 153, 117, 116, 115,  46,  78, 112, 144,  43,  75,
	 109, 141,  40,  72, 106, 138,  36,  68, 102, 134,
	 114, 149, 148, 147, 146,  83,  82,  81,  80,  51,
	  50,  49,  48,  47,  45,  44,  42,  39,  35,  79,
	  77,  76,  74,  71,  67, 113, 111, 110, 108, 105,
	 101, 145, 143, 142, 140, 137, 133,  41,  73, 107,
	 139,  37,  69, 103, 135,  38,  70, 104, 136
};

/*
	This array encodes GSM 05.03 Table 10.
*/
const unsigned int GSM::gAMRBitOrderTCH_AFS7_4[148] = {
	   0,   1,   2,   3,   4,   5,   6,   7,   8,   9,
	  10,  11,  12,  13,  14,  15,  16,  26,  87,  27,
	  88,  28,  89,  29,  90,  30,  91,  51,  80, 112,
	 141,  52,  81, 113, 142,  54,  83, 115, 144,  55,
	  84, 116, 145,  58, 119,  59, 120,  21,  22,  23,
	  17,  18,  19,  31,  60,  92, 121,  56,  85, 117,
	 146,  20,  24,  25,  50,  79, 111, 140,  57,  86,
	 118, 147,  49,  78, 110, 139,  48,  77,  53,  82,
	 114, 143, 109, 138,  47,  76, 108, 137,  32,  33,
	  61,  62,  93,  94, 122, 123,  41,  42,  43,  44,
	  45,  46,  70,  71,  72,  73,  74,  75, 102, 103,
	 104, 105, 106, 107, 131, 132, 133, 134, 135, 136,
	  34,  63,  95, 124,  35,  64,  96, 125,  36,  65,
	  97, 126,  37,  66,  98, 127,  38,  67,  99, 128,
	  39,  68, 100, 129,  40,  69, 101, 130
};

/*
	This array encodes GSM 05.03 Table 11.
*/
const unsigned int GSM::gAMRBitOrderTCH_AFS6_7[134] = {
	   0,   1,   4,   3,   5,   6,  13,   7,   2,   8,
	   9,  11,  15,  12,  14,  10,  28,  82,  29,  83,
	  27,  81,  26,  80,  30,  84,  16,  55, 109,  56,
	 110,  31,  85,  57, 111,  48,  73, 102, 127,  32,
	  86,  51,  76, 105, 130,  52,  77, 106, 131,  58,
	 112,  33,  87,  19,  23,  53,  78, 107, 132,  21,
	  22,  18,  17,  20,  24,  25,  50,  75, 104, 129,
	  47,  72, 101, 126,  54,  79, 108, 133,  46,  71,
	 100, 125, 128, 103,  74,  49,  45,  70,  99, 124,
	  42,  67,  96, 121,  39,  64,  93, 118,  38,  63,
	  92, 117,  35,  60,  89, 114,  34,  59,  88, 113,
	  44,  69,  98, 123,  43,  68,  97, 122,  41,  66,
	  95, 120,  40,  65,  94, 119,  37,  62,  91, 116,
	  36,  61,  90, 115
};

/*
	This array encodes GSM 05.03 Table 12.
*/
const unsigned int GSM::gAMRBitOrderTCH_AFS5_9[118] = {
	   0,   1,   4,   5,   3,   6,   7,   2,  13,  15,
	   8,   9,  11,  12,  14,  10,  16,  28,  74,  29,
	  75,  27,  73,  26,  72,  30,  76,  51,  97,  50,
	  71,  96, 117,  31,  77,  52,  98,  49,  70,  95,
	 116,  53,  99,  32,  78,  33,  79,  48,  69,  94,
	 115,  47,  68,  93, 114,  46,  67,  92, 113,  19,
	  21,  23,  22,  18,  17,  20,  24, 111,  43,  89,
	 110,  64,  65,  44,  90,  25,  45,  66,  91, 112,
	  54, 100,  40,  61,  86, 107,  39,  60,  85, 106,
	  36,  57,  82, 103,  35,  56,  81, 102,  34,  55,
	  80, 101,  42,  63,  88, 109,  41,  62,  87, 108,
	  38,  59,  84, 105,  37,  58,  83, 104
};

/*
	This array encodes GSM 05.03 Table 13.
*/
const unsigned int GSM::gAMRBitOrderTCH_AFS5_15[103] = {
	   7,   6,   5,   4,   3,   2,   1,   0,  15,  14,
	  13,  12,  11,  10,   9,   8,  23,  24,  25,  26,
	  27,  46,  65,  84,  45,  44,  43,  64,  63,  62,
	  83,  82,  81, 102, 101, 100,  42,  61,  80,  99,
	  28,  47,  66,  85,  18,  41,  60,  79,  98,  29,
	  48,  67,  17,  20,  22,  40,  59,  78,  97,  21,
	  30,  49,  68,  86,  19,  16,  87,  39,  38,  58,
	  57,  77,  35,  54,  73,  92,  76,  96,  95,  36,
	  55,  74,  93,  32,  51,  33,  52,  70,  71,  89,
	  90,  31,  50,  69,  88,  37,  56,  75,  94,  34,
	  53,  72,  91
};

/*
	This array encodes GSM 05.03 Table 14.
*/
const unsigned int GSM::gAMRBitOrderTCH_AFS4_75[95] = {
	   0,   1,   2,   3,   4,   5,   6,   7,   8,   9,
	  10,  11,  12,  13,  14,  15,  23,  24,  25,  26,
	  27,  28,  48,  49,  61,  62,  82,  83,  47,  46,
	  45,  44,  81,  80,  79,  78,  17,  18,  20,  22,
	  77,  76,  75,  74,  29,  30,  43,  42,  41,  40,
	  38,  39,  16,  19,  21,  50,  51,  59,  60,  63,
	  64,  72,  73,  84,  85,  93,  94,  32,  33,  35,
	  36,  53,  54,  56,  57,  66,  67,  69,  70,  87,
	  88,  90,  91,  34,  55,  68,  89,  37,  58,  71,
	  92,  31,  52,  65,  86
};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRPuncturedTCH_AFS12_2[60] = {
	321, 325, 329, 333, 337, 341, 345, 349, 353, 357, 361, 363, 365,
	369, 373, 377, 379, 381, 385, 389, 393, 395, 397, 401, 405, 409,
	411, 413, 417, 421, 425, 427, 429, 433, 437, 441, 443, 445, 449,
	453, 457, 459, 461, 465, 469, 473, 475, 477, 481, 485, 489, 491,
	493, 495, 497, 499, 501, 503, 505, 507
};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRPuncturedTCH_AFS10_2[194] = {
	1, 4, 7, 10, 16, 19, 22, 28, 31, 34, 40, 43, 46, 52, 55, 58,
	64, 67, 70, 76, 79, 82, 88, 91, 94, 100, 103, 106, 112, 115,
	118, 124, 127, 130, 136, 139, 142, 148, 151, 154, 160, 163, 166,
	172, 175, 178, 184, 187, 190, 196, 199, 202, 208, 211, 214, 220,
	223, 226, 232, 235, 238, 244, 247, 250, 256, 259, 262, 268, 271,
	274, 280, 283, 286, 292, 295, 298, 304, 307, 310, 316, 319, 322,
	325, 328, 331, 334, 337, 340, 343, 346, 349, 352, 355, 358, 361,
	364, 367, 370, 373, 376, 379, 382, 385, 388, 391, 394, 397, 400,
	403, 406, 409, 412, 415, 418, 421, 424, 427, 430, 433, 436, 439,
	442, 445, 448, 451, 454, 457, 460, 463, 466, 469, 472, 475, 478,
	481, 484, 487, 490, 493, 496, 499, 502, 505, 508, 511, 514, 517,
	520, 523, 526, 529, 532, 535, 538, 541, 544, 547, 550, 553, 556,
	559, 562, 565, 568, 571, 574, 577, 580, 583, 586, 589, 592, 595,
	598, 601, 604, 607, 609, 610, 613, 616, 619, 621, 622, 625, 627,
	628, 631, 633, 634, 636, 637, 639, 640
};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRPuncturedTCH_AFS7_95[65] = {
	1, 2, 4, 5, 8, 22, 70, 118, 166, 214, 262, 310, 317, 319, 325,
	332, 334, 341, 343, 349, 356, 358, 365, 367, 373, 380, 382, 385,
	389, 391, 397, 404, 406, 409, 413, 415, 421, 428, 430, 433, 437,
	439, 445, 452, 454, 457, 461, 463, 469, 476, 478, 481, 485, 487,
	490, 493, 500, 502, 503, 505, 506, 508, 509, 511, 512
};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRPuncturedTCH_AFS7_4[26] = {
	0, 355, 361, 367, 373, 379, 385, 391, 397, 403, 409, 415, 421,
	427, 433, 439, 445, 451, 457, 460, 463, 466, 468, 469, 471,
	472
};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRPuncturedTCH_AFS6_7[128] = {
	1, 3, 7, 11, 15, 27, 39, 55, 67, 79, 95, 107, 119, 135, 147,
	159, 175, 187, 199, 215, 227, 239, 255, 267, 279, 287, 291, 295,
	299, 303, 307, 311, 315, 319, 323, 327, 331, 335, 339, 343, 347,
	351, 355, 359, 363, 367, 369, 371, 375, 377, 379, 383, 385, 387,
	391, 393, 395, 399, 401, 403, 407, 409, 411, 415, 417, 419, 423,
	425, 427, 431, 433, 435, 439, 441, 443, 447, 449, 451, 455, 457,
	459, 463, 465, 467, 471, 473, 475, 479, 481, 483, 487, 489, 491,
	495, 497, 499, 503, 505, 507, 511, 513, 515, 519, 521, 523, 527,
	529, 531, 535, 537, 539, 543, 545, 547, 549, 551, 553, 555, 557,
	559, 561, 563, 565, 567, 569, 571, 573, 575
};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRPuncturedTCH_AFS5_9[72] = {
	0, 1, 3, 5, 7, 11, 15, 31, 47, 63, 79, 95, 111, 127, 143,
	159, 175, 191, 207, 223, 239, 255, 271, 287, 303, 319, 327, 331,
	335, 343, 347, 351, 359, 363, 367, 375, 379, 383, 391, 395, 399,
	407, 411, 415, 423, 427, 431, 439, 443, 447, 455, 459, 463, 467,
	471, 475, 479, 483, 487, 491, 495, 499, 503, 507, 509, 511, 512,
	513, 515, 516, 517, 519
};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRPuncturedTCH_AFS5_15[117] = {
	0, 4, 5, 9, 10, 14, 15, 20, 25, 30, 35, 40, 50, 60, 70,
	80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200,
	210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 315, 320,
	325, 330, 334, 335, 340, 344, 345, 350, 354, 355, 360, 364, 365,
	370, 374, 375, 380, 384, 385, 390, 394, 395, 400, 404, 405, 410,
	414, 415, 420, 424, 425, 430, 434, 435, 440, 444, 445, 450, 454,
	455, 460, 464, 465, 470, 474, 475, 480, 484, 485, 490, 494, 495,
	500, 504, 505, 510, 514, 515, 520, 524, 525, 529, 530, 534, 535,
	539, 540, 544, 545, 549, 550, 554, 555, 559, 560, 564
};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRPuncturedTCH_AFS4_75[87] = {
	0, 1, 2, 4, 5, 7, 9, 15, 25, 35, 45, 55, 65, 75, 85, 95,
	105, 115, 125, 135, 145, 155, 165, 175, 185, 195, 205, 215, 225,
	235, 245, 255, 265, 275, 285, 295, 305, 315, 325, 335, 345, 355,
	365, 375, 385, 395, 400, 405, 410, 415, 420, 425, 430, 435, 440,
	445, 450, 455, 459, 460, 465, 470, 475, 479, 480, 485, 490, 495,
	499, 500, 505, 509, 510, 515, 517, 519, 520, 522, 524, 525, 526,
	527, 529, 530, 531, 532, 534
};

/* GSM 05.03 Tables 7-14 */
const unsigned int *GSM::gAMRBitOrder[8] = {
	GSM::gAMRBitOrderTCH_AFS12_2,
	GSM::gAMRBitOrderTCH_AFS10_2,
	GSM::gAMRBitOrderTCH_AFS7_95,
	GSM::gAMRBitOrderTCH_AFS7_4,
	GSM::gAMRBitOrderTCH_AFS6_7,
	GSM::gAMRBitOrderTCH_AFS5_9,
	GSM::gAMRBitOrderTCH_AFS5_15,
	GSM::gAMRBitOrderTCH_AFS4_75
};

/* GSM 05.03 3.9.4.2 */
const unsigned int GSM::gAMRKd[9] = {244, 204, 159, 148, 134, 118, 103, 95, 260};	// The last entry is for TCH_FS (GSM mode)

/* GSM 05.03 3.9.4.2 */
const unsigned int GSM::gAMRClass1ALth[8] = {81, 65, 75, 61, 55, 55, 49, 39};

/* GSM 05.03 3.9.4.4 */
const unsigned int GSM::gAMRTCHUCLth[8] = {508, 642, 513, 474, 576, 520, 565, 535};

/* GSM 05.03 3.9.4.2 */
const unsigned int GSM::gAMRPunctureLth[8] = {60, 194, 65, 26, 128, 72, 117, 87};

/* GSM 05.03 3.9.4.4 */
const unsigned int *GSM::gAMRPuncture[8] = {
	GSM::gAMRPuncturedTCH_AFS12_2,
	GSM::gAMRPuncturedTCH_AFS10_2,
	GSM::gAMRPuncturedTCH_AFS7_95,
	GSM::gAMRPuncturedTCH_AFS7_4,
	GSM::gAMRPuncturedTCH_AFS6_7,
	GSM::gAMRPuncturedTCH_AFS5_9,
	GSM::gAMRPuncturedTCH_AFS5_15,
	GSM::gAMRPuncturedTCH_AFS4_75
};


