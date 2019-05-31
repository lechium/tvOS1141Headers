/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CalloutViewControllerProtocol.h>

@protocol MKSmallCalloutViewControllerDelegate;
@class NSString, UIView, MKSmallCalloutView, MKCalloutBackgroundView;

@interface MKSmallCalloutViewController : UIViewController <CalloutViewControllerProtocol> {

	MKSmallCalloutView* _smallCalloutView;
	id<MKSmallCalloutViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKSmallCalloutViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double minimumWidth; 
@property (assign,nonatomic) double maximumWidth; 
@property (nonatomic,retain) MKCalloutBackgroundView * calloutBackgroundView; 
@property (assign,nonatomic) SCD_Struct_MK15 mapDisplayStyle; 
@property (assign,getter=isButtonEnabled,nonatomic) BOOL buttonEnabled; 
@property (assign,getter=isMapFocused,nonatomic) BOOL mapFocused; 
@property (assign,getter=isParallaxEnabled,nonatomic) BOOL parallaxEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
+(CGSize)defaultSize;
-(NSString *)calloutTitle;
-(void)setButtonEnabled:(BOOL)arg1 ;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(id<MKSmallCalloutViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKSmallCalloutViewControllerDelegate>)arg1 ;
-(void)reset;
-(void)loadView;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)minimumWidth;
-(double)maximumWidth;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(SCD_Struct_MK15)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_MK15)arg1 ;
-(BOOL)isMapFocused;
-(void)setMapFocused:(BOOL)arg1 ;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(id)_smallCalloutView;
-(void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(void)beginMapsTransitionMovingSideways;
-(NSString *)calloutSubtitle;
-(void)setCalloutSubtitle:(NSString *)arg1 ;
-(UIView *)detailView;
-(void)setDetailView:(UIView *)arg1 ;
-(BOOL)isParallaxEnabled;
-(MKCalloutBackgroundView *)calloutBackgroundView;
-(void)setCalloutBackgroundView:(MKCalloutBackgroundView *)arg1 ;
-(BOOL)isButtonEnabled;
@end

