/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface BWColorLookupCacheEntry : NSObject {

	NSData* _foregroundColorLookupTable;
	NSData* _backgroundColorLookupTable;
	NSData* _standbyForegroundColorLookupTable;

}

@property (nonatomic,retain,readonly) NSData * foregroundColorLookupTable;                     //@synthesize foregroundColorLookupTable=_foregroundColorLookupTable - In the implementation block
@property (nonatomic,retain,readonly) NSData * standbyForegroundColorLookupTable;              //@synthesize standbyForegroundColorLookupTable=_standbyForegroundColorLookupTable - In the implementation block
@property (nonatomic,retain,readonly) NSData * backgroundColorLookupTable;                     //@synthesize backgroundColorLookupTable=_backgroundColorLookupTable - In the implementation block
-(NSData *)foregroundColorLookupTable;
-(NSData *)standbyForegroundColorLookupTable;
-(NSData *)backgroundColorLookupTable;
-(id)initWithForegroundColorLookupTable:(id)arg1 backgroundColorLookupTable:(id)arg2 standbyForegroundColorLookupTable:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

