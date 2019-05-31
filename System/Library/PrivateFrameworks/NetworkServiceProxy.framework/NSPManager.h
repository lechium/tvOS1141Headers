/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NPTunnelDelegate.h>
#import <libobjc.A.dylib/NEAppProxyProviderContainerDelegate.h>

@protocol NSPManagerDelegate;
@class NWPathEvaluator, NSDictionary, NSPConfiguration, NSMutableDictionary, NSPFlowDivert, NSArray, NSString, NSPAppRule, NSMutableArray;

@interface NSPManager : NSObject <NPTunnelDelegate, NEAppProxyProviderContainerDelegate> {

	BOOL _currentNetworkHasProxies;
	BOOL _isObserving;
	BOOL _initialUpdate;
	BOOL _testFetchDaypass;
	unsigned _nextFlowID;
	NWPathEvaluator* _pathEvaluator;
	/*^block*/id _changeHandler;
	/*^block*/id _connectionInfoSetHandler;
	/*^block*/id _tunnelConnectedHandler;
	NWPathEvaluator* _policyEvaluator;
	NSDictionary* _appRules;
	NSPConfiguration* _configuration;
	NSMutableDictionary* _tunnels;
	NSPFlowDivert* _flowDivert;
	NSMutableDictionary* _flowInfoMap;
	NSArray* _currentAgents;
	NSMutableDictionary* _fallbackCounts;
	id<NSPManagerDelegate> _delegate;
	NSString* _signingIdentifier;
	NSPAppRule* _matchingAppRule;
	NSMutableArray* _knownFlows;
	/*^block*/id _pendingCancellationHandler;
	NSArray* _testLatencyMap;
	unsigned long long _testLatencyMapIndex;

}

