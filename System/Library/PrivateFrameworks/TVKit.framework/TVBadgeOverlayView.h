/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, TVBadgeView;

@interface TVBadgeOverlayView : UIView {

	NSString* _badgeValue;
	double _maximumBadgeWidth;
	TVBadgeView* _badgeView;

}

@property (nonatomic,retain) TVBadgeView * badgeView;               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,copy) NSString * badgeValue;                   //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) double maximumBadgeWidth;              //@synthesize maximumBadgeWidth=_maximumBadgeWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(TVBadgeView *)badgeView;
-(void)setBadgeView:(TVBadgeView *)arg1 ;
-(double)maximumBadgeWidth;
-(void)setMaximumBadgeWidth:(double)arg1 ;
@end

