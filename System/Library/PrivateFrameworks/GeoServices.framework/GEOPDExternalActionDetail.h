/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDExternalActionDetail : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _actionLabel;
	NSString* _actionUrlComponent;
	NSString* _actionUrlVerb;
	NSString* _logoId;

}

@property (nonatomic,readonly) BOOL hasActionLabel; 
@property (nonatomic,retain) NSString * actionLabel;                         //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasLogoId; 
@property (nonatomic,retain) NSString * logoId;                              //@synthesize logoId=_logoId - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent;                  //@synthesize actionUrlComponent=_actionUrlComponent - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUrlVerb; 
@property (nonatomic,retain) NSString * actionUrlVerb;                       //@synthesize actionUrlVerb=_actionUrlVerb - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasActionUrlComponent;
-(NSString *)actionUrlComponent;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(BOOL)hasActionLabel;
-(BOOL)hasLogoId;
-(BOOL)hasActionUrlVerb;
-(NSString *)actionLabel;
-(void)setActionLabel:(NSString *)arg1 ;
-(NSString *)logoId;
-(void)setLogoId:(NSString *)arg1 ;
-(NSString *)actionUrlVerb;
-(void)setActionUrlVerb:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
