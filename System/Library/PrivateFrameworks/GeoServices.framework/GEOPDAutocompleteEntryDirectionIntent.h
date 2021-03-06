/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDDirectionIntent;

@interface GEOPDAutocompleteEntryDirectionIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDDirectionIntent* _directionIntent;

}

@property (nonatomic,readonly) BOOL hasDirectionIntent; 
@property (nonatomic,retain) GEOPDDirectionIntent * directionIntent;              //@synthesize directionIntent=_directionIntent - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOPDDirectionIntent *)directionIntent;
-(BOOL)hasDirectionIntent;
-(void)setDirectionIntent:(GEOPDDirectionIntent *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

