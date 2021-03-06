/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIIndexBarVisualStyle_Base.h>

@class NSArray, UIFont, UIColor;

@interface UIIndexBarVisualStyle_LegacyiOS : UIIndexBarVisualStyle_Base {

	NSArray* _titles;
	UIFont* _font;
	long long _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	double _topPadding;
	double _bottomPadding;
	double _verticalTextHeightEstimate;
	UIColor* _nonTrackingBackgroundColor;

}

@property (nonatomic,copy) UIColor * nonTrackingBackgroundColor;              //@synthesize nonTrackingBackgroundColor=_nonTrackingBackgroundColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canBecomeFocused;
-(id)initWithView:(id)arg1 ;
-(BOOL)overlay;
-(id)font;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(id)displayEntryFromEntry:(id)arg1 ;
-(double)minLineHeight;
-(void)displayEntriesUpdated;
-(void)sizeUpdated;
-(void)indexColorUpdated;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)nonTrackingBackgroundColor;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
@end

