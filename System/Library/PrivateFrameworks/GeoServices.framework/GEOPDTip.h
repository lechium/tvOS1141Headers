/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString, GEOPDUser;

@interface GEOPDTip : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _tipTime;
	NSMutableArray* _snippets;
	NSString* _tipId;
	GEOPDUser* _tipster;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * snippets;                      //@synthesize snippets=_snippets - In the implementation block
@property (assign,nonatomic) BOOL hasTipTime; 
@property (assign,nonatomic) double tipTime;                                 //@synthesize tipTime=_tipTime - In the implementation block
@property (nonatomic,readonly) BOOL hasTipster; 
@property (nonatomic,retain) GEOPDUser * tipster;                            //@synthesize tipster=_tipster - In the implementation block
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,retain) NSString * tipId;                               //@synthesize tipId=_tipId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)tipsForPlaceData:(id)arg1 ;
+(Class)snippetType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasTipTime;
-(double)tipTime;
-(BOOL)hasTipId;
-(NSString *)tipId;
-(GEOPDUser *)tipster;
-(NSMutableArray *)snippets;
-(void)clearSnippets;
-(void)addSnippet:(id)arg1 ;
-(unsigned long long)snippetsCount;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(void)setTipTime:(double)arg1 ;
-(void)setHasTipTime:(BOOL)arg1 ;
-(BOOL)hasTipster;
-(void)setTipster:(GEOPDUser *)arg1 ;
-(void)setTipId:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

