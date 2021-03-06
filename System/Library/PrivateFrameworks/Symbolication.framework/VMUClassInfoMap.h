/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMUClassInfoMap : NSObject <NSSecureCoding> {

	void* _classInfoMap1;
	void* _classInfoMap2;
	NSMutableArray* _linearClassInfos;
	void* _fieldInfoMap1;
	void* _fieldInfoMap2;
	NSMutableArray* _linearFieldInfos;

}

@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) unsigned fieldInfoCount; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_destroyRetainedLinearArray:(id*)arg1 withCount:(unsigned)arg2 ;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(id)init;
-(unsigned)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id*)_retainedLinearArrayWithReturnedCount:(unsigned*)arg1 ;
-(unsigned)indexForClassInfo:(id)arg1 ;
-(void)_applyTypeOverlay:(id)arg1 ;
-(id)classInfoForAddress:(unsigned long long)arg1 ;
-(unsigned)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2 ;
-(unsigned)indexForFieldInfo:(id)arg1 ;
-(id)fieldInfoForIndex:(unsigned)arg1 ;
-(id)classInfoForIndex:(unsigned)arg1 ;
-(id)swiftFieldWithName:(const char*)arg1 offset:(unsigned)arg2 kind:(unsigned)arg3 typeref:(unsigned long long)arg4 ;
-(void)memoizeSwiftField:(id)arg1 withName:(const char*)arg2 offset:(unsigned)arg3 kind:(unsigned)arg4 typeref:(unsigned long long)arg5 ;
-(void)enumerateInfosWithBlock:(/*^block*/id)arg1 ;
-(unsigned)addFieldInfo:(id)arg1 ;
-(void)addClassInfosFromMap:(id)arg1 ;
-(unsigned)fieldInfoCount;
@end

