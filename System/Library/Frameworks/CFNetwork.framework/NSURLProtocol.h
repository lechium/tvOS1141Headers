/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLProtocolInternal, NSURLRequest, NSCachedURLResponse;

@interface NSURLProtocol : NSObject {

	NSURLProtocolInternal* _internal;

}

@property (retain,readonly) id<NSURLProtocolClient> client; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSCachedURLResponse * cachedResponse; 
+(BOOL)canInitWithTask:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 task:(id)arg2 ;
+(void)unregisterClass:(Class)arg1 ;
+(void)removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(BOOL)registerClass:(Class)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)propertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3 ;
+(Class)_protocolClassForRequest:(id)arg1 ;
-(id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)dealloc;
-(NSURLRequest *)request;
-(void)stopLoading;
-(NSCachedURLResponse *)cachedResponse;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(id<NSURLProtocolClient>)client;
@end

