/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKAppDelegate.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <TVContentPartnerKitUI/TVPMediaCacheManagerResponder.h>
#import <TVContentPartnerKitUI/TVPSecureKeyLoaderDelegate.h>
#import <TVContentPartnerKitUI/TVCKStoreFavoritesViewControllerDelegate.h>

@class TVPSecureKeyStandardLoader, NSString, UIWindow;

@interface TVCKStoreAppDelegate : TVCKAppDelegate <UIApplicationTestingDelegate, TVPMediaCacheManagerResponder, TVPSecureKeyLoaderDelegate, TVCKStoreFavoritesViewControllerDelegate> {

	TVPSecureKeyStandardLoader* _fpsCertLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) TVPSecureKeyStandardLoader * fpsCertLoader;              //@synthesize fpsCertLoader=_fpsCertLoader - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaType; 
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(NSString *)mediaType;
-(id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2 ;
-(id)launchOptionsWithDefaultOptions:(id)arg1 ;
-(void)_loadFPSCert;
-(void)playCurrentlyCachingVideo;
-(void)setFpsCertLoader:(TVPSecureKeyStandardLoader *)arg1 ;
-(void)_loadFPSCertWithURL:(id)arg1 keyDataURL:(id)arg2 ;
-(void)_storeURLBagDidLoad:(id)arg1 ;
-(void)storeFavoritesViewController:(id)arg1 didSelectItem:(id)arg2 ;
-(TVPSecureKeyStandardLoader *)fpsCertLoader;
-(void)_runScrollMovieChaptersTest;
-(void)_pptPlayerStateDidChange:(id)arg1 ;
-(id)_findViewControllerOfClass:(Class)arg1 inViewControllers:(id)arg2 ;
-(BOOL)mediaCacheManagerItemDidBecomeLikelyToKeepUp:(id)arg1 ;
-(void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4 ;
-(void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 ;
-(BOOL)isDeviceAsleepAndSleptManually:(BOOL*)arg1 ;
@end
