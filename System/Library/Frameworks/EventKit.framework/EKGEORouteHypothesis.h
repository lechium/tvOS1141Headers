/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol EKGEORouteHypothesis <NSObject>
@property (assign,nonatomic) int transportType; 
@property (nonatomic,retain) NSDate * conservativeDepartureDate; 
@property (assign,nonatomic) double conservativeTravelTime; 
@property (nonatomic,retain) NSDate * suggestedDepartureDate; 
@property (assign,nonatomic) double estimatedTravelTime; 
@property (nonatomic,retain) NSDate * aggressiveDepartureDate; 
@property (assign,nonatomic) double aggressiveTravelTime; 
@property (nonatomic,retain) NSString * routeName; 
@property (assign,nonatomic) BOOL supportsLiveTraffic; 
@property (assign,nonatomic) unsigned long long currentTrafficDensity; 
@property (nonatomic,retain) NSString * trafficDensityDescription; 
@property (assign,nonatomic) long long travelState; 
@required
-(int)transportType;
-(void)setTransportType:(int)arg1;
-(NSDate *)suggestedDepartureDate;
-(unsigned long long)currentTrafficDensity;
-(long long)travelState;
-(BOOL)supportsLiveTraffic;
-(NSString *)routeName;
-(NSDate *)conservativeDepartureDate;
-(void)setRouteName:(id)arg1;
-(NSDate *)aggressiveDepartureDate;
-(double)estimatedTravelTime;
-(void)setSupportsLiveTraffic:(BOOL)arg1;
-(double)aggressiveTravelTime;
-(NSString *)trafficDensityDescription;
-(double)conservativeTravelTime;
-(void)setTravelState:(long long)arg1;
-(void)setConservativeDepartureDate:(id)arg1;
-(void)setConservativeTravelTime:(double)arg1;
-(void)setSuggestedDepartureDate:(id)arg1;
-(void)setEstimatedTravelTime:(double)arg1;
-(void)setAggressiveDepartureDate:(id)arg1;
-(void)setAggressiveTravelTime:(double)arg1;
-(void)setCurrentTrafficDensity:(unsigned long long)arg1;
-(void)setTrafficDensityDescription:(id)arg1;

@end

