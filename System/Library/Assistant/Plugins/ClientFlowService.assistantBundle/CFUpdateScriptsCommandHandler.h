/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFClientFlowUpdateScriptsCommand.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface CFUpdateScriptsCommandHandler : SACFClientFlowUpdateScriptsCommand <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateScriptCacheForScript:(id)arg1 clientScripter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateScriptsWithClientScripter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end
