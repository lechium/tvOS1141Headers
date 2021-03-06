/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSDictionary, NSString, NSNumber;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _perDevice;
	BOOL _profileValidated;
	NSArray* _blockedBy;
	NSDate* _installDate;
	NSDictionary* _rawUpdateDictionary;
	NSDate* _timestamp;
	long long _updateState;
	NSDictionary* _metrics;
	long long _rawUpdateState;

}

@property (nonatomic,copy) NSArray * blockedBy;                                            //@synthesize blockedBy=_blockedBy - In the implementation block
@property (nonatomic,copy) NSDate * installDate;                                           //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,copy) NSDictionary * metrics;                                         //@synthesize metrics=_metrics - In the implementation block
@property (assign,getter=isPerDevice,nonatomic) BOOL perDevice;                            //@synthesize perDevice=_perDevice - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (assign,nonatomic) long long rawUpdateState;                                     //@synthesize rawUpdateState=_rawUpdateState - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long updateState;                                        //@synthesize updateState=_updateState - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSNumber * externalVersionIdentifier; 
@property (nonatomic,readonly) long long parentalControlsRank; 
@property (nonatomic,readonly) NSDictionary * rawUpdateDictionary;                         //@synthesize rawUpdateDictionary=_rawUpdateDictionary - In the implementation block
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (nonatomic,readonly) NSDictionary * updateDictionary; 
+(BOOL)supportsSecureCoding;
-(long long)updateState;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSString *)bundleIdentifier;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)metrics;
-(NSNumber *)externalVersionIdentifier;
-(NSString *)buyParams;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)arg1 ;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(long long)parentalControlsRank;
-(NSDate *)installDate;
-(void)setInstallDate:(NSDate *)arg1 ;
-(NSDictionary *)updateDictionary;
-(void)setUpdateState:(long long)arg1 ;
-(id)releaseDate;
-(long long)storeItemIdentifier;
-(NSArray *)blockedBy;
-(BOOL)isPerDevice;
-(NSDictionary *)rawUpdateDictionary;
-(long long)rawUpdateState;
-(void)setBlockedBy:(NSArray *)arg1 ;
-(void)setPerDevice:(BOOL)arg1 ;
-(void)setRawUpdateState:(long long)arg1 ;
@end

