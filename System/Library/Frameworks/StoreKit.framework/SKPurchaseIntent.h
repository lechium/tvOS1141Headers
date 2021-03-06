/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SKXPCConnection;

@interface SKPurchaseIntent : NSObject {

	NSString* _bundleId;
	NSString* _productIdentifer;
	NSString* _appName;
	NSString* _productName;
	SKXPCConnection* _connection;
	/*^block*/id __completion;

}

@property (nonatomic,copy) id _completion;              //@synthesize _completion=__completion - In the implementation block
-(void)send:(/*^block*/id)arg1 ;
-(id)_completion;
-(void)set_completion:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 ;
-(void)_send;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 appName:(id)arg3 productName:(id)arg4 ;
@end

