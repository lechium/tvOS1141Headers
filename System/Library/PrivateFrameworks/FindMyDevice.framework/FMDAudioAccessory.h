/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol FMDAudioAccessory <NSObject>
@property (nonatomic,readonly) NSString * audioRoutingIdentifier; 
@property (nonatomic,readonly) NSURL * audioURL; 
@property (nonatomic,readonly) BOOL playingSound; 
@required
-(NSString *)audioRoutingIdentifier;
-(BOOL)playingSound;
-(NSURL *)audioURL;

@end

