/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, TVCKBadgeView;

@interface TVCKBadgeOverlayView : UIView {

	NSString* _badgeValue;
	double _maximumBadgeWidth;
	TVCKBadgeView* _badgeView;

}

@property (nonatomic,retain) TVCKBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,copy) NSString * badgeValue;                    //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) double maximumBadgeWidth;               //@synthesize maximumBadgeWidth=_maximumBadgeWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(TVCKBadgeView *)badgeView;
-(void)setBadgeView:(TVCKBadgeView *)arg1 ;
-(double)maximumBadgeWidth;
-(void)setMaximumBadgeWidth:(double)arg1 ;
@end

