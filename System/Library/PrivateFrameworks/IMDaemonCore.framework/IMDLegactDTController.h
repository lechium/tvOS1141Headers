/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface IMDLegactDTController : NSObject <IDSServiceDelegate> {

	IDSService* _dtService;

}

@property (nonatomic,retain) IDSService * dtService;                //@synthesize dtService=_dtService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_senderIDFromToken:(id)arg1 ;
-(IDSService *)dtService;
-(void)setDtService:(IDSService *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
@end

