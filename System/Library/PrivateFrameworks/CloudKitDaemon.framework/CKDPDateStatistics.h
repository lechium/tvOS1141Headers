/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate;

@interface CKDPDateStatistics : PBCodable <NSCopying> {

	CKDPDate* _creation;
	CKDPDate* _modification;

}

@property (nonatomic,readonly) BOOL hasCreation; 
@property (nonatomic,retain) CKDPDate * creation;                  //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) BOOL hasModification; 
@property (nonatomic,retain) CKDPDate * modification;              //@synthesize modification=_modification - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setModification:(CKDPDate *)arg1 ;
-(BOOL)hasCreation;
-(BOOL)hasModification;
-(CKDPDate *)modification;
-(void)setCreation:(CKDPDate *)arg1 ;
-(CKDPDate *)creation;
@end

