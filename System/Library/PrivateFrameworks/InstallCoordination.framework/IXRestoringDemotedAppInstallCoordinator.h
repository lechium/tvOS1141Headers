/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXAppInstallCoordinator.h>
#import <libobjc.A.dylib/IXCoordinatorWithUserDataPromise.h>
#import <libobjc.A.dylib/IXUserInitiatedCoordinator.h>

@class NSString;

@interface IXRestoringDemotedAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithUserDataPromise, IXUserInitiatedCoordinator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasUserDataPromise; 
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated; 
+(id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
+(BOOL)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)enumerateCoordinatorsUsingBlock:(/*^block*/id)arg1 ;
-(void)setUserInitiated:(BOOL)arg1 ;
-(BOOL)setUserDataPromise:(id)arg1 error:(id*)arg2 ;
-(id)userDataPromiseWithError:(id*)arg1 ;
-(BOOL)hasUserDataPromise;
-(id)userDataRestoreShouldBegin:(BOOL*)arg1 ;
-(id)validInstallTypes;
-(BOOL)isUserInitiated;
@end

