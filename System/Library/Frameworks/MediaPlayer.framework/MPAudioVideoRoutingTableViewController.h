/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>

@class MPAVRoutingController, NSArray, NSString;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAVRoutingControllerDelegate> {

	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	int _airPlayPasswordAlertDidCancelToken;
	MPAVRoutingController* _routingController;
	long long _avItemType;
	BOOL _displayMirroringRoutes;
	NSArray* _displayedRoutes;
	BOOL _wirelessDisplayCapableRouteIsPicked;
	BOOL _wirelessDisplayRouteIsPendingAsPicked;

}

@property (nonatomic,readonly) MPAVRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)routesPreferringMirroring;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_pickedRoute;
-(MPAVRoutingController *)routingController;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(id)_displayedRoutes;
-(BOOL)_wirelessDisplayCapableRouteIsPicked;
-(id)_effectivePickedRouteReturningActualPickedRouteType:(long long*)arg1 ;
-(void)_mirroringSwitchValueDidChange:(id)arg1 ;
-(void)_debugButtonAction:(id)arg1 ;
-(id)_availableRoutes;
-(id)initWithType:(long long)arg1 displayMirroringRoutes:(BOOL)arg2 ;
@end

