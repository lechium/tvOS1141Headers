/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MSPMediaSyncHeader : PBCodable <NSCopying> {

	int _syncType;
	int _totalPackages;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) BOOL hasTotalPackages; 
@property (assign,nonatomic) int totalPackages;                  //@synthesize totalPackages=_totalPackages - In the implementation block
@property (assign,nonatomic) BOOL hasSyncType; 
@property (assign,nonatomic) int syncType;                       //@synthesize syncType=_syncType - In the implementation block
-(void)setSyncType:(int)arg1 ;
-(BOOL)hasSyncType;
-(int)syncType;
-(void)setHasSyncType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTotalPackages:(int)arg1 ;
-(void)setHasTotalPackages:(BOOL)arg1 ;
-(BOOL)hasTotalPackages;
-(id)syncTypeAsString:(int)arg1 ;
-(int)StringAsSyncType:(id)arg1 ;
-(int)totalPackages;
@end

