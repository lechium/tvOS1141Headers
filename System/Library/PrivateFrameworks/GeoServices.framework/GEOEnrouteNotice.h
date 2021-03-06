/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOEnrouteNotice : PBCodable <NSCopying> {

	NSMutableArray* _guidances;
	unsigned _highlightDistance;
	unsigned _objectGroupId;
	NSString* _objectIdentifier;
	int _type;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectIdentifier; 
@property (nonatomic,retain) NSString * objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * guidances;               //@synthesize guidances=_guidances - In the implementation block
@property (assign,nonatomic) BOOL hasHighlightDistance; 
@property (assign,nonatomic) unsigned highlightDistance;               //@synthesize highlightDistance=_highlightDistance - In the implementation block
@property (assign,nonatomic) BOOL hasObjectGroupId; 
@property (assign,nonatomic) unsigned objectGroupId;                   //@synthesize objectGroupId=_objectGroupId - In the implementation block
+(Class)guidanceType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(unsigned)objectGroupId;
-(BOOL)hasObjectGroupId;
-(NSString *)objectIdentifier;
-(BOOL)hasObjectIdentifier;
-(NSMutableArray *)guidances;
-(void)clearGuidances;
-(void)addGuidance:(id)arg1 ;
-(unsigned long long)guidancesCount;
-(id)guidanceAtIndex:(unsigned long long)arg1 ;
-(void)setHighlightDistance:(unsigned)arg1 ;
-(void)setHasHighlightDistance:(BOOL)arg1 ;
-(void)setObjectGroupId:(unsigned)arg1 ;
-(void)setHasObjectGroupId:(BOOL)arg1 ;
-(void)setObjectIdentifier:(NSString *)arg1 ;
-(void)setGuidances:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

