/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface W5LogItemRequest : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	long long _itemID;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithItemID:(long long)arg1 configuration:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(long long)itemID;
-(void)setItemID:(long long)arg1 ;
-(BOOL)isEqualToLogItemRequest:(id)arg1 ;
@end

