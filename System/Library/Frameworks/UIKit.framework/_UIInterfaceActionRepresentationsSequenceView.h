/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIInterfaceActionVisualStyle, NSArray, NSLayoutConstraint, _UIInterfaceActionSeparatableSequenceView;

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {

	long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
	UIInterfaceActionVisualStyle* _visualStyle;
	NSArray* _arrangedActionRepresentationViews;
	long long _actionLayoutAxis;
	unsigned long long _visualCornerPosition;
	NSLayoutConstraint* _minimumHeightConstraint;
	_UIInterfaceActionSeparatableSequenceView* _separatedContentSequenceView;

}

@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;                                          //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionSeparatableSequenceView * separatedContentSequenceView;              //@synthesize separatedContentSequenceView=_separatedContentSequenceView - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                                              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) NSArray * arrangedActionRepresentationViews;                                             //@synthesize arrangedActionRepresentationViews=_arrangedActionRepresentationViews - In the implementation block
@property (assign,nonatomic) long long actionLayoutAxis;                                                              //@synthesize actionLayoutAxis=_actionLayoutAxis - In the implementation block
@property (assign,nonatomic) unsigned long long visualCornerPosition;                                                 //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_notifyDidScroll;
-(double)_contentFitCanScrollThreshold;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)_applyVisualStyle;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(void)reloadDisplayedContentVisualStyle;
-(unsigned long long)visualCornerPosition;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(long long)actionLayoutAxis;
-(void)_loadDefaultSizingConstraints;
-(void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
-(void)_disableSeparatedContentSequenceViewToFit;
-(void)_enableSeparatedContentSequenceViewToFit;
-(void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
-(void)_updateMinimumHeightConstraint;
-(NSArray *)arrangedActionRepresentationViews;
-(double)_minimumNumberOfRowsRequiredVisible;
-(BOOL)_isHorizontalLayout;
-(CGSize)_sizeByApplyingLayoutMarginsAsOutsetToSize:(CGSize)arg1 ;
-(void)_applyVisualStyleToSeparatedContentSequenceView;
-(void)setActionLayoutAxis:(long long)arg1 ;
-(void)setArrangedActionRepresentationViews:(NSArray *)arg1 ;
-(_UIInterfaceActionSeparatableSequenceView *)separatedContentSequenceView;
@end

