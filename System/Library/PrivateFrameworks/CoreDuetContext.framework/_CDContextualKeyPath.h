/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUserCentric;
	BOOL _isEphemeral;
	NSString* _key;
	unsigned long long _deviceID;

}

@property (nonatomic,copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL isUserCentric;                       //@synthesize isUserCentric=_isUserCentric - In the implementation block
@property (assign,nonatomic) BOOL isEphemeral;                         //@synthesize isEphemeral=_isEphemeral - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ephemeralKeyPathWithKey:(id)arg1 ;
+(id)keyPathWithKey:(id)arg1 isUserCentric:(BOOL)arg2 ;
+(id)remotekeyPathForKeyPath:(id)arg1 forDevice:(unsigned long long)arg2 ;
+(id)keyPathWithKey:(id)arg1 ;
-(BOOL)isEphemeral;
-(id)init;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isUserCentric;
-(id)initWithKey:(id)arg1 forDevice:(unsigned long long)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4 ;
-(void)setIsUserCentric:(BOOL)arg1 ;
-(unsigned long long)deviceID;
-(void)setDeviceID:(unsigned long long)arg1 ;
-(void)setIsEphemeral:(BOOL)arg1 ;
@end

