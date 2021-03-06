/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDLocationEvent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _endTime;
	double _startTime;
	NSString* _subTitle;
	NSString* _title;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubTitle; 
@property (nonatomic,retain) NSString * subTitle;                            //@synthesize subTitle=_subTitle - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime;                                 //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasEndTime;
-(BOOL)hasSubTitle;
-(NSString *)subTitle;
-(void)setSubTitle:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(void)setStartTime:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
@end

