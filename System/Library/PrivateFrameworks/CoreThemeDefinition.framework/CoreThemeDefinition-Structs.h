/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	char* field1;
	char* field2;
	long long field3;
	unsigned long long field4;
} SCD_Struct_TD0;

typedef struct {
	char* field1;
	char* field2;
	renditionkeytoken field3[5_];
	long long field4;
	long long field5;
	SCD_Struct_TD0 field6[12];
} SCD_Struct_TD1;

typedef struct {
	char* field1;
	char* field2;
	BOOL field3;
	long long field4;
	SCD_Struct_TD1 field5[7];
} SCD_Struct_TD2;

typedef struct CGContext* CGContextRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_TD8;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
} SCD_Struct_TD9;

typedef struct renditionkeytoken {
	unsigned short identifier;
	unsigned short value;
} renditionkeytoken;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_Co11;

typedef struct CGColor* CGColorRef;

typedef struct {
	double top;
	double left;
	double bottom;
	double right;
} SCD_Struct_TD13;

typedef struct {
	char* field1;
	char* field2;
	SCD_Struct_TD0 field3[5_];
	long long field4;
	long long field5;
	renditionkeytoken field6[12];
} SCD_Struct_TD14;

typedef struct {
	char* field1;
	char* field2;
	BOOL field3;
	long long field4;
	SCD_Struct_TD14 field5[7];
} SCD_Struct_TD15;

typedef struct PSDImageInfo {
	unsigned width;
	unsigned height;
	unsigned short mode;
	unsigned short bitsPerSample;
	unsigned short samplesPerPixel;
	int isDrawable;
} PSDImageInfo;

typedef struct CGImage* CGImageRef;
