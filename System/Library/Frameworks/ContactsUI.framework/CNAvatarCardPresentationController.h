/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIPresentationController.h>

@protocol CNCardTransitioning;
@class UIView, UITapGestureRecognizer, UIViewController, CNAvatarCardTransition, UIVisualEffectView;

@interface CNAvatarCardPresentationController : UIPresentationController {

	unsigned _alignmentEdge;
	UIView* _sourceView;
	double _alignmentY;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIViewController* _sourceViewController;
	CNAvatarCardTransition* _transition;
	id<CNCardTransitioning> _originalTransitioning;
	UIVisualEffectView* _backgroundView;
	UIVisualEffectView* _vibrancyView;
	UIView* _dimmingView;
	UIView* _cardView;
	UIView* _contentView;
	CGRect _sourceTargetRect;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController * sourceViewController;                    //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,retain) CNAvatarCardTransition * transition;                        //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) id<CNCardTransitioning> originalTransitioning;              //@synthesize originalTransitioning=_originalTransitioning - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyView;                          //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                       //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) UIView * cardView;                                          //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGRect sourceTargetRect;                                    //@synthesize sourceTargetRect=_sourceTargetRect - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                        //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                          //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) double alignmentY;                                          //@synthesize alignmentY=_alignmentY - In the implementation block
@property (assign,nonatomic) unsigned alignmentEdge;                                     //@synthesize alignmentEdge=_alignmentEdge - In the implementation block
-(CGRect)frameOfPresentedViewInContainerView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(id)presentedView;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setTransition:(CNAvatarCardTransition *)arg1 ;
-(CNAvatarCardTransition *)transition;
-(UIViewController *)sourceViewController;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)_layoutViews;
-(void)tapGestureRecognized:(id)arg1 ;
-(UIView *)cardView;
-(id<CNCardTransitioning>)originalTransitioning;
-(double)alignmentY;
-(unsigned)alignmentEdge;
-(CGRect)sourceTargetRect;
-(void)setSourceTargetRect:(CGRect)arg1 ;
-(void)setAlignmentY:(double)arg1 ;
-(void)setAlignmentEdge:(unsigned)arg1 ;
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(void)setOriginalTransitioning:(id<CNCardTransitioning>)arg1 ;
-(UIVisualEffectView *)vibrancyView;
-(void)setVibrancyView:(UIVisualEffectView *)arg1 ;
-(void)setCardView:(UIView *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

