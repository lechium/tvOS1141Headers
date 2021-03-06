/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOUserSessionEntity, NSLock, NSData, GEOUserSessionSnapshot;

@interface GEOUserSession : NSObject {

	GEOSessionID _sessionID;
	double _sessionCreationTime;
	unsigned _sequenceNumber;
	GEOSessionID _usageCollectionSessionID;
	double _usageSessionIDGenerationTime;
	BOOL _shareSessionWithMaps;
	GEOUserSessionEntity* _mapsUserSessionEntity;
	BOOL _zeroSessionIDMode;
	GEOSessionID _cohortSessionID;
	double _cohortSessionStartTime;
	NSLock* _lock;
	NSData* _navigationDirectionsID;
	GEOSessionID _navigationSessionID;
	double _navigationSessionStartTime;
	NSData* _previousNavigationDirectionsID;
	GEOSessionID _previousNavigationSessionID;
	double _previousNavigationSessionStartTime;
	double _previousNavigationSessionEndTime;
	GEOSessionID _zeroSessionID;

}

@property (assign) BOOL shareSessionWithMaps;                                           //@synthesize shareSessionWithMaps=_shareSessionWithMaps - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * mapsUserSessionEntity;              //@synthesize mapsUserSessionEntity=_mapsUserSessionEntity - In the implementation block
@property (readonly) GEOSessionID usageCollectionSessionID; 
@property (assign) BOOL zeroSessionIDMode;                                              //@synthesize zeroSessionIDMode=_zeroSessionIDMode - In the implementation block
@property (readonly) GEOUserSessionEntity * longSessionEntity; 
@property (readonly) GEOUserSessionEntity * navSessionEntity; 
@property (readonly) GEOUserSessionEntity * cohortSessionEntity; 
@property (readonly) GEOUserSessionSnapshot * userSessionSnapshot; 
+(BOOL)isGeod;
+(void)setIsGeod;
+(id)sharedInstance;
-(GEOUserSessionEntity *)navSessionEntity;
-(GEOUserSessionEntity *)mapsUserSessionEntity;
-(GEOUserSessionSnapshot *)userSessionSnapshot;
-(GEOUserSessionEntity *)longSessionEntity;
-(GEOUserSessionEntity *)cohortSessionEntity;
-(double)_getCFAbsoluteCurrentTime;
-(void)_setDefault:(id)arg1 forKey:(id)arg2 ;
-(id)_defaultForKey:(id)arg1 ;
-(void)_updateWithNewUUIDForSessionID:(GEOSessionID*)arg1 ;
-(void)_safe_renewUsageCollectionSessionID;
-(void)_renewCohortSessionID;
-(void)_safe_renewCohortSessionID;
-(void)_renewUsageCollectionSessionID;
-(void)_updateSessionID;
-(void)_resetSessionID;
-(void)_mapsSessionEntityWithCallback:(/*^block*/id)arg1 ;
-(void)mapsSessionEntityWithCallback:(/*^block*/id)arg1 shareSessionIDWithMaps:(BOOL)arg2 resetSession:(BOOL)arg3 ;
-(GEOSessionID)usageCollectionSessionID;
-(void)setMapsUserSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(BOOL)arg2 ;
-(unsigned)incrementSequenceNumber;
-(void)_generateNewNavSessionID;
-(void)_updateNavSessionID;
-(void)startNavigationSessionWithDirectionsID:(id)arg1 originalDirectionsID:(id)arg2 ;
-(void)endNavigationSession;
-(BOOL)shareSessionWithMaps;
-(void)setShareSessionWithMaps:(BOOL)arg1 ;
-(BOOL)zeroSessionIDMode;
-(void)setZeroSessionIDMode:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

