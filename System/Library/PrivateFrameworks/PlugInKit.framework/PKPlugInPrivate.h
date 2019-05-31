/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSDate, NSXPCConnection, NSDictionary;


@protocol PKPlugInPrivate <PKPlugIn>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDate * timestamp; 
@property (readonly) NSXPCConnection * pluginConnection; 
@property (retain) NSDictionary * extensionState; 
@property (retain) NSDictionary * environment; 
@required
-(NSDictionary *)extensionState;
-(void)setExtensionState:(id)arg1;
-(NSXPCConnection *)pluginConnection;
-(void)setEnvironment:(id)arg1;
-(NSDate *)timestamp;
-(NSDictionary *)environment;
-(NSUUID *)uuid;

@end
