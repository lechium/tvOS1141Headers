/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <TVKit/TVPAudioRoutingControllerDelegate.h>
#import <TVKit/TVTableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSIndexPath, TVTableView, TVPAudioRoutingController, NSArray, NSString;

@interface TVMusicSpeakerSelectionViewController : UIViewController <TVPAudioRoutingControllerDelegate, TVTableViewDelegate, UITableViewDataSource> {

	NSIndexPath* _selectedIndexPath;
	TVTableView* _tableView;
	TVPAudioRoutingController* _routingController;
	NSArray* _knownRoutes;
	NSArray* _otherRoutes;
	NSString* _lastFocusedRouteID;

}

@property (nonatomic,retain) TVTableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) TVPAudioRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,retain) NSArray * knownRoutes;                                      //@synthesize knownRoutes=_knownRoutes - In the implementation block
@property (nonatomic,retain) NSArray * otherRoutes;                                      //@synthesize otherRoutes=_otherRoutes - In the implementation block
@property (nonatomic,retain) NSString * lastFocusedRouteID;                              //@synthesize lastFocusedRouteID=_lastFocusedRouteID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(TVTableView *)arg1 ;
-(TVTableView *)tableView;
-(void)viewDidLoad;
-(TVPAudioRoutingController *)routingController;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(NSArray *)knownRoutes;
-(NSArray *)otherRoutes;
-(void)setKnownRoutes:(NSArray *)arg1 ;
-(void)setOtherRoutes:(NSArray *)arg1 ;
-(id)_indexPathForAudioRoute:(id)arg1 ;
-(id)_routeForIndexPath:(id)arg1 ;
-(void)setLastFocusedRouteID:(NSString *)arg1 ;
-(NSString *)lastFocusedRouteID;
-(id)_indexPathForAudioRouteID:(id)arg1 ;
-(void)setRoutingController:(TVPAudioRoutingController *)arg1 ;
@end

