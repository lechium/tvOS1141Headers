/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface PSYDeviceSyncStateEntry : NSObject <NSSecureCoding> {

	unsigned _syncSwitchIndex;
	unsigned _migrationIndex;
	NSUUID* _pairingID;
	unsigned long long _initialSyncState;

}

@property (nonatomic,retain) NSUUID * pairingID;                               //@synthesize pairingID=_pairingID - In the implementation block
@property (assign,nonatomic) unsigned long long initialSyncState;              //@synthesize initialSyncState=_initialSyncState - In the implementation block
@property (assign,nonatomic) unsigned syncSwitchIndex;                         //@synthesize syncSwitchIndex=_syncSwitchIndex - In the implementation block
@property (assign,nonatomic) unsigned migrationIndex;                          //@synthesize migrationIndex=_migrationIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletedInitialSync; 
@property (nonatomic,readonly) BOOL hasCompletedSync; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCompletedInitialOrMigrationSync;
-(BOOL)hasCompletedSync;
-(id)initWithPairingID:(id)arg1 syncState:(unsigned long long)arg2 ;
-(BOOL)hasCompletedInitialSync;
-(void)setPairingID:(NSUUID *)arg1 ;
-(unsigned long long)initialSyncState;
-(void)setInitialSyncState:(unsigned long long)arg1 ;
-(unsigned)syncSwitchIndex;
-(void)setSyncSwitchIndex:(unsigned)arg1 ;
-(unsigned)migrationIndex;
-(void)setMigrationIndex:(unsigned)arg1 ;
-(NSUUID *)pairingID;
@end

