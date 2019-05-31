/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTSource.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSString, NSNumber, CLLocation, NSDate;

@interface RTSourceCoreLocationPredictedApplication : RTSource <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSData* _icon;
	NSString* _developer;
	NSNumber* _adamId;
	long long _installationState;
	CLLocation* _location;
	double _distance;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * icon;                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * developer;                     //@synthesize developer=_developer - In the implementation block
@property (nonatomic,retain) NSNumber * adamId;                        //@synthesize adamId=_adamId - In the implementation block
@property (assign,nonatomic) long long installationState;              //@synthesize installationState=_installationState - In the implementation block
@property (nonatomic,retain) CLLocation * location;                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double distance;                          //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(BOOL)validAtLocation:(id)arg1 ;
-(BOOL)validOnDate:(id)arg1 ;
-(void)setInstallationState:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setIcon:(NSData *)arg1 ;
-(CLLocation *)location;
-(NSData *)icon;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setAdamId:(NSNumber *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setDeveloper:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithIdentifier:(id)arg1 developer:(id)arg2 adamId:(id)arg3 icon:(id)arg4 installationState:(long long)arg5 location:(id)arg6 distance:(double)arg7 startDate:(id)arg8 endDate:(id)arg9 ;
-(long long)installationState;
-(NSString *)developer;
-(NSNumber *)adamId;
@end
