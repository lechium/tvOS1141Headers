/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSBundle, NSString, CLLocation;


@protocol MKLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL shouldShiftIfNecessary; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@optional
-(CLLocation *)lastLocation;

@required
-(id<MKLocationProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)activityType;
-(NSBundle *)effectiveBundle;
-(void)setActivityType:(long long)arg1;
-(int)authorizationStatus;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setHeadingOrientation:(int)arg1;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)authorizationStatusOnQueue:(id)arg1 result:(/*^block*/id)arg2;
-(void)dismissHeadingCalibrationDisplay;
-(void)setEffectiveBundle:(id)arg1;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(double)desiredAccuracy;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(double)distanceFilter;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1;
-(int)headingOrientation;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(/*^block*/id)arg1;
-(double)expectedGpsUpdateInterval;
-(BOOL)usesCLMapCorrection;
-(BOOL)shouldShiftIfNecessary;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)setDistanceFilter:(double)arg1;
-(void)setDesiredAccuracy:(double)arg1;
-(void)stopUpdatingLocation;
-(void)requestWhenInUseAuthorization;
-(void)startUpdatingLocation;

@end
