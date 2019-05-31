/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableDictionary, NSObject;

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject {

	NSMutableDictionary* _requestIDToDownload;
	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_cancelRequestID:(unsigned long long)arg1 ;
-(int)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 ;
-(void)_didFinish:(id)arg1 error:(CFErrorRef)arg2 ;
-(BOOL)_willSendRequest:(id)arg1 request:(CFURLRequestRef)arg2 redirectionResponse:(CFURLResponseRef)arg3 ;
-(void)_didReceiveResponse:(id)arg1 response:(CFURLResponseRef)arg2 ;
-(void)_didReceiveData:(id)arg1 data:(CFDataRef)arg2 ;
-(void)dealloc;
@end

