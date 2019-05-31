/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUIAccountManagerDelegate;
#import <AppleAccountUI/AppleAccountUI-Structs.h>
@class ACAccountStore, NSDictionary;

@interface AAUIAccountManager : NSObject {

	id _accountStoreDidChangeObserver;
	ACAccountStore* _accountStore;
	NSDictionary* _accounts;
	id<AAUIAccountManagerDelegate> _delegate;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                             //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSDictionary * accounts;                                       //@synthesize accounts=_accounts - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIAccountManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AAUIAccountManagerDelegate>)delegate;
-(void)setDelegate:(id<AAUIAccountManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)stopObservingAccountStoreDidChangeNotification;
-(NSDictionary*)_delegate_accountsForAccountManager;
-(id)initWithAccountStore:(id)arg1 ;
-(void)beginObservingAccountStoreDidChangeNotification;
-(id)grandSlamAccountForService:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(void)setAccounts:(NSDictionary *)arg1 ;
-(NSDictionary *)accounts;
@end
