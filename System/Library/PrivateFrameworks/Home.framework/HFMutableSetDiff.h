/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFSetDiff.h>

@interface HFMutableSetDiff : HFSetDiff {

	BOOL _hasChanges;

}

@property (nonatomic,readonly) BOOL hasChanges;              //@synthesize hasChanges=_hasChanges - In the implementation block
-(void)addObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasChanges;
-(void)deleteObject:(id)arg1 ;
-(id)initWithFromSet:(id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(void)deleteAllObjects;
-(void)_updateHasChanges;
@end