@property (readonly) NWPathEvaluator * policyEvaluator;                 //@synthesize policyEvaluator=_policyEvaluator - In the implementation block
@property (retain) NSDictionary * appRules;                             //@synthesize appRules=_appRules - In the implementation block
@property (retain) NSPConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSMutableDictionary * tunnels;                       //@synthesize tunnels=_tunnels - In the implementation block
@property (retain) NSPFlowDivert * flowDivert;                          //@synthesize flowDivert=_flowDivert - In the implementation block
@property (retain) NSMutableDictionary * flowInfoMap;                   //@synthesize flowInfoMap=_flowInfoMap - In the implementation block
@property (assign) BOOL isObserving;                                    //@synthesize isObserving=_isObserving - In the implementation block
@property (assign) BOOL initialUpdate;                                  //@synthesize initialUpdate=_initialUpdate - In the implementation block
@property (assign) BOOL currentNetworkHasProxies;                       //@synthesize currentNetworkHasProxies=_currentNetworkHasProxies - In the implementation block
@property (retain) NSArray * currentAgents;                             //@synthesize currentAgents=_currentAgents - In the implementation block
@property (readonly) NSMutableDictionary * fallbackCounts;              //@synthesize fallbackCounts=_fallbackCounts - In the implementation block
@property (__weak) id<NSPManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * signingIdentifier;                      //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (retain) NSPAppRule * matchingAppRule;                        //@synthesize matchingAppRule=_matchingAppRule - In the implementation block
@property (readonly) NSMutableArray * knownFlows;                       //@synthesize knownFlows=_knownFlows - In the implementation block
@property (copy) id pendingCancellationHandler;                         //@synthesize pendingCancellationHandler=_pendingCancellationHandler - In the implementation block
@property (retain) NSArray * testLatencyMap;                            //@synthesize testLatencyMap=_testLatencyMap - In the implementation block
@property (assign) BOOL testFetchDaypass;                               //@synthesize testFetchDaypass=_testFetchDaypass - In the implementation block
@property (assign) unsigned long long testLatencyMapIndex;              //@synthesize testLatencyMapIndex=_testLatencyMapIndex - In the implementation block
@property (assign) unsigned nextFlowID;                                 //@synthesize nextFlowID=_nextFlowID - In the implementation block
@property (readonly) NWPathEvaluator * pathEvaluator;                   //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (readonly) BOOL TFORequirementNotMet; 
@property (readonly) BOOL isEnabled; 
@property (copy) id changeHandler;                                      //@synthesize changeHandler=_changeHandler - In the implementation block
@property (copy) id connectionInfoSetHandler;                           //@synthesize connectionInfoSetHandler=_connectionInfoSetHandler - In the implementation block
@property (copy) id tunnelConnectedHandler;                             //@synthesize tunnelConnectedHandler=_tunnelConnectedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isFirstTunnel; 
+(id)sharedManager;
-(id)init;
-(id<NSPManagerDelegate>)delegate;
-(void)setDelegate:(id<NSPManagerDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)start;
-(void)setConfiguration:(NSPConfiguration *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSPConfiguration *)configuration;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
-(NSDictionary *)appRules;
-(void)setAppRules:(NSDictionary *)arg1 ;
-(void)container:(id)arg1 didStartWithError:(id)arg2 ;
-(void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)currentNetworkHasProxies;
-(BOOL)shouldSetConfigurationToAppRule:(id)arg1 edgeSet:(id)arg2 ;
-(void)setConnectionInfo:(id)arg1 forIdentifier:(id)arg2 ;
-(id)getConnectionInfoForIdentifier:(id)arg1 ;
-(void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)useTestLatencyMap;
-(unsigned long long)getTestLatencyRTT:(id)arg1 parameters:(networkParameters*)arg2 ;
-(void)setIsObserving:(BOOL)arg1 ;
-(BOOL)tunnelExistsFowFlow:(id)arg1 ;
-(void)setNextFlowID:(unsigned)arg1 ;
-(BOOL)isFirstTunnel;
-(void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2 ;
-(unsigned)nextFlowID;
-(void)tunnelDidConnect:(id)arg1 ;
-(void)tunnelDidCancel:(id)arg1 ;
-(id)instantiateFlowWithTunnel:(id)arg1 inputProtocol:(nw_protocol*)arg2 ;
-(id)instantiateTunnelWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(id)createTransformsForEndpoint:(id)arg1 parameters:(id)arg2 ;
-(void)sendKeyBag:(id)arg1 usageData:(id)arg2 fromClient:(id)arg3 ;
-(BOOL)useTestDaypass;
-(void)resetTestLatencyMapIndex:(unsigned long long)arg1 ;
-(NSMutableDictionary *)tunnels;
-(void)setPendingCancellationHandler:(id)arg1 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)setMatchingAppRule:(NSPAppRule *)arg1 ;
-(NWPathEvaluator *)policyEvaluator;
-(void)setCurrentNetworkHasProxies:(BOOL)arg1 ;
-(NSArray *)currentAgents;
-(void)setCurrentAgents:(NSArray *)arg1 ;
-(id)createAppRuleMapWithRules:(id)arg1 ;
-(NSPAppRule *)matchingAppRule;
-(NSPFlowDivert *)flowDivert;
-(void)setFlowDivert:(NSPFlowDivert *)arg1 ;
-(NSMutableDictionary *)fallbackCounts;
-(BOOL)initialUpdate;
-(void)setInitialUpdate:(BOOL)arg1 ;
-(void)handlePolicyUpdate;
-(id)pendingCancellationHandler;
-(id)tunnelConnectedHandler;
-(void)setTunnelConnectedHandler:(id)arg1 ;
-(NSMutableDictionary *)flowInfoMap;
-(void)setFlowInfoMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)knownFlows;
-(id)connectionInfoSetHandler;
-(void)cancelAllTunnelsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createReplacementEndpointForEndpoint:(id)arg1 properties:(id)arg2 ;
-(id)getAppRuleMatchingParameters:(id)arg1 flowProperties:(id)arg2 ;
-(id)buildTestLatencyMap:(id)arg1 ;
-(void)container:(id)arg1 didFailWithError:(id)arg2 ;
-(void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startWithConfiguration:(id)arg1 appRules:(id)arg2 delegate:(id)arg3 ;
-(void)resetTunnelWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)TFORequirementNotMet;
-(void)ingestTestLatencyMap:(id)arg1 local:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setConnectionInfoSetHandler:(id)arg1 ;
-(void)setTunnels:(NSMutableDictionary *)arg1 ;
-(NSArray *)testLatencyMap;
-(void)setTestLatencyMap:(NSArray *)arg1 ;
-(BOOL)testFetchDaypass;
-(void)setTestFetchDaypass:(BOOL)arg1 ;
-(unsigned long long)testLatencyMapIndex;
-(void)setTestLatencyMapIndex:(unsigned long long)arg1 ;
-(BOOL)isObserving;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)signingIdentifier;
@end

