/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields, GEOPBTransitIcon, GEOPBTransitShield;

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _accessibilityString;
	int _artworkType;
	int _artworkUse;
	int _badge;
	GEOPBTransitIcon* _icon;
	GEOPBTransitShield* _iconFallbackShield;
	GEOPBTransitShield* _shield;
	SCD_Struct_GE22 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long artworkSourceType; 
@property (nonatomic,readonly) long long artworkUseType; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; 
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge; 
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (assign,nonatomic) BOOL hasArtworkType; 
@property (assign,nonatomic) int artworkType;                                                            //@synthesize artworkType=_artworkType - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkUse; 
@property (assign,nonatomic) int artworkUse;                                                             //@synthesize artworkUse=_artworkUse - In the implementation block
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) GEOPBTransitShield * shield;                                                //@synthesize shield=_shield - In the implementation block
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) GEOPBTransitIcon * icon;                                                    //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL hasIconFallbackShield; 
@property (nonatomic,retain) GEOPBTransitShield * iconFallbackShield;                                    //@synthesize iconFallbackShield=_iconFallbackShield - In the implementation block
@property (assign,nonatomic) BOOL hasBadge; 
@property (assign,nonatomic) int badge;                                                                  //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessibilityString; 
@property (nonatomic,retain) NSString * accessibilityString;                                             //@synthesize accessibilityString=_accessibilityString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)artworkType;
-(void)setArtworkType:(int)arg1 ;
-(void)setHasArtworkType:(BOOL)arg1 ;
-(BOOL)hasArtworkType;
-(id)artworkTypeAsString:(int)arg1 ;
-(int)StringAsArtworkType:(id)arg1 ;
-(int)artworkUse;
-(void)setArtworkUse:(int)arg1 ;
-(void)setHasArtworkUse:(BOOL)arg1 ;
-(BOOL)hasArtworkUse;
-(id)artworkUseAsString:(int)arg1 ;
-(int)StringAsArtworkUse:(id)arg1 ;
-(BOOL)hasShield;
-(BOOL)hasIcon;
-(BOOL)hasIconFallbackShield;
-(id)badgeAsString:(int)arg1 ;
-(int)StringAsBadge:(id)arg1 ;
-(BOOL)hasAccessibilityString;
-(GEOPBTransitShield *)shield;
-(void)setShield:(GEOPBTransitShield *)arg1 ;
-(GEOPBTransitShield *)iconFallbackShield;
-(void)setIconFallbackShield:(GEOPBTransitShield *)arg1 ;
-(NSString *)accessibilityString;
-(void)setAccessibilityString:(NSString *)arg1 ;
-(long long)artworkSourceType;
-(long long)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIcon:(GEOPBTransitIcon *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBadge:(int)arg1 ;
-(int)badge;
-(BOOL)hasBadge;
-(void)setHasBadge:(BOOL)arg1 ;
-(GEOPBTransitIcon *)icon;
@end

