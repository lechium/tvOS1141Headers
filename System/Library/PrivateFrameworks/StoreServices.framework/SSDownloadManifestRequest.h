/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSURLRequest, NSString;

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding> {

	long long _manifestFormat;
	BOOL _shouldHideUserPrompts;
	NSURLRequest* _urlRequest;

}

@property (assign) long long manifestFormat; 
@property (assign,nonatomic) id<SSDownloadManifestRequestDelegate> delegate; 
@property (readonly) NSURLRequest * URLRequest; 
@property (assign) BOOL shouldHideUserPrompts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(void)startWithManifestResponseBlock:(/*^block*/id)arg1 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(long long)manifestFormat;
-(void)setManifestFormat:(long long)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(NSURLRequest *)URLRequest;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

