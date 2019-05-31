/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (nonatomic,readonly) unsigned errorCode; 
-(unsigned)errorCode;
-(unsigned long long)type;
-(id)initWithDeviceIDs:(id)arg1 errorCode:(unsigned)arg2 ;
-(NSArray *)deviceIDs;
@end

