/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) NSString * endpointIdentifier; 
@property (nonatomic,readonly) NSString * outputDeviceIdentifier; 
-(unsigned long long)type;
-(NSString *)endpointIdentifier;
-(NSString *)outputDeviceIdentifier;
-(id)initWithVolume:(float)arg1 endpointIdentifier:(id)arg2 outputDeviceIdentifier:(id)arg3 ;
-(float)volume;
@end

