/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {

	SSRequest* _request;

}

@property (readonly) SSRequest * request; 
-(void)cancel;
-(void)dealloc;
-(SSRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)run;
@end
