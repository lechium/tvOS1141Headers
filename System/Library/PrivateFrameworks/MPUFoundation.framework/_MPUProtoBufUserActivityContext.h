/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MPUProtoBufUserActivityContext : PBCodable <NSCopying> {

	NSMutableArray* _containerItems;
	int _originatorType;
	int _originatorVersion;
	SCD_Struct_MP1 _has;

}

@property (nonatomic,retain) NSMutableArray * containerItems;              //@synthesize containerItems=_containerItems - In the implementation block
@property (assign,nonatomic) BOOL hasOriginatorType; 
@property (assign,nonatomic) int originatorType;                           //@synthesize originatorType=_originatorType - In the implementation block
@property (assign,nonatomic) BOOL hasOriginatorVersion; 
@property (assign,nonatomic) int originatorVersion;                        //@synthesize originatorVersion=_originatorVersion - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addContainerItems:(id)arg1 ;
-(unsigned long long)containerItemsCount;
-(void)clearContainerItems;
-(id)containerItemsAtIndex:(unsigned long long)arg1 ;
-(void)setOriginatorType:(int)arg1 ;
-(void)setHasOriginatorType:(BOOL)arg1 ;
-(BOOL)hasOriginatorType;
-(void)setOriginatorVersion:(int)arg1 ;
-(void)setHasOriginatorVersion:(BOOL)arg1 ;
-(BOOL)hasOriginatorVersion;
-(NSMutableArray *)containerItems;
-(void)setContainerItems:(NSMutableArray *)arg1 ;
-(int)originatorType;
-(int)originatorVersion;
@end

