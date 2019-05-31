/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceStore : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _migratorDestroyedStoreReason;
	BOOL _migratorFailed;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMigratorFailed; 
@property (assign,nonatomic) BOOL migratorFailed;                               //@synthesize migratorFailed=_migratorFailed - In the implementation block
@property (assign,nonatomic) BOOL hasMigratorDestroyedStoreReason; 
@property (assign,nonatomic) int migratorDestroyedStoreReason;                  //@synthesize migratorDestroyedStoreReason=_migratorDestroyedStoreReason - In the implementation block
-(void)setMigratorFailed:(BOOL)arg1 ;
-(void)setHasMigratorFailed:(BOOL)arg1 ;
-(BOOL)hasMigratorFailed;
-(void)setMigratorDestroyedStoreReason:(int)arg1 ;
-(void)setHasMigratorDestroyedStoreReason:(BOOL)arg1 ;
-(BOOL)hasMigratorDestroyedStoreReason;
-(BOOL)migratorFailed;
-(int)migratorDestroyedStoreReason;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

