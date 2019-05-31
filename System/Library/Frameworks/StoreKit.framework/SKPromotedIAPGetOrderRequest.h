/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPGetOrderRequest : SKRequest {

	/*^block*/id _completionHandler;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * bundleId;               //@synthesize bundleId=_bundleId - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)_handleReply:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendXPCMessage;
@end

