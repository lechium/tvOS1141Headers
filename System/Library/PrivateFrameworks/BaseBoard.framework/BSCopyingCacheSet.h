/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject {

	NSMutableSet* _mutable;
	NSSet* _immutable;

}

@property (readonly) unsigned long long count; 
-(id)immutableSet;
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
