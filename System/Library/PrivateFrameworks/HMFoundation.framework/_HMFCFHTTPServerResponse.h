/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFHTTPResponseInternal.h>

@class _HMFCFHTTPServerRequest, _HMFCFHTTPMessage;

@interface _HMFCFHTTPServerResponse : HMFHTTPResponseInternal {

	CFHTTPServerResponseRef _responseRef;
	_HMFCFHTTPServerRequest* _request;
	/*^block*/id _completionHandler;
	_HMFCFHTTPMessage* _response;

}

@property (nonatomic,readonly) _HMFCFHTTPMessage * response;                     //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) _HMFCFHTTPServerRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CFHTTPServerResponseRef responseRef;              //@synthesize responseRef=_responseRef - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)headerFields;
-(void)dealloc;
-(_HMFCFHTTPMessage *)response;
-(_HMFCFHTTPServerRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)body;
-(void)setBody:(id)arg1 ;
-(id)initWithRequest:(id)arg1 statusCode:(long long)arg2 ;
-(CFHTTPServerResponseRef)responseRef;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
@end

