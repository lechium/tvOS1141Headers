/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

@class ACAccount, ACAccountStore, AAGrandSlamSigner, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, NSArray, UINavigationItem;

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	RemoteUIController* _remoteUIController;
	NSMutableURLRequest* _startRemoteUIRequest;
	NSMutableURLRequest* _currentRemoteUIRequest;
	BOOL _isShowingSpinner;
	UIActivityIndicatorView* _spinnerView;
	NSArray* _originalRightBarButtonItems;
	UINavigationItem* _navigationItemShowingSpinner;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupDelegate> delegate; 
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(id)initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 familyEligibilityResponse:(id)arg3 ;
-(id)initTrimmedFlowWithAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
@end

