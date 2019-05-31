/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
@property (nonatomic,readonly) float volume; 
-(unsigned long long)type;
-(id)initWithVolume:(float)arg1 ;
-(id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(NSString *)outputDeviceUID;
-(float)volume;
@end
