/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOPDFlyover, GEOMapRegion;

@interface GEOAnnouncement : PBCodable <NSCopying> {

	unsigned _announcementID;
	int _announcementType;
	NSString* _buttonOneAppURI;
	NSString* _buttonOneMessage;
	NSString* _buttonTwoAppURI;
	NSString* _buttonTwoMessage;
	unsigned _displayDestinations;
	GEOPDFlyover* _flyoverInfo;
	GEOMapRegion* _mapRegion;
	int _releasePhase;
	NSString* _title;
	NSString* _userMessage;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) BOOL hasAnnouncementID; 
@property (assign,nonatomic) unsigned announcementID;                   //@synthesize announcementID=_announcementID - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                  //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasUserMessage; 
@property (nonatomic,retain) NSString * userMessage;                    //@synthesize userMessage=_userMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasButtonOneMessage; 
@property (nonatomic,retain) NSString * buttonOneMessage;               //@synthesize buttonOneMessage=_buttonOneMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasButtonOneAppURI; 
@property (nonatomic,retain) NSString * buttonOneAppURI;                //@synthesize buttonOneAppURI=_buttonOneAppURI - In the implementation block
@property (nonatomic,readonly) BOOL hasButtonTwoMessage; 
@property (nonatomic,retain) NSString * buttonTwoMessage;               //@synthesize buttonTwoMessage=_buttonTwoMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasButtonTwoAppURI; 
@property (nonatomic,retain) NSString * buttonTwoAppURI;                //@synthesize buttonTwoAppURI=_buttonTwoAppURI - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayDestinations; 
@property (assign,nonatomic) unsigned displayDestinations;              //@synthesize displayDestinations=_displayDestinations - In the implementation block
@property (assign,nonatomic) BOOL hasReleasePhase; 
@property (assign,nonatomic) int releasePhase;                          //@synthesize releasePhase=_releasePhase - In the implementation block
@property (nonatomic,readonly) BOOL hasFlyoverInfo; 
@property (nonatomic,retain) GEOPDFlyover * flyoverInfo;                //@synthesize flyoverInfo=_flyoverInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hasAnnouncementType; 
@property (assign,nonatomic) int announcementType;                      //@synthesize announcementType=_announcementType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(int)announcementType;
-(void)setAnnouncementID:(unsigned)arg1 ;
-(void)setHasAnnouncementID:(BOOL)arg1 ;
-(BOOL)hasAnnouncementID;
-(BOOL)hasUserMessage;
-(BOOL)hasButtonOneMessage;
-(BOOL)hasButtonOneAppURI;
-(BOOL)hasButtonTwoMessage;
-(BOOL)hasButtonTwoAppURI;
-(void)setDisplayDestinations:(unsigned)arg1 ;
-(void)setHasDisplayDestinations:(BOOL)arg1 ;
-(BOOL)hasDisplayDestinations;
-(int)releasePhase;
-(void)setReleasePhase:(int)arg1 ;
-(void)setHasReleasePhase:(BOOL)arg1 ;
-(BOOL)hasReleasePhase;
-(id)releasePhaseAsString:(int)arg1 ;
-(int)StringAsReleasePhase:(id)arg1 ;
-(BOOL)hasFlyoverInfo;
-(void)setAnnouncementType:(int)arg1 ;
-(void)setHasAnnouncementType:(BOOL)arg1 ;
-(BOOL)hasAnnouncementType;
-(id)announcementTypeAsString:(int)arg1 ;
-(int)StringAsAnnouncementType:(id)arg1 ;
-(unsigned)announcementID;
-(NSString *)userMessage;
-(void)setUserMessage:(NSString *)arg1 ;
-(NSString *)buttonOneMessage;
-(void)setButtonOneMessage:(NSString *)arg1 ;
-(NSString *)buttonOneAppURI;
-(void)setButtonOneAppURI:(NSString *)arg1 ;
-(NSString *)buttonTwoMessage;
-(void)setButtonTwoMessage:(NSString *)arg1 ;
-(NSString *)buttonTwoAppURI;
-(void)setButtonTwoAppURI:(NSString *)arg1 ;
-(unsigned)displayDestinations;
-(GEOPDFlyover *)flyoverInfo;
-(void)setFlyoverInfo:(GEOPDFlyover *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
@end

