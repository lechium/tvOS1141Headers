/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDTextBlock : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _text;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)textBlockForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasText;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
@end

