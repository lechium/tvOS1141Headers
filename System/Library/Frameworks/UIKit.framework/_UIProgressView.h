/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UICircleProgressView, NSProgress;

@interface _UIProgressView : UIView {

	_UICircleProgressView* _progressView;
	NSProgress* _trackedProgress;

}

@property (nonatomic,retain) NSProgress * trackedProgress;              //@synthesize trackedProgress=_trackedProgress - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTrackedProgress:(NSProgress *)arg1 ;
-(void)_updateProgressValue;
-(NSProgress *)trackedProgress;
@end
