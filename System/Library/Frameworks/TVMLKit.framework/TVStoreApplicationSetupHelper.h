/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISURLOperationDelegate.h>

@class NSNumber, NSURL, IKURLBagCache, NSMutableSet, NSString;

@interface TVStoreApplicationSetupHelper : NSObject <ISURLOperationDelegate> {

	BOOL _loadingStoreBag;
	NSURL* _defaultBootURL;
	IKURLBagCache* _bagCache;
	NSMutableSet* _completions;

}

@property (nonatomic,copy) NSURL * defaultBootURL;                                                      //@synthesize defaultBootURL=_defaultBootURL - In the implementation block
@property (nonatomic,readonly) IKURLBagCache * bagCache;                                                //@synthesize bagCache=_bagCache - In the implementation block
@property (assign,getter=isLoadingStoreBag,nonatomic) BOOL loadingStoreBag;                             //@synthesize loadingStoreBag=_loadingStoreBag - In the implementation block
@property (nonatomic,retain) NSMutableSet * completions;                                                //@synthesize completions=_completions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3 ;
+(id)_parsedQueryParametersForURL:(id)arg1 ;
+(void)_performCompletion:(/*^block*/id)arg1 withBootURL:(id)arg2 ;
+(id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithDefaultBootURL:(id)arg1 ;
-(id)initWithDefaultBootURL:(id)arg1 bagCache:(id)arg2 ;
-(id)_bootURLWithBagBootURL:(id)arg1 ;
-(BOOL)isLoadingStoreBag;
-(void)_URLBagDidLoad:(id)arg1 ;
-(void)setLoadingStoreBag:(BOOL)arg1 ;
-(NSMutableSet *)completions;
-(NSURL *)defaultBootURL;
-(void)obtainBootURLWithCompletion:(/*^block*/id)arg1 ;
-(void)setDefaultBootURL:(NSURL *)arg1 ;
-(IKURLBagCache *)bagCache;
-(void)setCompletions:(NSMutableSet *)arg1 ;
@end

