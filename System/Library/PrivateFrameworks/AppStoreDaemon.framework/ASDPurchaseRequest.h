/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDPurchaseRequestOptions;

@interface ASDPurchaseRequest : ASDEphemeralRequest

@property (nonatomic,copy,readonly) ASDPurchaseRequestOptions * options; 
+(long long)requestType;
-(id)initWithOptions:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

