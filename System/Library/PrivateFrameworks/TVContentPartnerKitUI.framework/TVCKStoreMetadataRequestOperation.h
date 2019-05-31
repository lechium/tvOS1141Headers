/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SSLookupResponse, NSError, SSLookupRequest, TVCKStoreMetadataRequestCompletionHandler;

@interface TVCKStoreMetadataRequestOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	SSLookupResponse* _response;
	NSError* _error;
	SSLookupRequest* _lookupRequest;
	TVCKStoreMetadataRequestCompletionHandler* _completionHandler;

}

@property (nonatomic,retain) SSLookupRequest * lookupRequest;                                                   //@synthesize lookupRequest=_lookupRequest - In the implementation block
@property (assign,nonatomic,__weak) TVCKStoreMetadataRequestCompletionHandler * completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) SSLookupResponse * response;                                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setResponse:(SSLookupResponse *)arg1 ;
-(id)init;
-(void)cancel;
-(SSLookupResponse *)response;
-(TVCKStoreMetadataRequestCompletionHandler *)completionHandler;
-(void)setCompletionHandler:(TVCKStoreMetadataRequestCompletionHandler *)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(SSLookupRequest *)lookupRequest;
-(void)setLookupRequest:(SSLookupRequest *)arg1 ;
-(id)initWithLookupRequest:(id)arg1 ;
@end

