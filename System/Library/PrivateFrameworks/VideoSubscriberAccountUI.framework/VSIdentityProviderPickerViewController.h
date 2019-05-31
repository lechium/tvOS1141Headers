/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, UISearchController;


@protocol VSIdentityProviderPickerViewController <NSObject>
@property (assign,nonatomic,__weak) id<VSIdentityProviderPickerViewControllerDelegate> delegate; 
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed; 
@property (nonatomic,copy) NSArray * identityProviders; 
@property (assign,nonatomic) unsigned long long additionalProvidersMode; 
@property (nonatomic,copy) NSString * requestingAppDisplayName; 
@property (nonatomic,copy) NSString * resourceTitle; 
@property (nonatomic,readonly) UISearchController * searchController; 
@optional
-(UISearchController *)searchController;

@required
-(id<VSIdentityProviderPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1;
-(NSString *)requestingAppDisplayName;
-(unsigned long long)additionalProvidersMode;
-(NSString *)resourceTitle;
-(void)deselectSelectedProviderAnimated:(BOOL)arg1;
-(NSArray *)identityProviders;
-(void)setIdentityProviders:(id)arg1;
-(void)setAdditionalProvidersMode:(unsigned long long)arg1;
-(void)setRequestingAppDisplayName:(id)arg1;
-(void)setResourceTitle:(id)arg1;

@end

