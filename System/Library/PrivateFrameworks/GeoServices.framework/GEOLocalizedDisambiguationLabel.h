/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOLocalizedDisambiguationLabel : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _locale;
	NSString* _string;

}

@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasString; 
@property (nonatomic,retain) NSString * string;                              //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLocale;
-(BOOL)hasString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)locale;
@end

