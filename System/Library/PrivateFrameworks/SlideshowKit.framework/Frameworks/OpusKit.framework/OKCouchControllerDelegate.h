/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class OKPageViewController;


@protocol OKCouchControllerDelegate <NSObject>
@property (readonly) OKPageViewController * currentPageViewController; 
@optional
-(BOOL)couchControllerCanStartPlayback:(id)arg1;
-(void)couchControllerWillStartPlayback:(id)arg1;
-(void)couchControllerDidStopPlayback:(id)arg1;
-(BOOL)thingsAreReadyInCurrentPageForCouchController:(id)arg1;
-(BOOL)couchController:(id)arg1 thingsAreReadyForNextStep:(id)arg2 withProgress:(double*)arg3;
-(void)couchControllerStartsWaitingForReadiness:(id)arg1;
-(void)couchControllerWaitingForReadiness:(id)arg1 withProgress:(double)arg2;
-(void)couchControllerStopsWaitingForReadiness:(id)arg1;
-(void)couchControllerPlaybackLooped:(id)arg1;
-(void)couchControllerPlaybackCompleted:(id)arg1;

@required
-(OKPageViewController *)currentPageViewController;

@end
