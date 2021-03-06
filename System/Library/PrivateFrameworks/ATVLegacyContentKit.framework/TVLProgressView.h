/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UIImage, UIImageView, TVLProgressBarElement;

@interface TVLProgressView : UIView <ATVUpdatable> {

	UIImage* _leftOnImage;
	UIImage* _leftOffImage;
	UIImage* _centerOnImage;
	UIImage* _centerOffImage;
	UIImage* _rightOnImage;
	UIImage* _rightOffImage;
	UIImageView* _leftEndImageView;
	UIImageView* _leftCenterImageView;
	UIImageView* _rightCenterImageView;
	UIImageView* _rightEndImageView;
	TVLProgressBarElement* _feedElement;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(id)initWithProgressBarElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
@end

