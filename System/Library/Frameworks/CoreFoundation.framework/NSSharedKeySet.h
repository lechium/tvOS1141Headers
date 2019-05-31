/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding> {

	char* _g;
	unsigned char _select;
	void* _rankTable;
	unsigned _M;
	unsigned _factor;
	unsigned _numKey;
	unsigned* _seeds;
	id* _keys;
	NSSharedKeySet* _subSharedKeySet;
	unsigned char _algorithmType;

}

@property (g) char* g;                                            //@synthesize g=_g - In the implementation block
@property (assign) unsigned char select;                          //@synthesize select=_select - In the implementation block
@property (assign) void* rankTable;                               //@synthesize rankTable=_rankTable - In the implementation block
@property (M) unsigned M;                                         //@synthesize M=_M - In the implementation block
@property (assign) unsigned factor;                               //@synthesize factor=_factor - In the implementation block
@property (assign) unsigned numKey;                               //@synthesize numKey=_numKey - In the implementation block
@property (assign) unsigned* seeds;                               //@synthesize seeds=_seeds - In the implementation block
@property (assign) id* keys;                                      //@synthesize keys=_keys - In the implementation block
@property (retain) NSSharedKeySet * subSharedKeySet;              //@synthesize subSharedKeySet=_subSharedKeySet - In the implementation block
+(id)keySetWithKeys:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)keySetCount;
-(void)setG:(char*)arg1 ;
-(void)setSelect:(unsigned char)arg1 ;
-(void*)rankTable;
-(void)setRankTable:(void*)arg1 ;
-(unsigned)M;
-(unsigned)factor;
-(void)setFactor:(unsigned)arg1 ;
-(unsigned)numKey;
-(void)setNumKey:(unsigned)arg1 ;
-(unsigned*)seeds;
-(void)setSeeds:(unsigned*)arg1 ;
-(NSSharedKeySet *)subSharedKeySet;
-(void)setSubSharedKeySet:(NSSharedKeySet *)arg1 ;
-(id)initWithKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)setM:(unsigned)arg1 ;
-(void)setKeys:(id*)arg1 ;
-(unsigned char)select;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id*)keys;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(unsigned long long)maximumIndex;
-(char*)g;
@end
