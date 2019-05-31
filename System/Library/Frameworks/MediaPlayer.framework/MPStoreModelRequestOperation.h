/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSOperation, MPModelResponse, MPStoreModelRequest;

@interface MPStoreModelRequestOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSOperation* _childOperation;
	MPModelResponse* _response;
	double _startExecutingTimeStamp;
	NSObject*<OS_dispatch_source> _timeoutTimerSource;
	MPStoreModelRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) double remainingTimeInterval; 
@property (nonatomic,copy) MPStoreModelRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(MPStoreModelRequest *)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(MPStoreModelRequest *)request;
-(void)finishWithError:(id)arg1 ;
-(void)execute;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(double)remainingTimeInterval;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)assertRunningInAccessQueue;
-(double)adjustTimeoutInterval:(double)arg1 ;
-(void)_tearDownTimeoutTimerSource;
-(void)_executeURLLoadWithRequest:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3 ;
-(void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 requestContext:(id)arg3 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)_handleTimeout;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
@end

