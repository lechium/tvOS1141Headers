/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSXPCInterface;


@protocol FMNSXPCConnectionConfigurable <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) NSXPCInterface * remoteInterface; 
@property (nonatomic,readonly) NSXPCInterface * exportedInterface; 
@property (nonatomic,readonly) BOOL machService; 
@required
-(BOOL)machService;
-(unsigned long long)options;
-(NSXPCInterface *)exportedInterface;
-(NSString *)serviceName;
-(NSXPCInterface *)remoteInterface;

@end
