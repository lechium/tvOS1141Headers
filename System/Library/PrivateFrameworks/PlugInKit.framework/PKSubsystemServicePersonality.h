/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSUUID, NSDictionary, NSXPCConnection;


@protocol PKSubsystemServicePersonality <NSObject>
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
@property (readonly) NSXPCConnection * connection; 
@required
-(NSString *)identifier;
-(NSURL *)url;
-(NSDictionary *)bundleInfoDictionary;
-(NSString *)version;
-(NSUUID *)uuid;
-(NSXPCConnection *)connection;
-(NSDictionary *)plugInDictionary;

@end
