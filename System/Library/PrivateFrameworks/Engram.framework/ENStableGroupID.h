/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Engram/Engram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSData;

@interface ENStableGroupID : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)stableGroupIDLength;
+(id)stableGroupIDWithCurrentTime;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)_mutableDataRepresentation;
-(int)customUUIDCompare:(unsigned char)arg1 u2:(unsigned char)arg2 ;
@end
