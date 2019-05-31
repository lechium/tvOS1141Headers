/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID;

@interface CKDAssetVolume : CKObject {

	NSNumber* _volumeIndex;
	NSUUID* _volumeUUID;

}

@property (nonatomic,retain) NSNumber * volumeIndex;              //@synthesize volumeIndex=_volumeIndex - In the implementation block
@property (nonatomic,retain) NSUUID * volumeUUID;                 //@synthesize volumeUUID=_volumeUUID - In the implementation block
+(id)CKSQLiteClassName;
-(id)description;
-(id)CKPropertiesDescription;
-(NSUUID *)volumeUUID;
-(void)setVolumeUUID:(NSUUID *)arg1 ;
-(void)setVolumeIndex:(NSNumber *)arg1 ;
-(NSNumber *)volumeIndex;
@end

