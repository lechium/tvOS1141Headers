/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEAppProxyProvider.h>

@class NSPManager;

@interface NSPFlowDivertProvider : NEAppProxyProvider {

	NSPManager* _manager;

}

@property (retain) NSPManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)init;
-(NSPManager *)manager;
-(void)setManager:(NSPManager *)arg1 ;
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

