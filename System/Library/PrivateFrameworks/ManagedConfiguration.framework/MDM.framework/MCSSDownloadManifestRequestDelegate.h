/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSDownloadManifestRequestDelegate.h>

@class SSDownloadManifestResponse, SSDownloadManifestRequest, NSString;

@interface MCSSDownloadManifestRequestDelegate : MCSSRequestDelegate <SSDownloadManifestRequestDelegate> {

	SSDownloadManifestResponse* _response;

}

@property (nonatomic,retain,readonly) SSDownloadManifestRequest * request; 
@property (assign,nonatomic) BOOL shouldHideUserPrompts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithURLRequest:(id)arg1 ;
-(void)downloadManifestRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(void)startCompletionBlock:(/*^block*/id)arg1 ;
@end

