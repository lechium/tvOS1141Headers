/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_semaphore, TVSWiFiNetworkConnectionOperationDelegate;
@class NSObject, TVSStateMachine, TVSWiFiNetwork, NSString;

@interface TVSWiFiNetworkConnectionOperation : NSOperation {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	BOOL _directedScan;
	id<TVSWiFiNetworkConnectionOperationDelegate> _delegate;
	unsigned long long _state;
	TVSStateMachine* _stateMachine;
	id _scanToken;
	TVSWiFiNetwork* _network;
	NSString* _networkName;

}

@property (nonatomic,retain) TVSStateMachine * stateMachine;                                             //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) id scanToken;                                                               //@synthesize scanToken=_scanToken - In the implementation block
@property (nonatomic,retain) TVSWiFiNetwork * network;                                                   //@synthesize network=_network - In the implementation block
@property (nonatomic,copy) NSString * networkName;                                                       //@synthesize networkName=_networkName - In the implementation block
@property (getter=isDirectedScan,nonatomic,readonly) BOOL directedScan;                                  //@synthesize directedScan=_directedScan - In the implementation block
@property (assign,nonatomic,__weak) id<TVSWiFiNetworkConnectionOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                                 //@synthesize state=_state - In the implementation block
-(id)init;
-(void)cancel;
-(id<TVSWiFiNetworkConnectionOperationDelegate>)delegate;
-(void)setDelegate:(id<TVSWiFiNetworkConnectionOperationDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)_cleanup;
-(void)main;
-(void)connect;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(TVSWiFiNetwork *)network;
-(void)setNetwork:(TVSWiFiNetwork *)arg1 ;
-(void)_updateStateWithNewState:(id)arg1 ;
-(void)_scanForNetworkWithInfo:(id)arg1 ;
-(id)_connectToNetwork:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)isDirectedScan;
-(void)setScanToken:(id)arg1 ;
-(id)scanToken;
-(id)initWithNetwork:(id)arg1 ;
-(id)initWithNetworkName:(id)arg1 ;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(TVSStateMachine *)stateMachine;
-(void)_initializeStateMachine;
@end
