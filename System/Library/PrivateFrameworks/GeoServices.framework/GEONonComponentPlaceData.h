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

@class PBUnknownFields, GEOPDMapsIdentifier;

@interface GEONonComponentPlaceData : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	unsigned long long _preferredMuid;
	GEOPDMapsIdentifier* _mapsId;
	int _resultProviderId;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                        //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredMuid; 
@property (assign,nonatomic) unsigned long long preferredMuid;               //@synthesize preferredMuid=_preferredMuid - In the implementation block
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                           //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId;                   //@synthesize mapsId=_mapsId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)placeWithoutNonComponentForPDPlace:(id)arg1 ;
+(id)placeWithNonComponentForPDPlace:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(BOOL)hasMapsId;
-(GEOPDMapsIdentifier *)mapsId;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(int)resultProviderId;
-(unsigned long long)preferredMuid;
-(BOOL)hasPreferredMuid;
-(void)setPreferredMuid:(unsigned long long)arg1 ;
-(void)setHasPreferredMuid:(BOOL)arg1 ;
-(id)initWithPDPlace:(id)arg1 ;
-(void)_populatePDPlace:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

