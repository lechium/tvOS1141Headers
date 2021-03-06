/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface BBBehaviorOverride : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _overrideType;
	unsigned long long _mode;
	NSArray* _effectiveIntervals;

}

@property (nonatomic,copy) NSArray * effectiveIntervals;                   //@synthesize effectiveIntervals=_effectiveIntervals - In the implementation block
@property (assign,nonatomic) unsigned long long overrideType;              //@synthesize overrideType=_overrideType - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                      //@synthesize mode=_mode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3 ;
-(void)setOverrideType:(unsigned long long)arg1 ;
-(NSArray *)effectiveIntervals;
-(id)nextOverrideTransitionDateAfterDate:(id)arg1 ;
-(BOOL)isActiveForDate:(id)arg1 ;
-(void)setEffectiveIntervals:(NSArray *)arg1 ;
-(id)initWithEffectiveIntervals:(id)arg1 overrideType:(unsigned long long)arg2 ;
-(unsigned long long)overrideType;
@end

