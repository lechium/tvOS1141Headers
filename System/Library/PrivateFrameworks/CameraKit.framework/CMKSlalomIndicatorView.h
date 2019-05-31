/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CMKSlalomIndicatorView : UIView {

	long long _framesPerSecond;
	UILabel* __framerateLabel;

}

@property (nonatomic,readonly) UILabel * _framerateLabel;              //@synthesize _framerateLabel=__framerateLabel - In the implementation block
@property (assign,nonatomic) long long framesPerSecond;                //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_commonCMKSlalomIndicatorViewInitialization;
-(void)_updateFramerateLabel;
-(void)setFramesPerSecond:(long long)arg1 ;
-(long long)framesPerSecond;
-(UILabel *)_framerateLabel;
@end
