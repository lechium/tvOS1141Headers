/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <DeviceManagement/DMFControlGroupIdentifier.h>

@class DMFControlGroupIdentifier;

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier {

	unsigned _leaderIP;

}

@property (nonatomic,readonly) unsigned leaderIP;                                        //@synthesize leaderIP=_leaderIP - In the implementation block
@property (nonatomic,readonly) DMFControlGroupIdentifier * groupIdentifier; 
+(BOOL)supportsSecureCoding;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)stringValue;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned)arg3 ;
-(unsigned)leaderIP;
-(BOOL)isEqualToControlSessionIdentifier:(id)arg1 ;
@end

