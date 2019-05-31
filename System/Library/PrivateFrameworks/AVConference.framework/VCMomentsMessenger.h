/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMomentsMessenger <NSObject>
@property (nonatomic,readonly) unsigned capabilities; 
@required
-(void)cleanupActiveRequests;
-(void)setMomentsDelegate:(id)arg1;
-(BOOL)processClientRequest:(id)arg1 error:(id*)arg2;
-(void)registerClient;
-(void)deregisterClient;
-(unsigned)capabilities;

@end
