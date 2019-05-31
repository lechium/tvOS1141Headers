/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLJavaScriptContext.h>
#import <libobjc.A.dylib/TVLJSRootDelegate.h>

@class TVLJSStorage, TVLJSRoot, TVLJSPopUpMenuControl, SKPaymentQueue, NSLock, TVLAppliance, TVLDocument, NSString;

@interface TVLLegacyJSContext : TVLJavaScriptContext <TVLJSRootDelegate> {

	TVLJSStorage* _atvLocalStorage;
	TVLJSRoot* _atvRoot;
	TVLJSStorage* _atvSessionStorage;
	TVLJSPopUpMenuControl* _contextMenu;
	SKPaymentQueue* _paymentQueue;
	NSLock* _queueLock;
	TVLAppliance* _appliance;
	TVLDocument* _feedDocument;
	long long _configuration;

}

@property (assign,nonatomic,__weak) TVLAppliance * appliance;                //@synthesize appliance=_appliance - In the implementation block
@property (assign,nonatomic,__weak) TVLDocument * feedDocument;              //@synthesize feedDocument=_feedDocument - In the implementation block
@property (assign,nonatomic) long long configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(NSString *)description;
-(void)setConfiguration:(long long)arg1 ;
-(long long)configuration;
-(TVLDocument *)feedDocument;
-(TVLAppliance *)appliance;
-(void)setFeedDocument:(TVLDocument *)arg1 ;
-(void)evaluateScriptAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)paymentQueueClient;
-(id)paymentQueue;
-(void)setAppliance:(TVLAppliance *)arg1 ;
-(void)destroy:(/*^block*/id)arg1 ;
-(id)initWithFeedAppliance:(id)arg1 configuration:(long long)arg2 ;
-(void)updateJSContextName;
-(void)_setupGlobalObjects:(OpaqueJSContextRef)arg1 ;
-(void)_endContextMenuSessionByDismissing:(BOOL)arg1 ;
-(id)_contextName;
-(void)_beginContextMenuSession;
-(BOOL)_isContextMenuSessionValid;
-(void)_cleanUpContextMenu;
-(void)jsRoot:(id)arg1 didRequestLoadWithPropertyList:(id)arg2 ;
-(void)jsRoot:(id)arg1 didSetScreensaverPhotosCollection:(id)arg2 ;
-(id)initWithFeedAppliance:(id)arg1 ;
-(void)pruneUndefinedFunctions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pageLoad:(id)arg1 ;
-(void)pageUnload:(id)arg1 ;
-(void)pageBuried:(id)arg1 ;
-(void)pageExhumed:(id)arg1 ;
@end

