/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _groupID;
	NSUUID* _organizationUUID;

}

@property (nonatomic,copy,readonly) NSUUID * organizationUUID;              //@synthesize organizationUUID=_organizationUUID - In the implementation block
@property (nonatomic,readonly) unsigned short groupID;                      //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(NSUUID *)organizationUUID;
-(BOOL)isEqualToGroupIdentifier:(id)arg1 ;
-(unsigned short)groupID;
@end

