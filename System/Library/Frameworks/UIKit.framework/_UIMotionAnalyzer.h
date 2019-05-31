/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

@interface _UIMotionAnalyzer : NSObject {

	_UIMotionAnalyzerSettings* _settings;
	_UIViewerRelativeDevicePose* _viewerRelativeDevicePose;

}

@property (nonatomic,readonly) _UIMotionAnalyzerSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) _UIViewerRelativeDevicePose * viewerRelativeDevicePose;              //@synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose - In the implementation block
-(id)init;
-(id)description;
-(_UIMotionAnalyzerSettings *)settings;
-(void)reset;
-(id)initWithSettings:(id)arg1 ;
-(_UIViewerRelativeDevicePose *)viewerRelativeDevicePose;
-(void)updateWithEvent:(id)arg1 ;
-(BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5 ;
-(void)updateHistory;
-(void)resetHysteresis;
@end
