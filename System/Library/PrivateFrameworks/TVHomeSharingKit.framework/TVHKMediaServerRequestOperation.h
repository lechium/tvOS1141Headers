/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class TVHSMediaServerRequest, TVHSMediaServerResponse, NSError, TVHSMediaServerIdentifier;

@interface TVHKMediaServerRequestOperation : TVHSAsynchronousOperation {

	int _queryCompletionFlag;
	TVHSMediaServerRequest* _request;
	TVHSMediaServerResponse* _response;
	NSError* _error;
	TVHSMediaServerIdentifier* _mediaServerIdentifier;

}

@property (nonatomic,retain) TVHSMediaServerRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) TVHSMediaServerIdentifier * mediaServerIdentifier;              //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,retain) TVHSMediaServerResponse * response;                           //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setRequest:(TVHSMediaServerRequest *)arg1 ;
-(void)setResponse:(TVHSMediaServerResponse *)arg1 ;
-(id)init;
-(void)cancel;
-(TVHSMediaServerResponse *)response;
-(TVHSMediaServerRequest *)request;
-(void)_handleResponse:(id)arg1 ;
-(void)executionDidBegin;
-(TVHSMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaServerIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 ;
-(BOOL)_isFirstToFinish;
-(void)_cancelRequest;
@end
