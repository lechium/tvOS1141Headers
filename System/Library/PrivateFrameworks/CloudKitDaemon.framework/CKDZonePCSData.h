/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordZoneID, NSData;

@interface CKDZonePCSData : CKDPCSData {

	OpaquePCSShareProtectionRef _zoneishPCS;
	CKRecordZoneID* _zoneID;
	NSData* _zoneishPCSData;
	NSData* _zoneishPublicKeyID;

}

@property (nonatomic,retain) CKRecordZoneID * zoneID;                             //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) NSData * zoneishPublicKeyID;                         //@synthesize zoneishPublicKeyID=_zoneishPublicKeyID - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef zoneishPCS; 
@property (nonatomic,copy) NSData * zoneishPCSData;                               //@synthesize zoneishPCSData=_zoneishPCSData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataWithZone:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)itemID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(OpaquePCSShareProtectionRef)zoneishPCS;
-(NSData *)zoneishPCSData;
-(NSData *)zoneishPublicKeyID;
-(void)setZoneishPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(void)setZoneishPublicKeyID:(NSData *)arg1 ;
-(id)initWithZone:(id)arg1 ;
-(void)setZoneishPCSData:(NSData *)arg1 ;
-(CKRecordZoneID *)zoneID;
@end

