/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKDiscoverUserIdentitiesOperation : CKOperation {

	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverUserIdentitiesCompletionBlock;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,copy) NSArray * userIdentityLookupInfos;                     //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                        //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverUserIdentitiesCompletionBlock;              //@synthesize discoverUserIdentitiesCompletionBlock=_discoverUserIdentitiesCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithUserIdentityLookupInfos:(id)arg1 ;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(void)setDiscoverUserIdentitiesCompletionBlock:(id)arg1 ;
-(Class)operationInfoClass;
-(id)discoverUserIdentitiesCompletionBlock;
-(id)userIdentityDiscoveredBlock;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
@end

