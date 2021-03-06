/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {

	double _julianDay;
	CAARiseTransitSetDetails _riseTransitSet;
	NSDate* _sunrise;
	NSDate* _transit;
	NSDate* _sunset;
	unsigned long long _firstEventType;
	unsigned long long _lastEventType;

}

@property (nonatomic,readonly) double julianDay;                                     //@synthesize julianDay=_julianDay - In the implementation block
@property (nonatomic,readonly) CAARiseTransitSetDetails riseTransitSet;              //@synthesize riseTransitSet=_riseTransitSet - In the implementation block
@property (nonatomic,readonly) NSDate * sunrise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * sunset; 
@property (nonatomic,readonly) unsigned long long firstEventType; 
@property (nonatomic,readonly) unsigned long long lastEventType; 
@property (nonatomic,readonly) NSDate * firstEventDate; 
@property (nonatomic,readonly) NSDate * lastEventDate; 
-(NSDate *)transit;
-(id)initWithJulianEphemerisDay:(double)arg1 riseTransitSet:(CAARiseTransitSetDetails)arg2 ;
-(id)_dateFromOffset:(double)arg1 ofJulianEphemerisDay:(double)arg2 ;
-(NSDate *)sunrise;
-(NSDate *)sunset;
-(void)_calculateFirstAndLastEvents;
-(unsigned long long)firstEventType;
-(unsigned long long)lastEventType;
-(NSDate *)firstEventDate;
-(NSDate *)lastEventDate;
-(long long)compareToDate:(id)arg1 ;
-(BOOL)isCompatibleWith:(id)arg1 ;
-(double)julianDay;
-(CAARiseTransitSetDetails)riseTransitSet;
@end

