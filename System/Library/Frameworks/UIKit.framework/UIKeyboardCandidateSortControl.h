/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UISegmentedControl, UIKBThemedView;

@interface UIKeyboardCandidateSortControl : UIView {

	int _candidatesVisualStyle;
	BOOL _legacyAlertAppearance;
	UISegmentedControl* _segmentedControl;
	UIKBThemedView* _themedView;
	UIEdgeInsets _additionalInsets;

}

@property (nonatomic,retain) UIKBThemedView * themedView;                //@synthesize themedView=_themedView - In the implementation block
@property (readonly) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (readonly) BOOL shouldShowTitles; 
@property (assign,nonatomic) UIEdgeInsets additionalInsets;              //@synthesize additionalInsets=_additionalInsets - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)layoutSubviews;
-(UISegmentedControl *)segmentedControl;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(UIKBThemedView *)themedView;
-(id)initWithFrame:(CGRect)arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(BOOL)arg3 ;
-(void)setSortControlTitles:(id)arg1 ;
-(void)selectPreviousSegment;
-(void)selectNextSegment;
-(BOOL)shouldShowTitles;
-(void)updateTitleTextAttributes;
-(void)addSegmentedControlWithFrame:(CGRect)arg1 ;
-(BOOL)needsToUpdateSortControlForTitles:(id)arg1 ;
-(void)setAdditionalPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)additionalInsets;
-(void)setAdditionalInsets:(UIEdgeInsets)arg1 ;
@end
