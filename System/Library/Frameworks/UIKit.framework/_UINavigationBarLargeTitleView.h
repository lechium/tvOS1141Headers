/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UINavigationBarTitleViewDataSource.h>
#import <UIKit/_UINavigationBarTransitionContextParticipant.h>

@class _UINavigationBarLargeTitleViewLayout, _UINavigationBarTransitionContext, NSArray, NSString, NSDictionary, UIView, _UINavigationControllerRefreshControlHost, UIFontMetrics;

@interface _UINavigationBarLargeTitleView : UIView <_UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant> {

	_UINavigationBarLargeTitleViewLayout* _layout;
	_UINavigationBarTransitionContext* _transitionContext;
	NSArray* _titleCandidates;
	NSString* __effectiveTitle;
	BOOL _supportsTwoLines;
	BOOL _alignAccessoryViewToTitleBaseline;
	long long _titleType;
	NSString* _title;
	NSArray* _alternateTitles;
	NSDictionary* _titleAttributes;
	double _restingHeightOfTitleView;
	UIView* _accessoryView;
	unsigned long long _accessoryViewHorizontalAlignment;
	_UINavigationControllerRefreshControlHost* _refreshControlHost;
	UIFontMetrics* _fontMetrics;

}

@property (nonatomic,readonly) UIFontMetrics * fontMetrics;                                               //@synthesize fontMetrics=_fontMetrics - In the implementation block
@property (assign,nonatomic) long long titleType;                                                         //@synthesize titleType=_titleType - In the implementation block
@property (nonatomic,copy) NSString * title;                                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * alternateTitles;                                                   //@synthesize alternateTitles=_alternateTitles - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                                //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (assign,nonatomic) BOOL supportsTwoLines;                                                       //@synthesize supportsTwoLines=_supportsTwoLines - In the implementation block
@property (nonatomic,readonly) double restingHeightOfTitleView;                                           //@synthesize restingHeightOfTitleView=_restingHeightOfTitleView - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                      //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL alignAccessoryViewToTitleBaseline;                                      //@synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryViewHorizontalAlignment;                         //@synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment - In the implementation block
@property (nonatomic,retain) _UINavigationControllerRefreshControlHost * refreshControlHost;              //@synthesize refreshControlHost=_refreshControlHost - In the implementation block
@property (assign,nonatomic) double restingHeightOfRefreshControl; 
@property (nonatomic,readonly) UIView * accessibilityTitleView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSString *)title;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(void)setRefreshControlHost:(_UINavigationControllerRefreshControlHost *)arg1 ;
-(void)updateContent;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2 ;
-(double)restingHeightOfRefreshControl;
-(void)setRestingHeightOfRefreshControl:(double)arg1 ;
-(void)recordFromStateForTransition:(id)arg1 ;
-(void)recordToStateForTransition:(id)arg1 ;
-(void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(BOOL)arg2 ;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg1 ;
-(BOOL)supportsTwoLines;
-(void)titleViewChangedUnderlayContent:(id)arg1 ;
-(void)titleViewChangedHeight:(id)arg1 ;
-(void)titleViewChangedStandardDisplayItems:(id)arg1 ;
-(void)titleViewChangedPreferredDisplaySize:(id)arg1 ;
-(id)_newLayout;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(UIView *)accessibilityTitleView;
-(NSDictionary *)titleAttributes;
-(double)restingHeightOfTitleView;
-(void)setTitleType:(long long)arg1 ;
-(void)setAlternateTitles:(NSArray *)arg1 ;
-(void)setAlignAccessoryViewToTitleBaseline:(BOOL)arg1 ;
-(void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1 ;
-(void)setSupportsTwoLines:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 titleType:(long long)arg2 ;
-(UIFontMetrics *)fontMetrics;
-(long long)titleType;
-(BOOL)alignAccessoryViewToTitleBaseline;
-(unsigned long long)accessoryViewHorizontalAlignment;
-(void)_setupTitle;
-(void)_updateFontMetrics;
-(id)_layoutForMeasurement;
-(id)_titleForCurrentWidth;
-(void)_updateContentAndInvalidate:(BOOL)arg1 ;
-(id)_effectiveTitle;
-(NSArray *)alternateTitles;
@end

