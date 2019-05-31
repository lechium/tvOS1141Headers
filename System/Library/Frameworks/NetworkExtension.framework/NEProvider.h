/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NWPath, NWPathEvaluator, NEExtensionProviderContext, NSString;

@interface NEProvider : NSObject <NSExtensionRequestHandling> {

	NWPath* _defaultPath;
	NWPathEvaluator* _defaultPathEvaluator;
	NEExtensionProviderContext* _context;
	NSString* _deviceIdentifier;
	NSString* _appName;

}

@property (retain) NWPathEvaluator * defaultPathEvaluator;              //@synthesize defaultPathEvaluator=_defaultPathEvaluator - In the implementation block
@property (retain) NWPath * defaultPath;                                //@synthesize defaultPath=_defaultPath - In the implementation block
@property (retain) NEExtensionProviderContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) NSString * deviceIdentifier;                         //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain) NSString * appName;                                  //@synthesize appName=_appName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isRunningInProvider;
+(BOOL)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(id)init;
-(void)dealloc;
-(NEExtensionProviderContext *)context;
-(void)setContext:(NEExtensionProviderContext *)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)wake;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDefaultPath:(NWPath *)arg1 ;
-(NWPathEvaluator *)defaultPathEvaluator;
-(void)setDefaultPathEvaluator:(NWPathEvaluator *)arg1 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(BOOL)arg2 initialData:(id)arg3 enableMultipath:(BOOL)arg4 enableTLS:(BOOL)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 URL:(id)arg8 ;
-(void)setdefaultPathObserver:(id)arg1 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(BOOL)arg2 TLSParameters:(id)arg3 delegate:(id)arg4 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(BOOL)arg2 initialData:(id)arg3 enableMultipath:(BOOL)arg4 enableTLS:(BOOL)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 ;
-(id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2 ;
-(void)displayMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NWPath *)defaultPath;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
@end

