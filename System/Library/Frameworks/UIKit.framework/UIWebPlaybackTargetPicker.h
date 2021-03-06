/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class MPAVRoutingController, MPAudioVideoRoutingPopoverController, MPAVRoutingSheet, UIWebDocumentView, NSString;

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {

	MPAVRoutingController* _routingController;
	MPAudioVideoRoutingPopoverController* _popoverController;
	MPAVRoutingSheet* _actionSheet;
	UIWebDocumentView* _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)show:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_windowWillRotate:(id)arg1 ;
-(void)_dismissAirPlayRoutePickerIPad;
-(void)_windowDidRotate:(id)arg1 ;
-(void)_presentAirPlayPopoverAnimated:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPad:(long long)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPhone:(long long)arg1 ;
@end

