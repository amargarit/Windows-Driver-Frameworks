//
//    Copyright (C) Microsoft.  All rights reserved.
//
//
// This is a generated file. Please do not modify it directly.
//

#pragma once

typedef struct _ERROR_BUCKET {
    ULONG BaseErrorCode; //Starting error code in the bucket
    USHORT RunLength;    //Number of contiguous error codes starting with BaseErrorCode
} ERROR_BUCKET, *PERROR_BUCKET;

const NTSTATUS INVALID_STATUS = (ULONG)(-1);

CONST NTSTATUS ErrorTable[] = {
    0x0,
    0xc0000010,
    0xc000000f,
    0xc000003a,
    0xc000011f,
    0xc0000022,
    0xc0000008,
    0xc0000017,
    0xc0000087,
    0xc00000d4,
    0x80000006,
    0xc00000a2,
    0xc00000a3,
    0xc0000184,
    0xc000003f,
    0xc0000004,
    0xc0000015,
    0x8000000e,
    0xc0000001,
    0xc0000043,
    0xc0000054,
    0xc0000012,
    0xc0000011,
    0xc00000bb,
    0xc00000bc,
    0xc00000bd,
    0xc00000be,
    0xc00000bf,
    0xc00000c0,
    0xc00000c1,
    0xc00000c2,
    0xc00000c3,
    0xc000013e,
    0xc00000c5,
    0xc00000c6,
    0xc00000c7,
    0xc00000c8,
    0xc00000c9,
    0xc00000ca,
    0xc00000cb,
    0xc00000cc,
    0xc00000cd,
    0xc00000ce,
    0xc00000cf,
    0xc00000d0,
    0xc00000d1,
    0xc00002ea,
    0xc000006a,
    0xc000000d,
    0xc00000d2,
    0xc000014b,
    0xc000007f,
    0xc00000b5,
    0xc0000023,
    0xc0000033,
    0xc0000148,
    0xc0000135,
    0xc000007a,
    0x80,
    0xc0000101,
    0xc0000086,
    0xc000004a,
    0xc000002a,
    0xc0000039,
    0x80000011,
    0xc0000138,
    0xc0000035,
    0xc000007b,
    0xc0000100,
    0xc0000106,
    0xc0000901,
    0xc0000902,
    0xc0000903,
    0xc0000904,
    0xc0000905,
    0xc0000906,
    0xc0000907,
    0xc00000ad,
    0xc00000ae,
    0xc00000d9,
    0xc00000b0,
    0xc0000016,
    0xc00000d6,
    0x80000013,
    0x80000014,
    0x8000001a,
    0xc0000103,
    0xc000004f,
    0xc0000264,
    0xc0000047,
    0x8000000d,
    0xc00000e2,
    0xc00000e3,
    0xc0000304,
    0xc000019e,
    0xc000019f,
    0xc00001a0,
    0xc00001a1,
    0xc00001a3,
    0xc00001a4,
    0xc0000109,
    0xc0000018,
    0xc0000095,
    0xc00000b2,
    0xc00000b3,
    0xc0000421,
    0xc0000113,
    0x4000001d,
    0xc000026f,
    0xc000000c,
    0xc0000027,
    0xc0000028,
    0xc0000029,
    0xc000002e,
    0xc000002f,
    0xc0000031,
    0xc0000038,
    0xc00000aa,
    0xc00000b7,
    0xc00000b8,
    0xc00000b9,
    0xc00000d3,
    0xc00000d8,
    0xc00000db,
    0xc00000ea,
    0xc00000eb,
    0xc00000ec,
    0xc00000ff,
    0xc000010c,
    0xc0000118,
    0xc0000119,
    0xc000011a,
    0xc0000129,
    0xc000012a,
    0xc000012c,
    0xc0000132,
    0xc0000134,
    0xc0000136,
    0xc0000137,
    0xc000013a,
    0xc0000143,
    0xc0000144,
    0xc0000145,
    0xc0000146,
    0xc0000428,
    0xc0000147,
    0xc000014a,
    0xc000014e,
    0xc000015e,
    0xc0000161,
    0xc0000163,
    0xc0000164,
    0xc000016e,
    0xc0000187,
    0xc0000191,
    0xc000019c,
    0xc0000218,
    0xc0000219,
    0xc000021a,
    0xc000021b,
    0xc000021d,
    0xc000021e,
    0xc000021f,
    0xc0000222,
    0xc0000223,
    0xc0000226,
    0xc0000228,
    0xc000022c,
    0xc000022e,
    0xc000022f,
    0xc0000231,
    0xc0000232,
    0xc0000242,
    0xc0000244,
    0xc0000245,
    0xc0000250,
    0xc0000251,
    0xc0000252,
    0xc0000254,
    0xc0000255,
    0xc0000256,
    0xc0000258,
    0xc000025a,
    0xc000025b,
    0xc000025c,
    0xc000025f,
    0xc0000260,
    0xc0000261,
    0xc0000266,
    0xc0000268,
    0xc0000269,
    0xc000026b,
    0xc0000271,
    0xc0000273,
    0xc0000282,
    0xc00002a0,
    0xc00002b3,
    0xc00002b4,
    0xc00002b5,
    0xc00002b9,
    0xc00002c2,
    0xc00002c4,
    0xc00002c8,
    0xc00002ce,
    0xc00002d1,
    0xc00002d2,
    0xc00002de,
    0xc00002e8,
    0xc00002eb,
    0xc0000353,
    0xc0000355,
    0xc000028c,
    0xc000035f,
    0xc0000365,
    0xc0000366,
    0xc0000368,
    0xc0000369,
    0xc000036a,
    0xc000036d,
    0xc000036e,
    0xc000038e,
    0xc0000407,
    0xc0000411,
    0xc0000427,
    0xc0000420,
    0xc0140001,
    0xc0009898,
    0xc0040035,
    0xc0040036,
    0xc0040037,
    0xc0040038,
    0x80000007,
    0x8000000a,
    0x80000017,
    0x80000018,
    0x80000020,
    0x8000000c,
    0x8000002d,
    0x80000026,
    0x80000028,
    0x80000029,
    0x8000002a,
    0x8000002b,
    0x8000002c,
    0x80010001,
    0x40010001,
    0x40010002,
    0x40010003,
    0x40010004,
    0x40010005,
    0x40010006,
    0x40010007,
    0x40010008,
    0x40010009,
    0x40000000,
    0x40000001,
    0x40000003,
    0x40000004,
    0x40000005,
    0x40000007,
    0x4000000a,
    0x4000000b,
    0x4000000e,
    0x4000000f,
    0x40000010,
    0x40000011,
    0x40000012,
    0x40000013,
    0x40000014,
    0x40000015,
    0x40000016,
    0x40000017,
    0x40000018,
    0x40000019,
    0x4000001a,
    0x4000001b,
    0x40000023,
    0x40000024,
    0x40000025,
    0x40000026,
    0x40000027,
    0x40000029,
    0x4000002a,
    0x4000002b,
    0x4000002c,
    0x4000002d,
    0x40000294,
    0x1,
    0x2,
    0x3,
    0x3f,
    0xbf,
    0xc0,
    0x100,
    0x101,
    0xc000042c,
    0x104,
    0x108,
    0x109,
    0x10a,
    0x10b,
    0x10e,
    0x110,
    0x111,
    0x112,
    0x113,
    0x114,
    0x115,
    0x116,
    0x117,
    0x118,
    0x119,
    0x120,
    0x122,
    0x123,
    0x124,
    0x125,
    0x126,
    0x127,
    0x128,
    0x367,
    0x10001,
    0x10002,
    0xc0000423,
    0xc0000426,
    0xc0000429,
    0xc000042a,
    0xc0000709,
    0xc0000800,
    0x4000002f,
    0x40000031,
    0xc0000713,
    0x40000032,
    0xc0000372,
    0x40000033,
    0xc000a080,
    0xc000a081,
    0xc000a082,
    0xc0000908,
    0x215,
    0x8000002e,
    0xc0000909,
    0x216,
    0x8000002f,
    0xc00001a2,
    0xc0000120,
    0x103,
    0xc0000005,
    0xc0000006,
    0xc00000fd,
    0xc000014f,
    0xc0000098,
    0xc0000159,
    0xc000007c,
    0xc000014c,
    0x40000009,
    0xc000014d,
    0xc000015c,
    0xc000017c,
    0xc000017d,
    0xc0000180,
    0xc0000181,
    0x10c,
    0xc000010e,
    0xc000025e,
    0x8000001e,
    0x8000001b,
    0x8000001f,
    0x80000021,
    0x80000022,
    0xc0000172,
    0xc0000173,
    0xc0000174,
    0xc0000175,
    0xc0000176,
    0x8000001c,
    0x8000001d,
    0xc0000178,
    0xc0000717,
    0xc0000142,
    0xc00002fe,
    0xc00000e9,
    0xc0000150,
    0xc000016c,
    0x40000008,
    0x4000000c,
    0xc0000165,
    0xc0000166,
    0xc0000167,
    0xc0000168,
    0xc0000169,
    0xc000016a,
    0xc000016b,
    0xc0000177,
    0xc0000205,
    0xc0000194,
    0xc0000220,
    0xc0000265,
    0xc0000283,
    0xc0000284,
    0xc0000285,
    0xc0000286,
    0xc0000287,
    0x80000288,
    0x80000289,
    0xc000009d,
    0xc0000225,
    0xc0000272,
    0xc0000230,
    0xc000029f,
    0xc00002b7,
    0xc00002b8,
    0xc00002cf,
    0xc000026d,
    0xc0000122,
    0xc0000207,
    0xc0000195,
    0xc0000196,
    0xc0000243,
    0xc0000236,
    0xc0000237,
    0xc0000238,
    0xc0000239,
    0xc000023a,
    0xc000023b,
    0xc000023c,
    0xc000023d,
    0xc000023e,
    0xc000023f,
    0xc0000240,
    0xc0000241,
    0xc000022d,
    0xc0000246,
    0xc0000247,
    0xc0000248,
    0xc0000160,
    0xc00002cc,
    0xc0000300,
    0xc00002ff,
    0xc0000350,
    0xc000035d,
    0xc0000361,
    0xc00002c9,
    0xc0000320,
    0xc0000321,
    0xc0000388,
    0xc000036c,
    0xc000036f,
    0xc0000227,
    0xc0000409,
    0xc0000410,
    0xc0000354,
    0xc0000412,
    0xc0000414,
    0xc0000417,
    0xc0000432,
    0xc0000450,
    0xc000042b,
    0xc0000712,
    0xc0000802,
    0xc0000804,
    0xc0000446,
    0x106,
    0x107,
    0x10d,
    0x40000006,
    0x4000000d,
    0xc0000058,
    0xc0000059,
    0xc000005a,
    0xc000005b,
    0xc000005c,
    0xc000005d,
    0xc000005e,
    0xc000005f,
    0xc0000060,
    0xc0000061,
    0xc0000062,
    0xc0000063,
    0xc0000064,
    0xc0000065,
    0xc0000066,
    0xc0000067,
    0xc0000068,
    0xc0000069,
    0xc000006b,
    0xc000006c,
    0xc000006d,
    0xc000006e,
    0xc000006f,
    0xc0000070,
    0xc0000071,
    0xc0000072,
    0xc0000073,
    0xc0000074,
    0xc0000075,
    0xc0000076,
    0xc0000077,
    0xc0000078,
    0xc0000079,
    0xc000007d,
    0xc0000080,
    0xc0000081,
    0xc0000084,
    0xc0000099,
    0xc00000a4,
    0xc00000a5,
    0xc00000a6,
    0xc00000a7,
    0xc00000a8,
    0xc00000d7,
    0xc00000da,
    0xc00000dc,
    0xc00000dd,
    0xc00000de,
    0xc00000df,
    0xc00000e0,
    0xc00000e1,
    0xc00000e4,
    0xc00000e5,
    0xc00000e6,
    0xc00000e7,
    0xc00000ed,
    0xc00000ee,
    0xc00000fe,
    0xc0000104,
    0xc0000105,
    0xc000010b,
    0xc000010d,
    0xc000011c,
    0xc000011d,
    0xc0000124,
    0xc0000125,
    0xc0000126,
    0xc0000127,
    0xc000012b,
    0xc0000151,
    0xc0000152,
    0xc0000153,
    0xc0000154,
    0xc0000155,
    0xc0000156,
    0xc0000157,
    0xc0000158,
    0xc000015a,
    0xc000015b,
    0xc000015d,
    0xc000017a,
    0xc000017b,
    0xc000017e,
    0xc000017f,
    0x8000000b,
    0xc0000102,
    0xc0000032,
    0xc0000202,
    0xc0000259,
    0x80090322,
    0xc00002c3,
    0xc0000133,
    0xc00002e9,
    0xc0000117,
    0xc000009a,
    0xc00000a1,
    0xc0000007,
    0xc000012d,
    0x102,
    0xc0000715,
    0xc000a083,
    0xc000a084,
    0xc0000453,
    0xc000a085,
    0xc000a086,
    0xc0000454,
    0xc000018e,
    0xc000018f,
    0xc0000188,
    0xc0000197,
    0xc0000500,
    0xc0000501,
    0xc0000502,
    0xc00002b6,
    0xc0000602,
    0xc0020001,
    0xc0020002,
    0xc0020004,
    0xc0020005,
    0xc0020006,
    0xc0020007,
    0xc0020008,
    0xc0020009,
    0xc002000a,
    0xc002000b,
    0xc002000c,
    0xc002000d,
    0xc002000e,
    0xc002000f,
    0xc0020010,
    0xc0020011,
    0xc0020012,
    0xc0020013,
    0xc0020014,
    0xc0020015,
    0xc0020016,
    0xc0020017,
    0xc0020018,
    0xc0020019,
    0xc002001a,
    0xc002001b,
    0xc002001c,
    0xc002001d,
    0xc0020064,
    0xc002001f,
    0xc0020021,
    0xc0020022,
    0xc0020023,
    0xc0020024,
    0xc0020025,
    0xc0020026,
    0xc0020028,
    0xc0020029,
    0xc002002a,
    0xc002002b,
    0xc002002c,
    0xc002002d,
    0xc002002e,
    0xc002002f,
    0xc0020030,
    0xc0020031,
    0xc0020032,
    0xc0020033,
    0xc0020034,
    0xc0020035,
    0xc0020036,
    0xc0020037,
    0xc0020038,
    0xc0020039,
    0xc002003a,
    0xc002003b,
    0xc002003c,
    0xc002003d,
    0xc002003e,
    0xc002003f,
    0xc0020040,
    0xc0020041,
    0xc0020042,
    0xc0020043,
    0xc0020044,
    0xc0020045,
    0xc0020046,
    0xc0020047,
    0xc0020048,
    0xc0030001,
    0xc0030002,
    0xc0030003,
    0xc0030006,
    0xc0030007,
    0xc0030008,
    0xc0030009,
    0xc003000a,
    0xc003000b,
    0xc003000c,
    0xc00000e8,
    0xc0000014,
    0xc000018a,
    0xc000018b,
    0xc000018c,
    0xc000018d,
    0xc0000190,
    0xc0020049,
    0xc0000192,
    0xc0000193,
    0x80000023,
    0xc002004a,
    0xc0000198,
    0xc0000199,
    0xc000019a,
    0xc000019b,
    0x80000024,
    0xc0000089,
    0xc000008a,
    0xc000008b,
    0xc0000204,
    0xc0000044,
    0xc002004f,
    0xc0020050,
    0xc0020051,
    0xc0020052,
    0xc0020053,
    0xc0020054,
    0xc0020055,
    0x40020056,
    0xc0020057,
    0xc0020058,
    0xc0030059,
    0xc003005a,
    0xc003005b,
    0xc003005c,
    0xc003005d,
    0xc003005e,
    0xc0020065,
    0xc002004b,
    0xc002004c,
    0xc002004d,
    0xc0000224,
    0xc0000233,
    0xc0000234,
    0x400200af,
    0xc0020062,
    0xc0020063,
    0xc003005f,
    0xc0030060,
    0xc0030061,
    0xc0000279,
    0xc0000280,
    0x80090317,
    0xc0000401,
    0xc0000402,
    0xc0000403,
    0xc0000413,
    0xc0000418,
    0xc000026c,
    0xc0000107,
    0x80000025,
    0xc0000108,
    0xc0040039,
    0xc0000295,
    0xc0000296,
    0xc0000297,
    0xc0000298,
    0xc0000303,
    0xc0000301,
    0xc0000302,
    0xc00002c6,
    0xc00002c7,
    0xc0220103,
    0xc00002ca,
    0x80000027,
    0xc0000267,
    0xc000029d,
    0xc000029e,
    0xc0000275,
    0xc00002b2,
    0xc0000278,
    0xc0000276,
    0xc0000277,
    0xc000022b,
    0xc0130001,
    0xc0130002,
    0xc0130003,
    0xc0130004,
    0xc0130005,
    0xc0130006,
    0xc0130007,
    0xc0130008,
    0xc0130009,
    0xc013000a,
    0xc013000b,
    0xc013000c,
    0xc013000d,
    0xc013000e,
    0xc013000f,
    0xc0130010,
    0xc0130012,
    0xc0130014,
    0xc0130015,
    0xc0130016,
    0x80130001,
    0x80130002,
    0x80130003,
    0x80130004,
    0x80130005,
    0xc0130013,
    0xc0130011,
    0xc0130017,
    0x80090329,
    0x80090330,
    0xc0000293,
    0xc0000291,
    0xc0000292,
    0xc0000352,
    0xc0000441,
    0xc0000442,
    0xc0000443,
    0xc0000444,
    0xc0000445,
    0xc000021c,
    0xc01a0001,
    0xc01a0002,
    0xc01a0003,
    0xc01a0004,
    0xc01a0005,
    0xc01a0006,
    0xc01a0007,
    0xc01a0008,
    0xc01a0009,
    0xc01a000a,
    0xc01a000b,
    0x401a000c,
    0xc01a000d,
    0xc01a000e,
    0xc01a000f,
    0xc01a0010,
    0xc01a0011,
    0xc01a0012,
    0xc01a0013,
    0xc01a0014,
    0xc01a0015,
    0xc01a0016,
    0xc01a0017,
    0xc01a0018,
    0xc01a0019,
    0xc01a001a,
    0xc01a001b,
    0xc01a001c,
    0xc01a001d,
    0x80190009,
    0xc01a001e,
    0xc01a001f,
    0xc01a0020,
    0xc01a0021,
    0xc01a0022,
    0xc01a0023,
    0xc01a0024,
    0xc01a0025,
    0xc01a0026,
    0xc01a0027,
    0xc01a0028,
    0xc01a0029,
    0xc01a002a,
    0xc01a002b,
    0xc01a002c,
    0xc01a002d,
    0xc01a002e,
    0xc01a002f,
    0xc01a0030,
    0xc0190002,
    0xc0190003,
    0xc0190013,
    0xc0190014,
    0xc0190015,
    0xc0190016,
    0xc0190004,
    0x202,
    0xc0190007,
    0xc0190012,
    0xc019000f,
    0xc0190010,
    0xc0190011,
    0xc0190017,
    0xc0190018,
    0xc019004e,
    0xc019004f,
    0xc0190050,
    0xc0190051,
    0xc0190052,
    0xc0190053,
    0xc0190054,
    0xc0190055,
    0xc0190057,
    0xc0190058,
    0xc019005b,
    0xc019005c,
    0xc019005d,
    0xc019005e,
    0xc019005f,
    0xc0190001,
    0xc0190005,
    0xc0190006,
    0xc0190008,
    0xc019000a,
    0xc019000b,
    0xc0190021,
    0xc0190022,
    0xc0190023,
    0xc0190024,
    0xc0190025,
    0xc0190026,
    0xc019000c,
    0xc0190028,
    0x80190029,
    0xc0190030,
    0x80190031,
    0xc0190032,
    0xc0190033,
    0x40190034,
    0x40190035,
    0xc0190036,
    0xc0190037,
    0xc0190038,
    0xc0190039,
    0xc019003a,
    0xc019003b,
    0xc019003c,
    0xc019003d,
    0xc019003e,
    0xc019003f,
    0xc0190019,
    0xc0190040,
    0x80190041,
    0x80190042,
    0xc0190043,
    0xc0190044,
    0xc0190045,
    0xc0190046,
    0xc0190047,
    0xc0190048,
    0x80000803,
    0xc0190049,
    0xc019004a,
    0xc019004b,
    0xc019004c,
    0xc019004d,
    0xc0000805,
    0xc0190056,
    0xc0000806,
    0xc0190059,
    0xc019005a,
    0xc0190060,
    0xc0190061,
    0xc00a0001,
    0xc00a0002,
    0xc00a0003,
    0xc00a002f,
    0xc00a0006,
    0xc00a0007,
    0xc00a0008,
    0xc00a0009,
    0xc00a000a,
    0xc00a000b,
    0xc00a000c,
    0xc00a000d,
    0xc00a000e,
    0xc00a000f,
    0xc00a0010,
    0xc00a0015,
    0xc00a0016,
    0xc00a0017,
    0xc00a0018,
    0xc00a0022,
    0xc00a0037,
    0xc00a0024,
    0xc00a0026,
    0xc00a0027,
    0xc00a0028,
    0xc00a002a,
    0xc00a002b,
    0xc00a002e,
    0xc00a0030,
    0xc00a0031,
    0xc00a0034,
    0xc00a0033,
    0xc00a0013,
    0xc00a0012,
    0xc00a0014,
    0xc00a0036,
    0xc00a0035,
    0xc00a0032,
    0x400a0004,
    0x400a0005,
    0xc00a0038,
    0xc00a0039,
    0x121,
    0xc00002a1,
    0xc00002a2,
    0xc00002a3,
    0xc00002a4,
    0xc00002a5,
    0xc00002a6,
    0xc00002a7,
    0xc00002a8,
    0xc00002a9,
    0xc00002aa,
    0xc00002ab,
    0xc00002ac,
    0xc00002ad,
    0xc00002ae,
    0xc00002af,
    0xc00002b0,
    0xc0000299,
    0xc000029a,
    0xc000029b,
    0xc00002c1,
    0x40000370,
    0xc00002b1,
    0xc00002cb,
    0xc00002cd,
    0xc00002d0,
    0xc00002d4,
    0xc00002d5,
    0xc00002d6,
    0xc00002d7,
    0xc00002d8,
    0xc00002d9,
    0xc00002da,
    0xc00002db,
    0xc00002dc,
    0xc00002df,
    0xc00002e0,
    0xc00002e1,
    0xc00002e2,
    0xc0000419,
    0xc00002e3,
    0xc00002e4,
    0xc00002e5,
    0xc00002e6,
    0xc00002e7,
    0xc00002ec,
    0xc00002ed,
    0xc0000404,
    0xc0000357,
    0xc0000358,
    0xc0000405,
    0xc0000406,
    0xc0000801,
    0xc0000371,
    0xc000041a,
    0xc000041b,
    0xc000041c,
    0xc000a087,
    0xc000a088,
    0xc0360001,
    0xc0360002,
    0xc0360003,
    0xc0360004,
    0xc0360005,
    0xc0360006,
    0xc0360007,
    0xc0360008,
    0xc0360009,
    0xc0368000,
    0xc0368001,
    0xc0368002,
    0xc0368003,
    0xc0368004,
    0xc0368005,
    0xc0368006,
    0xc0150001,
    0xc0150002,
    0xc0150003,
    0xc0150004,
    0xc0150005,
    0xc0150006,
    0xc0150007,
    0xc0150008,
    0xc0150009,
    0xc015000a,
    0xc015000b,
    0xc015000e,
    0xc015001b,
    0xc015000c,
    0xc0150014,
    0xc0150015,
    0xc015000f,
    0xc0150010,
    0xc0150011,
    0xc0150013,
    0x4015000d,
    0xc0150012,
    0xc0150016,
    0xc0150017,
    0xc0150018,
    0xc0150019,
    0xc015001a,
    0xc0150020,
    0xc0150021,
    0xc015001c,
    0xc015001d,
    0xc015001e,
    0xc015001f,
    0xc0150022,
    0xc0150023,
    0xc0150024,
    0xc0150025,
    0xc0150026,
    0xc0150027,
    0xc00b0001,
    0xc00b0002,
    0xc00b0003,
    0xc00b0004,
    0xc00b0005,
    0xc00b0006,
    0xc00b0007,
    0xc0000451,
    0xc0000452,
    0xc000a100,
    0xc000a101,
    0x1c0001,
    0xc01d0001,
    0xc01d0002,
    0x401e0307,
    0x401e031e,
    0x401e034b,
    0x401e034c,
    0x401e0351,
    0x40230001,
    0x401e000a,
    0x401e042f,
    0x401e0437,
    0x401e0439,
    0x401e043a,
    0x80000001,
    0x80000003,
    0x80000004,
    0xc0000305,
    0xc0000306,
    0xc0000307,
    0xc0000308,
    0xc0000309,
    0xc000030a,
    0xc000030b,
    0xc000a000,
    0xc0000384,
    0xc0000386,
    0xc000038f,
    0xc000a001,
    0xc00002ee,
    0xc00002ef,
    0xc00002f1,
    0xc00002f2,
    0xc00002f3,
    0xc00002f4,
    0xc00002f5,
    0xc00002f6,
    0xc00002f7,
    0xc00002f8,
    0xc00002f9,
    0xc00002fa,
    0xc00002fb,
    0xc00002fc,
    0xc00002fd,
    0xc0000351,
    0xc000035b,
    0xc0000322,
    0xc0000389,
    0xc000038a,
    0xc000038b,
    0xc000038c,
    0xc000038d,
    0xc000040a,
    0xc000040b,
    0xc000040c,
    0xc000040d,
    0xc000040e,
    0xc000040f,
    0xc000042d,
    0xc000042e,
    0xc0000440,
    0xc0000603,
    0xc0000383,
    0xc0000385,
    0xc0000387,
    0xc0000380,
    0xc0000381,
    0xc0000382,
    0xc01c0001,
    0xc01c0002,
    0xc01c0003,
    0xc01c0004,
    0xc01c0005,
    0xc01c0006,
    0xc01c0007,
    0xc01c0008,
    0xc01c0009,
    0xc01c000a,
    0xc01c000b,
    0xc01c000c,
    0xc01c000d,
    0xc01c000e,
    0xc01c000f,
    0xc01c0010,
    0xc01c0011,
    0xc01c0012,
    0xc01c0013,
    0xc01c0014,
    0xc01c0015,
    0xc01c0016,
    0xc01c0017,
    0xc01c0018,
    0xc01c0019,
    0xc01c001a,
    0xc01c001b,
    0xc01c001c,
    0xc01c0020,
    0xc0000415,
    0xc0210000,
    0xc0210001,
    0xc0210009,
    0xc0210002,
    0xc0210003,
    0xc0210004,
    0xc0210005,
    0xc021000a,
    0xc021000b,
    0xc021000c,
    0xc021000d,
    0xc021000e,
    0xc021000f,
    0xc0210017,
    0xc0210010,
    0xc0210011,
    0xc0210012,
    0xc0210013,
    0xc0210014,
    0xc0210015,
    0xc0210016,
    0xc0210018,
    0xc0210019,
    0xc021001a,
    0xc021001b,
    0xc021001c,
    0xc0210006,
    0xc0210008,
    0xc0210007,
    0xc021001e,
    0xc0210021,
    0xc021001d,
    0xc0210022,
    0xc0210023,
    0xc0210024,
    0xc0210025,
    0x80210002,
    0xc0210026,
    0xc0210030,
    0xc0210027,
    0xc0210028,
    0xc0210029,
    0xc0220001,
    0xc0220002,
    0xc0220003,
    0xc0220004,
    0xc0220005,
    0xc0220006,
    0xc0220007,
    0xc0220008,
    0xc0220009,
    0xc022000a,
    0xc022000b,
    0xc022000c,
    0xc022000d,
    0xc022000e,
    0xc022000f,
    0xc0220010,
    0xc0220011,
    0xc0220012,
    0xc0220013,
    0xc0220014,
    0xc0220015,
    0xc0220016,
    0xc0220017,
    0xc0220018,
    0xc0220019,
    0xc022001a,
    0xc022001b,
    0xc022001c,
    0xc022001d,
    0xc022001e,
    0xc022001f,
    0xc0220020,
    0xc0220021,
    0xc0220022,
    0xc0220023,
    0xc0220024,
    0xc0220025,
    0xc0220026,
    0xc0220027,
    0xc0220028,
    0xc0220029,
    0xc022002a,
    0xc022002b,
    0xc022002c,
    0xc022002d,
    0xc022002e,
    0xc022002f,
    0xc0220030,
    0xc0220031,
    0xc0220032,
    0xc0220033,
    0xc0220034,
    0xc0220035,
    0xc0220036,
    0xc0220037,
    0xc0220038,
    0xc0220039,
    0xc022003a,
    0xc022003b,
    0xc022003c,
    0xc0220104,
    0xc0230002,
    0xc0230004,
    0xc0230005,
    0xc0230006,
    0xc0230007,
    0xc0230008,
    0xc0230009,
    0xc023000a,
    0xc023000b,
    0xc023000c,
    0xc023000d,
    0xc023000f,
    0xc0230010,
    0xc0230011,
    0xc0230014,
    0xc0230015,
    0xc0230016,
    0xc0230017,
    0xc0230018,
    0xc0230019,
    0xc023001a,
    0xc023001b,
    0xc023001c,
    0xc023001d,
    0xc023001e,
    0xc023001f,
    0xc0230022,
    0xc023002a,
    0xc023002b,
    0xc023002c,
    0xc023002d,
    0xc023002e,
    0xc023002f,
    0xc02300bb,
    0xc0232000,
    0xc0232001,
    0xc0232002,
    0xc0232003,
    0xc0232004,
    0x80370001,
    0x80380001,
    0x80380002,
    0x80390001,
    0x80390003,
    0x803a0001,
    0xc000001d,
    0xc0000025,
    0xc0000026,
    0xc000002b,
    0xc000008c,
    0xc000008d,
    0xc000008e,
    0xc000008f,
    0xc0000090,
    0xc0000091,
    0xc0000092,
    0xc0000093,
    0xc0000094,
    0xc0000096,
    0xc0000356,
    0xc000035e,
    0x40000034,
    0xc01e05e8,
    0xc01d0003,
    0xc01d0004,
    0xc01d0005,
    0xc01d0006,
    0xc01d0007,
    0xc01d0008,
    0xc01d0009,
    0xc01d000a,
    0xc01e0000,
    0xc01e0001,
    0xc01e0002,
    0xc01e0003,
    0xc01e0004,
    0xc01e0005,
    0xc01e0006,
    0xc01e0007,
    0xc01e0008,
    0xc01e0009,
    0xc01e000b,
    0xc01e000c,
    0xc01e0100,
    0xc01e0101,
    0xc01e0102,
    0xc01e0103,
    0xc01e0104,
    0xc01e0105,
    0xc01e0106,
    0xc01e0107,
    0xc01e0108,
    0xc01e0109,
    0xc01e0110,
    0xc01e0111,
    0xc01e0112,
    0xc01e0113,
    0xc01e0114,
    0xc01e0115,
    0xc01e0116,
    0xc01e0200,
    0xc01e0300,
    0xc01e0301,
    0xc01e0302,
    0xc01e0303,
    0xc01e0304,
    0xc01e0305,
    0xc01e0306,
    0xc01e0308,
    0xc01e0309,
    0xc01e030a,
    0xc01e030b,
    0xc01e030c,
    0xc01e0310,
    0xc01e0311,
    0xc01e0312,
    0xc01e0313,
    0xc01e0314,
    0xc01e0315,
    0xc01e0316,
    0xc01e0317,
    0xc01e0318,
    0xc01e0319,
    0xc01e031a,
    0xc01e031b,
    0xc01e031c,
    0xc01e031d,
    0xc01e031f,
    0xc01e0320,
    0xc01e0321,
    0xc01e0322,
    0xc01e0323,
    0xc01e0324,
    0xc01e0325,
    0xc01e0326,
    0xc01e0327,
    0xc01e0328,
    0xc01e0329,
    0xc01e032a,
    0xc01e032b,
    0xc01e032c,
    0xc01e032d,
    0xc01e032e,
    0xc01e032f,
    0xc01e0330,
    0xc01e0331,
    0xc01e0332,
    0xc01e0333,
    0xc01e0334,
    0xc01e0335,
    0xc01e0336,
    0xc01e0337,
    0xc01e0338,
    0xc01e0339,
    0xc01e033a,
    0xc01e033b,
    0xc01e033c,
    0xc01e033d,
    0xc01e033e,
    0xc01e033f,
    0xc01e0340,
    0xc01e0341,
    0xc01e0342,
    0xc01e0343,
    0xc01e0344,
    0xc01e0345,
    0xc01e0346,
    0xc01e0347,
    0xc01e0348,
    0xc01e0349,
    0xc01e034a,
    0xc01e034d,
    0xc01e034e,
    0xc01e034f,
    0xc01e0350,
    0xc01e0352,
    0xc01e0353,
    0xc01e0354,
    0xc01e0355,
    0xc01e0356,
    0xc01e0357,
    0xc01e0358,
    0xc01e0359,
    0xc01e035a,
    0xc01e035b,
    0xc01e035c,
    0xc01e0400,
    0xc01e0401,
    0xc01e0430,
    0xc01e0431,
    0xc01e0432,
    0xc01e0433,
    0xc01e0434,
    0xc01e0435,
    0xc01e0436,
    0xc01e0438,
    0xc01e043b,
    0xc01e0500,
    0xc01e0501,
    0xc01e0502,
    0xc01e0503,
    0xc01e0505,
    0xc01e050b,
    0xc01e050c,
    0xc01e050e,
    0xc01e050f,
    0xc01e0510,
    0xc01e0511,
    0xc01e0512,
    0xc01e0513,
    0xc01e0514,
    0xc01e0515,
    0xc01e0516,
    0xc01e0517,
    0xc01e0518,
    0xc01e051a,
    0xc01e051c,
    0xc01e051d,
    0xc01e051e,
    0xc01e051f,
    0xc01e0520,
    0xc01e0521,
    0xc01e0580,
    0xc01e0581,
    0xc01e0582,
    0xc01e0583,
    0xc01e0584,
    0xc01e0585,
    0xc01e0586,
    0xc01e0587,
    0xc01e0588,
    0xc01e0589,
    0xc01e058a,
    0xc01e058b,
    0xc01e058c,
    0xc01e058d,
    0xc01e05e0,
    0xc01e05e1,
    0xc01e05e2,
    0xc01e05e3,
    0xc01e05e4,
    0xc01e05e5,
    0xc01e05e6,
    0xc01e05e7,
    0xc023100f,
    0xc0231012,
    0xc0231013,
    0xc0350002,
    0xc0350003,
    0xc0350004,
    0xc0350005,
    0xc0350006,
    0xc0350007,
    0xc0350008,
    0xc0350009,
    0xc035000a,
    0xc035000b,
    0xc035000c,
    0xc035000d,
    0xc035000e,
    0xc0350011,
    0xc0350012,
    0xc0350013,
    0xc0350014,
    0xc0350016,
    0xc0350017,
    0xc0350018,
    0xc0350019,
    0xc035001a,
    0xc035001b,
    0xc035001c,
    0xc035001d,
    0xc035001e,
    0xc0351000,
    0xc0370001,
    0xc0370002,
    0xc0370003,
    0xc0370004,
    0xc0370005,
    0xc0370006,
    0xc0370007,
    0xc0370008,
    0xc0370009,
    0xc037000a,
    0xc037000b,
    0xc037000c,
    0xc037000d,
    0xc037000e,
    0xc037000f,
    0xc0370010,
    0xc0370011,
    0xc0370012,
    0xc0370013,
    0xc0370014,
    0xc0370015,
    0xc0370016,
    0xc0370017,
    0xc0370018,
    0xc0370019,
    0xc037001a,
    0xc037001b,
    0xc037001c,
    0xc037001d,
    0xc037001e,
    0xc037001f,
    0xc0370020,
    0xc0370021,
    0xc0370022,
    0xc0370023,
    0xc0370024,
    0xc0370025,
    0xc0370026,
    0xc0370027,
    0xc0370028,
    0xc0370029,
    0xc0380001,
    0xc0380002,
    0xc0380003,
    0xc0380004,
    0xc0380005,
    0xc0380006,
    0xc0380007,
    0xc0380008,
    0xc0380009,
    0xc038000a,
    0xc038000b,
    0xc038000c,
    0xc038000d,
    0xc038000e,
    0xc038000f,
    0xc0380010,
    0xc0380011,
    0xc0380012,
    0xc0380013,
    0xc0380014,
    0xc0380015,
    0xc0380016,
    0xc0380017,
    0xc0380018,
    0xc0380019,
    0xc038001a,
    0xc038001b,
    0xc038001c,
    0xc038001d,
    0xc038001e,
    0xc038001f,
    0xc0380020,
    0xc0380021,
    0xc0380022,
    0xc0380023,
    0xc0380024,
    0xc0380025,
    0xc0380026,
    0xc0380027,
    0xc0380028,
    0xc0380029,
    0xc038002a,
    0xc038002b,
    0xc038002c,
    0xc038002d,
    0xc038002e,
    0xc038002f,
    0xc0380030,
    0xc0380031,
    0xc0380032,
    0xc0380033,
    0xc0380034,
    0xc0380035,
    0xc0380036,
    0xc0380037,
    0xc0380038,
    0xc0380039,
    0xc038003a,
    0xc038003b,
    0xc038003c,
    0xc038003d,
    0xc038003e,
    0xc038003f,
    0xc0380040,
    0xc0380041,
    0xc0380042,
    0xc0380043,
    0xc0380044,
    0xc0380045,
    0xc0380046,
    0xc0380047,
    0xc0380048,
    0xc0380049,
    0xc038004a,
    0xc038004b,
    0xc038004c,
    0xc038004d,
    0xc038004e,
    0xc038004f,
    0xc0380050,
    0xc0380051,
    0xc0380052,
    0xc0380053,
    0xc0380054,
    0xc0380055,
    0xc0380056,
    0xc0380057,
    0xc0380058,
    0xc0380059,
    0xc038005a,
    0xc038005b,
    0xc038005c,
    0xc0390002,
    0xc03a0001,
    0xc03a0002,
    0xc03a0003,
    0xc03a0004,
    0xc03a0005,
    0xc03a0006,
    0xc03a0007,
    0xc03a0008,
    0xc03a0009,
    0xc03a000a,
    0xc03a000b,
    0xc03a000c,
    0xc03a000d,
    0xc03a000e,
    0xc03a000f,
    0xc03a0010,
    0xc03a0011,
    0xc03a0012,
    0xc03a0013,
    0xc03a0014,
    0xc03a0015,
    0xc03a0016,
    0xc03a0017,
    0xc03a0018,
    0xc03a0019,
};

