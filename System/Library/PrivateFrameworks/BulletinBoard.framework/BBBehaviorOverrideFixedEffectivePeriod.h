/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/BBBehaviorOverrideEffectivePeriod.h>

@class NSDate, NSUUID, NSString;

@interface BBBehaviorOverrideFixedEffectivePeriod : NSObject <BBBehaviorOverrideEffectivePeriod> {

	NSDate* _startDate;
	double _effectiveInterval;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double effectiveInterval;              //@synthesize effectiveInterval=_effectiveInterval - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDate *)startDate;
-(BOOL)containsDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)nextTransitionDateAfterDate:(id)arg1 ;
-(void)setEffectiveInterval:(double)arg1 ;
-(double)effectiveInterval;
-(id)initWithStartDate:(id)arg1 effectiveInterval:(double)arg2 identifier:(id)arg3 ;
@end

