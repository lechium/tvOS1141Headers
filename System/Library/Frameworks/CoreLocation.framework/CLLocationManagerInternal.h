/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationManagerStateTracker, NSString, NSMutableSet;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	id<CLLocationManagerDelegate> fDelegate;
	CLLocationManagerStateTracker* fState;
	SCD_Struct_CL3 fLocation;
	NSString* fLocationEventType;
	CFRunLoopTimerRef fLocationRequestTimer;
	double fLocationRequestTimeout;
	CFRunLoopTimerRef fRangingRequestTimer;
	double fRangingRequestTimeout;
	int fHeadingOrientation;
	NSMutableSet* fRangedRegions;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 ;
-(int)PausesLocationUpdatesAutomatically;
-(void)stopUpdatingLocationAutoPaused;
-(void)cancelLocationRequest;
-(void)cancelRangingRequest;
-(void)performCourtesyPromptIfNeeded;
-(NSMutableSet *)rangedRegions;
-(void)dealloc;
@end

