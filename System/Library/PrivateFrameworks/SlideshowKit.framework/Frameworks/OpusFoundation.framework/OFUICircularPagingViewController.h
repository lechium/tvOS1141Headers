/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OFUICircularPagingViewDelegate.h>

@class OFUICircularPagingView, NSString;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate> {

	OFUICircularPagingView* _circularPagingView;

}

@property (nonatomic,retain) OFUICircularPagingView * circularPagingView;              //@synthesize circularPagingView=_circularPagingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)circularPagingViewClass;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(void)viewDidUnload;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)commonInit;
-(OFUICircularPagingView *)circularPagingView;
-(void)circularPagingViewDidMoveForward:(id)arg1 ;
-(void)circularPagingViewDidMoveBackward:(id)arg1 ;
-(void)setCircularPagingView:(OFUICircularPagingView *)arg1 ;
@end
