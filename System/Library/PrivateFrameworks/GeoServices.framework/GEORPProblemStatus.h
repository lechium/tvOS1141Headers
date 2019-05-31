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

@class GEORPDetails, GEORPNotification, NSString, GEORPResolution;

@interface GEORPProblemStatus : PBCodable <NSCopying> {

	double _creationDate;
	GEORPDetails* _details;
	GEORPNotification* _notification;
	NSString* _problemId;
	GEORPResolution* _problemResolution;
	int _problemState;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId;                             //@synthesize problemId=_problemId - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasProblemState; 
@property (assign,nonatomic) int problemState;                                 //@synthesize problemState=_problemState - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemResolution; 
@property (nonatomic,retain) GEORPResolution * problemResolution;              //@synthesize problemResolution=_problemResolution - In the implementation block
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) GEORPNotification * notification;                 //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) BOOL hasDetails; 
@property (nonatomic,retain) GEORPDetails * details;                           //@synthesize details=_details - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(double)creationDate;
-(NSString *)problemId;
-(BOOL)hasProblemId;
-(void)setProblemId:(NSString *)arg1 ;
-(int)problemState;
-(void)setProblemState:(int)arg1 ;
-(void)setHasProblemState:(BOOL)arg1 ;
-(BOOL)hasProblemState;
-(id)problemStateAsString:(int)arg1 ;
-(int)StringAsProblemState:(id)arg1 ;
-(BOOL)hasProblemResolution;
-(BOOL)hasNotification;
-(BOOL)hasDetails;
-(GEORPResolution *)problemResolution;
-(void)setProblemResolution:(GEORPResolution *)arg1 ;
-(void)setNotification:(GEORPNotification *)arg1 ;
-(GEORPDetails *)details;
-(void)setDetails:(GEORPDetails *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEORPNotification *)notification;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

