/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface LOGMSGEVENTBookedTable : PBCodable <NSCopying> {

	unsigned long long _muid;
	NSString* _appId;
	BOOL _bookedUsingMaps;
	BOOL _called;
	BOOL _cancelled;
	BOOL _isAsync;
	BOOL _routed;
	BOOL _shared;
	BOOL _tappedCancelReservation;
	BOOL _tappedChangeReservation;
	BOOL _tappedProactiveTrayItem;
	BOOL _viewedDetailsFromPlacecard;
	BOOL _viewedInPlacecard;
	BOOL _viewedInProactiveTray;
	SCD_Struct_LO96 _has;

}

@property (assign,nonatomic) BOOL hasBookedUsingMaps; 
@property (assign,nonatomic) BOOL bookedUsingMaps;                            //@synthesize bookedUsingMaps=_bookedUsingMaps - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL hasViewedInProactiveTray; 
@property (assign,nonatomic) BOOL viewedInProactiveTray;                      //@synthesize viewedInProactiveTray=_viewedInProactiveTray - In the implementation block
@property (assign,nonatomic) BOOL hasTappedProactiveTrayItem; 
@property (assign,nonatomic) BOOL tappedProactiveTrayItem;                    //@synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem - In the implementation block
@property (assign,nonatomic) BOOL hasViewedInPlacecard; 
@property (assign,nonatomic) BOOL viewedInPlacecard;                          //@synthesize viewedInPlacecard=_viewedInPlacecard - In the implementation block
@property (assign,nonatomic) BOOL hasViewedDetailsFromPlacecard; 
@property (assign,nonatomic) BOOL viewedDetailsFromPlacecard;                 //@synthesize viewedDetailsFromPlacecard=_viewedDetailsFromPlacecard - In the implementation block
@property (assign,nonatomic) BOOL hasIsAsync; 
@property (assign,nonatomic) BOOL isAsync;                                    //@synthesize isAsync=_isAsync - In the implementation block
@property (nonatomic,readonly) BOOL hasAppId; 
@property (nonatomic,retain) NSString * appId;                                //@synthesize appId=_appId - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                         //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasCalled; 
@property (assign,nonatomic) BOOL called;                                     //@synthesize called=_called - In the implementation block
@property (assign,nonatomic) BOOL hasRouted; 
@property (assign,nonatomic) BOOL routed;                                     //@synthesize routed=_routed - In the implementation block
@property (assign,nonatomic) BOOL hasTappedChangeReservation; 
@property (assign,nonatomic) BOOL tappedChangeReservation;                    //@synthesize tappedChangeReservation=_tappedChangeReservation - In the implementation block
@property (assign,nonatomic) BOOL hasTappedCancelReservation; 
@property (assign,nonatomic) BOOL tappedCancelReservation;                    //@synthesize tappedCancelReservation=_tappedCancelReservation - In the implementation block
@property (assign,nonatomic) BOOL hasShared; 
@property (assign,nonatomic) BOOL shared;                                     //@synthesize shared=_shared - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBookedUsingMaps:(BOOL)arg1 ;
-(void)setHasBookedUsingMaps:(BOOL)arg1 ;
-(BOOL)hasBookedUsingMaps;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(void)setViewedInProactiveTray:(BOOL)arg1 ;
-(void)setHasViewedInProactiveTray:(BOOL)arg1 ;
-(BOOL)hasViewedInProactiveTray;
-(void)setTappedProactiveTrayItem:(BOOL)arg1 ;
-(void)setHasTappedProactiveTrayItem:(BOOL)arg1 ;
-(BOOL)hasTappedProactiveTrayItem;
-(BOOL)bookedUsingMaps;
-(BOOL)viewedInProactiveTray;
-(BOOL)tappedProactiveTrayItem;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(void)setTappedCancelReservation:(BOOL)arg1 ;
-(void)setTappedChangeReservation:(BOOL)arg1 ;
-(void)setRouted:(BOOL)arg1 ;
-(void)setAppId:(NSString *)arg1 ;
-(void)setIsAsync:(BOOL)arg1 ;
-(void)setViewedDetailsFromPlacecard:(BOOL)arg1 ;
-(void)setViewedInPlacecard:(BOOL)arg1 ;
-(void)setHasViewedInPlacecard:(BOOL)arg1 ;
-(BOOL)hasViewedInPlacecard;
-(void)setHasViewedDetailsFromPlacecard:(BOOL)arg1 ;
-(BOOL)hasViewedDetailsFromPlacecard;
-(void)setHasIsAsync:(BOOL)arg1 ;
-(BOOL)hasIsAsync;
-(BOOL)hasAppId;
-(void)setHasCalled:(BOOL)arg1 ;
-(BOOL)hasCalled;
-(void)setHasRouted:(BOOL)arg1 ;
-(BOOL)hasRouted;
-(void)setHasTappedChangeReservation:(BOOL)arg1 ;
-(BOOL)hasTappedChangeReservation;
-(void)setHasTappedCancelReservation:(BOOL)arg1 ;
-(BOOL)hasTappedCancelReservation;
-(void)setShared:(BOOL)arg1 ;
-(void)setHasShared:(BOOL)arg1 ;
-(BOOL)hasShared;
-(BOOL)viewedInPlacecard;
-(BOOL)viewedDetailsFromPlacecard;
-(BOOL)isAsync;
-(NSString *)appId;
-(BOOL)routed;
-(BOOL)tappedChangeReservation;
-(BOOL)tappedCancelReservation;
-(BOOL)shared;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)called;
-(void)setCalled:(BOOL)arg1 ;
@end

