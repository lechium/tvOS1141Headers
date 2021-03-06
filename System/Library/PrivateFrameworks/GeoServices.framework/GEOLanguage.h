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

@class PBUnknownFields, NSMutableArray;

@interface GEOLanguage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _identifier;
	NSMutableArray* _languages;

}

@property (assign,nonatomic) unsigned identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * languages;                     //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)languageType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)languages;
-(void)clearLanguages;
-(void)addLanguage:(id)arg1 ;
-(unsigned long long)languagesCount;
-(id)languageAtIndex:(unsigned long long)arg1 ;
-(void)setLanguages:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
@end

