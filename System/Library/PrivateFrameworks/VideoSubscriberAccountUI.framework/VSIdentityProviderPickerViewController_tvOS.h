/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/VSIdentityProviderSearchResultsViewControllerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderPickerViewController.h>

@protocol VSIdentityProviderPickerViewControllerDelegate;
@class NSArray, NSString, UISearchController, VSIdentityProviderFilter, VSIdentityProviderTableViewDataSource, VSSearchBarDelegate, UIView, UISearchContainerViewController, VSFontCenter;

@interface VSIdentityProviderPickerViewController_tvOS : UIViewController <VSIdentityProviderSearchResultsViewControllerDelegate, VSIdentityProviderPickerViewController> {

	BOOL _cancellationAllowed;
	id<VSIdentityProviderPickerViewControllerDelegate> _delegate;
	NSArray* _identityProviders;
	NSString* _resourceTitle;
	unsigned long long _additionalProvidersMode;
	NSString* _requestingAppDisplayName;
	VSIdentityProviderFilter* _filter;
	VSIdentityProviderTableViewDataSource* _filteredDataSource;
	VSSearchBarDelegate* _searchBarDelegate;
	UIView* _container;
	UISearchContainerViewController* _searchContainerController;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) VSIdentityProviderFilter * filter;                                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) VSIdentityProviderTableViewDataSource * filteredDataSource;                      //@synthesize filteredDataSource=_filteredDataSource - In the implementation block
@property (nonatomic,retain) VSSearchBarDelegate * searchBarDelegate;                                         //@synthesize searchBarDelegate=_searchBarDelegate - In the implementation block
@property (nonatomic,retain) UIView * container;                                                              //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UISearchContainerViewController * searchContainerController;                     //@synthesize searchContainerController=_searchContainerController - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                                       //@synthesize fontCenter=_fontCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VSIdentityProviderPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                           //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,copy) NSArray * identityProviders;                                                       //@synthesize identityProviders=_identityProviders - In the implementation block
@property (assign,nonatomic) unsigned long long additionalProvidersMode;                                      //@synthesize additionalProvidersMode=_additionalProvidersMode - In the implementation block
@property (nonatomic,copy) NSString * requestingAppDisplayName;                                               //@synthesize requestingAppDisplayName=_requestingAppDisplayName - In the implementation block
@property (nonatomic,copy) NSString * resourceTitle;                                                          //@synthesize resourceTitle=_resourceTitle - In the implementation block
@property (nonatomic,readonly) UISearchController * searchController; 
-(id<VSIdentityProviderPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSIdentityProviderPickerViewControllerDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)container;
-(void)setContainer:(UIView *)arg1 ;
-(void)viewDidLoad;
-(VSIdentityProviderFilter *)filter;
-(void)setFilter:(VSIdentityProviderFilter *)arg1 ;
-(void)_didCancel;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(NSString *)requestingAppDisplayName;
-(unsigned long long)additionalProvidersMode;
-(NSString *)resourceTitle;
-(VSIdentityProviderTableViewDataSource *)filteredDataSource;
-(void)_didPickIdentityProvider:(id)arg1 ;
-(void)_didPickAdditionalIdentityProviders;
-(void)_handleMenuButtonRecognizer:(id)arg1 ;
-(id)_message;
-(void)setSearchContainerController:(UISearchContainerViewController *)arg1 ;
-(VSSearchBarDelegate *)searchBarDelegate;
-(void)identityProviderSearchResultsViewController:(id)arg1 didPickIdentityProvider:(id)arg2 ;
-(void)identityProviderSearchResultsViewControllerDidPickAdditionalIdentityProviders:(id)arg1 ;
-(void)deselectSelectedProviderAnimated:(BOOL)arg1 ;
-(NSArray *)identityProviders;
-(void)setIdentityProviders:(NSArray *)arg1 ;
-(void)setAdditionalProvidersMode:(unsigned long long)arg1 ;
-(void)setRequestingAppDisplayName:(NSString *)arg1 ;
-(void)setResourceTitle:(NSString *)arg1 ;
-(void)setFilteredDataSource:(VSIdentityProviderTableViewDataSource *)arg1 ;
-(void)setSearchBarDelegate:(VSSearchBarDelegate *)arg1 ;
-(UISearchContainerViewController *)searchContainerController;
@end

