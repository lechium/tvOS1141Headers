/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationRecorder <NSObject>
@required
-(void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
-(void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
-(void)recordLocationUpdateResume;
-(void)recordLocationUpdatePause;
-(void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4;
-(void)recordError:(id)arg1;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
-(void)recordInitialCourse:(double)arg1;

@end
