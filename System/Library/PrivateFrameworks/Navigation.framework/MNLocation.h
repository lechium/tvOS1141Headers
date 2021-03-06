/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <CoreLocation/CLLocation.h>

@class GEORouteMatch, GEORoadMatch, CLLocation, GEONavigationMatchInfo, NSString, NSDate;

@interface MNLocation : CLLocation {

	unsigned long long _state;
	GEORouteMatch* _routeMatch;
	GEORoadMatch* _roadMatch;
	CLLocation* _rawLocation;
	CLLocationCoordinate2D _rawShiftedCoordinate;
	GEONavigationMatchInfo* _detailedMatchInfo;
	NSString* _roadName;
	NSString* _shieldText;
	long long _shieldType;
	unsigned _roadLineType;
	unsigned long long _speedLimit;
	BOOL _speedLimitIsMPH;
	long long _speedLimitShieldType;
	BOOL _isDirectional;
	BOOL _locationUnreliable;
	NSDate* _expirationDate;
	NSDate* _originalDate;
	BOOL _isLeeched;
	int _rampType;

}

@property (nonatomic,readonly) int _nav_source; 
@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GEORoadMatch * roadMatch;                                 //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,retain) CLLocation * rawLocation;                                 //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                               //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEONavigationMatchInfo * detailedMatchInfo;               //@synthesize detailedMatchInfo=_detailedMatchInfo - In the implementation block
@property (nonatomic,retain) NSString * roadName;                                      //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,retain) NSString * shieldText;                                    //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) long long shieldType;                                     //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) unsigned roadLineType;                                    //@synthesize roadLineType=_roadLineType - In the implementation block
@property (assign,nonatomic) int rampType;                                             //@synthesize rampType=_rampType - In the implementation block
@property (assign,nonatomic) unsigned long long speedLimit;                            //@synthesize speedLimit=_speedLimit - In the implementation block
@property (assign,nonatomic) BOOL speedLimitIsMPH;                                     //@synthesize speedLimitIsMPH=_speedLimitIsMPH - In the implementation block
@property (assign,nonatomic) long long speedLimitShieldType;                           //@synthesize speedLimitShieldType=_speedLimitShieldType - In the implementation block
@property (assign,nonatomic) BOOL isDirectional;                                       //@synthesize isDirectional=_isDirectional - In the implementation block
@property (assign,nonatomic) BOOL locationUnreliable;                                  //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
@property (nonatomic,readonly) unsigned long long stepIndex; 
@property (nonatomic,readonly) BOOL isProjected; 
@property (nonatomic,retain) NSDate * expirationDate;                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * originalDate;                                    //@synthesize originalDate=_originalDate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D rawShiftedCoordinate;              //@synthesize rawShiftedCoordinate=_rawShiftedCoordinate - In the implementation block
@property (assign,nonatomic) BOOL isLeeched;                                           //@synthesize isLeeched=_isLeeched - In the implementation block
-(unsigned long long)speedLimit;
-(BOOL)speedLimitIsMPH;
-(int)rampType;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(unsigned long long)stepIndex;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(GEORoadMatch *)roadMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(GEORouteMatch *)routeMatch;
-(long long)shieldType;
-(void)setShieldType:(long long)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(void)setSpeedLimit:(unsigned long long)arg1 ;
-(id)initWithRawLocation:(id)arg1 ;
-(CLLocation *)rawLocation;
-(BOOL)locationUnreliable;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(NSDate *)originalDate;
-(CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
-(id)_navigation_detailedMatchInfo;
-(int)_nav_source;
-(void)setRoadLineType:(unsigned)arg1 ;
-(void)setSpeedLimitIsMPH:(BOOL)arg1 ;
-(void)setSpeedLimitShieldType:(long long)arg1 ;
-(unsigned)roadLineType;
-(long long)speedLimitShieldType;
-(id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3 ;
-(id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3 ;
-(id)initWithRawLocation:(id)arg1 useMatchLocation:(BOOL)arg2 ;
-(id)initWithLocationDetails:(id)arg1 route:(id)arg2 ;
-(id)initWithLocationDetails:(id)arg1 ;
-(id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(BOOL)arg2 ;
-(BOOL)isProjected;
-(void)setRawShiftedCoordinate:(CLLocationCoordinate2D)arg1 ;
-(SCD_Struct_MN5*)_roadFeature;
-(void)setRoadMatch:(GEORoadMatch *)arg1 ;
-(void)setRawLocation:(CLLocation *)arg1 ;
-(BOOL)isDirectional;
-(void)setIsDirectional:(BOOL)arg1 ;
-(CLLocationCoordinate2D)rawShiftedCoordinate;
-(BOOL)isLeeched;
-(void)setIsLeeched:(BOOL)arg1 ;
-(id)initWithGEOLocation:(id)arg1 ;
-(void)setRampType:(int)arg1 ;
-(id)_navigation_routeMatch;
-(BOOL)_navigation_hasValidCourse;
-(id)initWithClientLocation:(SCD_Struct_MN21)arg1 ;
-(id)matchInfo;
-(BOOL)_navigation_isStale;
@end

