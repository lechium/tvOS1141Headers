/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEAgentSessionDelegate
@required
-(id)initWithSession:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(CFBundleRef)arg4 applicationPath:(id)arg5;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleMessage:(id)arg1 withOuterMessage:(id)arg2;
-(void)handleCancel;

@end

