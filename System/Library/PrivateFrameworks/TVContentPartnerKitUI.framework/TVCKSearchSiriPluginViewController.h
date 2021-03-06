/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <TVContentPartnerKitUI/TVCKSearchAppViewController.h>

@class TVCKSearchSiriContext, TVSSSearchResult, NSString;

@interface TVCKSearchSiriPluginViewController : TVCKSearchAppViewController {

	TVCKSearchSiriContext* _siriContext;
	TVSSSearchResult* _searchResult;
	NSString* _pluginMode;
	/*^block*/id _loadingCompletionHandler;

}

@property (nonatomic,copy) id loadingCompletionHandler;                    //@synthesize loadingCompletionHandler=_loadingCompletionHandler - In the implementation block
@property (nonatomic,retain) TVSSSearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy) NSString * pluginMode;                          //@synthesize pluginMode=_pluginMode - In the implementation block
-(TVSSSearchResult *)searchResult;
-(void)setSearchResult:(TVSSSearchResult *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1 ;
-(void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(CGPoint)arg3 ;
-(void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)siriContext;
-(NSString *)pluginMode;
-(void)setPluginMode:(NSString *)arg1 ;
-(id)_launchOptions;
-(void)_accumulateImageStackViews:(id)arg1 descendingFromView:(id)arg2 ;
-(id)loadingCompletionHandler;
-(void)setLoadingCompletionHandler:(id)arg1 ;
-(void)_didFinishLoading;
-(void)_waitForLoadingToFinish;
-(void)appendBatch:(id)arg1 ;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
@end

