/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, ICStoreURLRequest;

@interface ICSongDownloadDoneRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _downloadIdentifier;
	unsigned long long _songID;
	ICStoreURLRequest* _storeURLRequest;

}
-(void)cancel;
-(id)initWithRequestContext:(id)arg1 downloadIdentifier:(id)arg2 songID:(unsigned long long)arg3 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)execute;
@end

