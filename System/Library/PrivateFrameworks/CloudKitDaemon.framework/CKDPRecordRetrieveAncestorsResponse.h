/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecord;

@interface CKDPRecordRetrieveAncestorsResponse : PBCodable <NSCopying> {

	NSMutableArray* _ancestors;
	CKDPRecord* _shareRecord;

}

@property (nonatomic,retain) NSMutableArray * ancestors;              //@synthesize ancestors=_ancestors - In the implementation block
@property (nonatomic,readonly) BOOL hasShareRecord; 
@property (nonatomic,retain) CKDPRecord * shareRecord;                //@synthesize shareRecord=_shareRecord - In the implementation block
+(Class)ancestorType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setShareRecord:(CKDPRecord *)arg1 ;
-(BOOL)hasShareRecord;
-(CKDPRecord *)shareRecord;
-(void)addAncestor:(id)arg1 ;
-(unsigned long long)ancestorsCount;
-(void)clearAncestors;
-(id)ancestorAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)ancestors;
-(void)setAncestors:(NSMutableArray *)arg1 ;
@end
