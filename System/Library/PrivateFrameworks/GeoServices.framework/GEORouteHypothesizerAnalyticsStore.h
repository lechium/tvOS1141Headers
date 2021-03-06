/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding> {

	double _observedEarlyDeltaFromRequiredTimeToLeave;
	double _observedLateDeltaFromRequiredTimeToLeave;
	unsigned long long _hypothesizerRerouteCount;
	unsigned long long _etaUpdatesAfterEventStart;
	BOOL _etaUpdatesWereReported;
	unsigned long long _hypothesisCount;
	BOOL _stopped;
	unsigned long long _uiNotificationType;
	NSDate* _lastGenerationDate;

}

@property (assign,nonatomic) unsigned long long etaUpdatesAfterEventStart;              //@synthesize etaUpdatesAfterEventStart=_etaUpdatesAfterEventStart - In the implementation block
@property (assign,nonatomic) BOOL etaUpdatesWereReported;                               //@synthesize etaUpdatesWereReported=_etaUpdatesWereReported - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)didStopMoving;
-(void)didStartMovingWithExpectedDepartureTime:(id)arg1 ;
-(void)didReroute;
-(void)didGenerateHypothesis;
-(void)didShowUI:(unsigned long long)arg1 ;
-(unsigned long long)etaUpdatesAfterEventStart;
-(void)setEtaUpdatesWereReported:(BOOL)arg1 ;
-(BOOL)etaUpdatesWereReported;
-(void)setEtaUpdatesAfterEventStart:(unsigned long long)arg1 ;
-(void)didArriveWithExpectedArrivalTime:(id)arg1 ;
-(void)didStopHypothesizing;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

