/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIViewController;

@interface TVPMusicNowPlayingDismissOperation : NSOperation {

	BOOL _isAnimated;
	BOOL _isExecuting;
	BOOL _isFinished;
	UIViewController* _presentedViewController;

}

@property (nonatomic,readonly) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
-(UIViewController *)presentedViewController;
-(void)start;
-(void)_finish;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithPresentedViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

