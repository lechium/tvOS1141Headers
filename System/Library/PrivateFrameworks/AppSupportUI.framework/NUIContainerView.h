/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKit/UIView.h>

@protocol NUIContainerViewDelegate;
@class NSMutableArray, NSArray;

@interface NUIContainerView : UIView {

	id<NUIContainerViewDelegate> _delegate;
	NSMutableArray* _arrangedSubviews;
	NSArray* _visibleArrangedSubviews;
	double _preferredMaxLayoutWidth;
	nui_size_cache* _cachedIntrinsicSizes;
	struct {
		unsigned hiddenArrangedSubviewCount : 16;
		unsigned inBatch : 1;
		unsigned delayState : 2;
		unsigned inLayoutPass : 2;
		unsigned determiningPreferredMaxLayoutWidth : 1;
		unsigned inSecondConstraintsPass : 1;
		unsigned delegateDidInvalidateIntrinsicContentSize : 1;
		unsigned delegateSystemLayoutSizeFittingSizeForArrangedSubview : 1;
		unsigned delegateLayoutFrameForArrangedSubview : 1;
		unsigned delegateWillMeasureFitting : 1;
		unsigned delegateDidLayout : 1;
	}  _containerFlags;
	BOOL _baselineRelativeArrangement;
	BOOL _layoutMarginsRelativeArrangement;
	long long _asynchronousMeasurement;

}

@property (assign,nonatomic) long long asynchronousMeasurement;                                                            //@synthesize asynchronousMeasurement=_asynchronousMeasurement - In the implementation block
@property (nonatomic,copy) NSArray * arrangedSubviews; 
@property (nonatomic,readonly) NSArray * visibleArrangedSubviews; 
@property (assign,nonatomic,__weak) id<NUIContainerViewDelegate> delegate; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement;                        //@synthesize baselineRelativeArrangement=_baselineRelativeArrangement - In the implementation block
@property (assign,getter=isLayoutMarginsRelativeArrangement,nonatomic) BOOL layoutMarginsRelativeArrangement;              //@synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement - In the implementation block
+(void)initialize;
+(BOOL)requiresConstraintBasedLayout;
+(BOOL)isDebugBoundingBoxesEnabled;
-(BOOL)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NUIContainerViewDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<NUIContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setNeedsLayout;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)updateConstraints;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)layoutMarginsDidChange;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)addArrangedSubview:(id)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(NSArray *)arrangedSubviews;
-(void)removeArrangedSubview:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)setLayoutMarginsRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isLayoutMarginsRelativeArrangement;
-(id)viewForFirstBaselineLayout;
-(void)setArrangedSubviews:(NSArray *)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(BOOL)supportsAsynchronousMeasurement;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(BOOL)wantsLayer;
-(void)_endObservingSubviewVisibility:(id)arg1 ;
-(void)assertNotInLayoutPass:(BOOL)arg1 ;
-(BOOL)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(BOOL)arg1 ;
-(NSArray *)visibleArrangedSubviews;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)_addAsSubviewIfNeeded:(id)arg1 ;
-(void)_beginObservingSubviewVisibility:(id)arg1 ;
-(void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(UIEdgeInsets)effectiveLayoutMargins;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(BOOL)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(void)visibilityDidChangeForArrangedSubview:(id)arg1 ;
-(void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1 ;
-(id)arrangedDescription;
-(BOOL)_verifyInternalConsistencyWarningOnly:(BOOL)arg1 ;
-(BOOL)isInBatchUpdate;
-(void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfArrangedSubview:(id)arg1 ;
-(long long)asynchronousMeasurement;
-(void)setAsynchronousMeasurement:(long long)arg1 ;
-(BOOL)isInLayoutPass;
@end

