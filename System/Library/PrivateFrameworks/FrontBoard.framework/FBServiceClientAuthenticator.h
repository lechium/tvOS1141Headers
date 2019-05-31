/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding> {

	NSString* _entitlement;
	unsigned long long _credentials;

}

@property (nonatomic,copy,readonly) NSString * entitlement;                 //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,readonly) unsigned long long credentials;              //@synthesize credentials=_credentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSystemClientAuthenticator;
+(BOOL)validateAuditToken:(id)arg1 error:(out id*)arg2 ;
+(id)_errorForCode:(long long)arg1 process:(id)arg2 failedEntitlement:(id)arg3 ;
+(id)sharedUIAppClientAuthenticator;
+(id)sharedForegroundUIAppClientAuthenticator;
+(BOOL)authenticateAuditToken:(id)arg1 forEntitlement:(id)arg2 error:(out id*)arg3 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)credentials;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithEntitlement:(id)arg1 ;
-(BOOL)authenticateClient:(id)arg1 error:(out id*)arg2 ;
-(BOOL)authenticateClient:(id)arg1 ;
-(NSString *)entitlement;
-(id)initWithCredentials:(unsigned long long)arg1 ;
-(id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2 ;
-(BOOL)authenticateConnection:(id)arg1 error:(out id*)arg2 ;
-(BOOL)authenticateAuditToken:(id)arg1 error:(out id*)arg2 ;
-(BOOL)authenticateProcess:(id)arg1 error:(out id*)arg2 ;
-(int)_authenticateConnection:(id)arg1 forEntitlement:(id)arg2 error:(out id*)arg3 withResult:(/*^block*/id)arg4 ;
-(int)_authenticateProcessHandle:(id)arg1 entitlement:(id)arg2 error:(out id*)arg3 withResult:(/*^block*/id)arg4 ;
-(int)authenticateAuditToken:(SCD_Struct_FB10*)arg1 forEntitlement:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(int)authenticateConnection:(id)arg1 forEntitlement:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(int)authenticateConnection:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(BOOL)authenticateAuditToken:(id)arg1 ;
-(BOOL)authenticateConnection:(id)arg1 ;
-(BOOL)authenticateProcess:(id)arg1 ;
-(int)authenticateAuditToken:(SCD_Struct_FB10*)arg1 withResult:(/*^block*/id)arg2 ;
-(int)authenticateClient:(id)arg1 withResult:(/*^block*/id)arg2 ;
@end