CONST ERROR_BUCKET ErrorBucketTable[] = {
    {0x0, 7},
    {0x8, 1},
    {0xe, 1},
    {0x11, 3},
    {0x15, 4},
    {0x1b, 2},
    {0x1f, 4},
    {0x26, 1},
    {0x32, 23},
    {0x52, 1},
    {0x56, 3},
    {0x6d, 1},
    {0x70, 1},
    {0x79, 4},
    {0x7e, 3},
    {0x91, 1},
    {0x9a, 1},
    {0x9c, 1},
    {0x9e, 1},
    {0xa1, 1},
    {0xaa, 1},
    {0xb6, 2},
    {0xc1, 1},
    {0xcb, 1},
    {0xce, 1},
    {0xdc, 7},
    {0xe6, 5},
    {0xf0, 1},
    {0xfe, 2},
    {0x103, 1},
    {0x10b, 1},
    {0x11a, 1},
    {0x120, 1},
    {0x12a, 5},
    {0x130, 6},
    {0x13d, 1},
    {0x1e7, 1},
    {0x216, 28},
    {0x233, 82},
    {0x286, 11},
    {0x299, 1},
    {0x29c, 67},
    {0x2e0, 34},
    {0x307, 2},
    {0x30b, 2},
    {0x30e, 10},
    {0x320, 6},
    {0x3e3, 1},
    {0x3e5, 3},
    {0x3e9, 1},
    {0x3ed, 5},
    {0x3f6, 1},
    {0x3f8, 7},
    {0x420, 1},
    {0x422, 1},
    {0x44c, 16},
    {0x45d, 16},
    {0x476, 1},
    {0x488, 11},
    {0x494, 1},
    {0x49a, 2},
    {0x49d, 1},
    {0x4b1, 1},
    {0x4ba, 1},
    {0x4be, 1},
    {0x4c3, 2},
    {0x4c8, 17},
    {0x4db, 1},
    {0x4e3, 1},
    {0x4e6, 3},
    {0x4eb, 3},
    {0x4ef, 3},
    {0x4fb, 2},
    {0x4ff, 1},
    {0x502, 5},
    {0x508, 2},
    {0x50b, 3},
    {0x50f, 2},
    {0x513, 24},
    {0x52c, 15},
    {0x53c, 60},
    {0x5a4, 1},
    {0x5aa, 1},
    {0x5ad, 3},
    {0x5b4, 1},
    {0x5b7, 1},
    {0x5b9, 6},
    {0x5dc, 4},
    {0x60e, 3},
    {0x651, 1},
    {0x675, 1},
    {0x6a4, 2},
    {0x6a7, 28},
    {0x6c4, 6},
    {0x6cb, 36},
    {0x6f1, 18},
    {0x70e, 28},
    {0x76a, 3},
    {0x773, 3},
    {0x779, 6},
    {0x780, 2},
    {0x78b, 5},
    {0x791, 1},
    {0x7d1, 1},
    {0x961, 2},
    {0x964, 1},
    {0xf6e, 1},
    {0x1068, 4},
    {0x106e, 2},
    {0x1074, 3},
    {0x10dd, 1},
    {0x10e8, 1},
    {0x10f4, 1},
    {0x10fe, 3},
    {0x1126, 5},
    {0x1392, 1},
    {0x13af, 16},
    {0x13c0, 1},
    {0x13c2, 8},
    {0x13ce, 1},
    {0x1712, 2},
    {0x1770, 3},
    {0x1777, 2},
    {0x177d, 1},
    {0x1781, 5},
    {0x17e6, 1},
    {0x19c8, 49},
    {0x1a2c, 25},
    {0x1a46, 5},
    {0x1a90, 4},
    {0x1a95, 8},
    {0x1a9e, 42},
    {0x1b59, 4},
    {0x1b5f, 11},
    {0x1b6e, 4},
    {0x1b7b, 1},
    {0x1b7d, 2},
    {0x1b80, 3},
    {0x1b84, 2},
    {0x1b89, 10},
    {0x1b99, 5},
    {0x2009, 20},
    {0x2024, 1},
    {0x20ac, 1},
    {0x211e, 1},
    {0x2138, 3},
    {0x2141, 9},
    {0x2151, 4},
    {0x215b, 1},
    {0x215d, 1},
    {0x2163, 3},
    {0x216d, 1},
    {0x2171, 2},
    {0x217b, 2},
    {0x2182, 1},
    {0x219d, 1},
    {0x219f, 1},
    {0x21a4, 1},
    {0x21ac, 1},
    {0x21ba, 5},
    {0x3656, 9},
    {0x3665, 6},
    {0x366c, 1},
    {0x36b0, 12},
    {0x36cc, 1},
    {0x3701, 13},
    {0x3712, 13},
    {0x3afc, 7},
    {0x3b92, 1},
    {0x3bc3, 3},
    {0x1f0001, 1},
    {0x261001, 2},
    {0x262307, 1},
    {0x26231e, 1},
    {0x26234b, 2},
    {0x262351, 1},
    {0x340001, 1},
    {0x4026200a, 1},
    {0x4026242f, 1},
    {0x40262437, 1},
    {0x40262439, 2},
    {0x80000001, 1},
    {0x80000003, 2},
    {0x80030305, 7},
    {0x80090006, 1},
    {0x8009000d, 1},
    {0x80090016, 1},
    {0x80090022, 1},
    {0x8009002f, 1},
    {0x80090333, 12},
    {0x80090340, 4},
    {0x80090346, 1},
    {0x80090348, 1},
    {0x80090351, 11},
    {0x80090361, 2},
    {0x80097019, 1},
    {0x800b010c, 1},
    {0x8010000c, 1},
    {0x8010002c, 1},
    {0x8010002f, 1},
    {0x8010006b, 2},
    {0x8010006f, 1},
    {0x801f0001, 28},
    {0x801f0020, 1},
    {0x80260001, 1},
    {0x80310000, 2},
    {0x80310009, 1},
    {0x80310010, 2},
    {0x80310013, 2},
    {0x80310016, 2},
    {0x80310019, 1},
    {0x8031001b, 2},
    {0x80310024, 5},
    {0x8031003c, 4},
    {0x80310041, 5},
    {0x80310047, 1},
    {0x80310049, 1},
    {0x8031004b, 1},
    {0x8031004d, 5},
    {0x80310054, 2},
    {0x80310057, 1},
    {0x8031005a, 1},
    {0x8031006f, 1},
    {0x80310079, 1},
    {0x80310088, 2},
    {0x80320001, 60},
    {0x80320104, 1},
    {0x80340002, 1},
    {0x80340004, 10},
    {0x8034000f, 3},
    {0x80340014, 12},
    {0x80340022, 1},
    {0x8034002a, 6},
    {0x803400bb, 1},
    {0x80342000, 5},
    {0x80370001, 1},
    {0x80380001, 2},
    {0x80390001, 1},
    {0x80390003, 1},
    {0x803a0001, 1},
    {0xc000001d, 1},
    {0xc0000025, 2},
    {0xc000002b, 1},
    {0xc000008c, 9},
    {0xc0000096, 1},
    {0xc0090001, 3},
    {0xc02605e8, 1},
    {0xc0261003, 8},
    {0xc0262000, 10},
    {0xc026200b, 2},
    {0xc0262100, 10},
    {0xc0262110, 7},
    {0xc0262200, 1},
    {0xc0262300, 7},
    {0xc0262308, 5},
    {0xc0262310, 14},
    {0xc026231f, 44},
    {0xc026234d, 4},
    {0xc0262352, 11},
    {0xc0262400, 2},
    {0xc0262430, 7},
    {0xc0262438, 1},
    {0xc026243b, 1},
    {0xc0262500, 4},
    {0xc0262505, 1},
    {0xc026250b, 2},
    {0xc026250e, 11},
    {0xc026251a, 1},
    {0xc026251c, 6},
    {0xc0262580, 14},
    {0xc02625e0, 8},
    {0xc034100f, 1},
    {0xc0341012, 2},
    {0xc0350002, 13},
    {0xc0350011, 4},
    {0xc0350016, 9},
    {0xc0351000, 1},
    {0xc0370001, 41},
    {0xc0380001, 92},
    {0xc0390002, 1},
    {0xc03a0001, 25},
    {0x0, 0}
};

extern "C"
BOOL
ConvertWinErrorToNtstatus(
    __in    ULONG       WinError,
    __out   NTSTATUS    * Status
    );

extern "C"
NTSTATUS
WinErrorToNtStatus(
    __in ULONG WinError
    );