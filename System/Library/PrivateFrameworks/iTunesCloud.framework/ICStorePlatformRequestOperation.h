/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreURLRequest, ICStorePlatformRequest;

@interface ICStorePlatformRequestOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreURLRequest* _activeURLRequest;
	ICStorePlatformRequestOperation* _strongSelf;
	ICStorePlatformRequest* _platformRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICStorePlatformRequest * platformRequest;              //@synthesize platformRequest=_platformRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)cancel;
-(id)_requestContext;
-(void)_executePersonalized;
-(void)_executeUnpersonalized;
-(id)_URLRequestWithBaseURL:(id)arg1 ;
-(void)_enqueueDataRequest:(id)arg1 ;
-(id)initWithPlatformRequest:(id)arg1 ;
-(ICStorePlatformRequest *)platformRequest;
-(void)finishWithError:(id)arg1 ;
-(void)execute;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
@end

