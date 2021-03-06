/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString, NSDictionary, _MRNowPlayingPlayerPathProtobuf;

@interface MRNotificationMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * notification; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(NSString *)notification;
-(NSDictionary *)userInfo;
-(unsigned long long)type;
-(id)initWithNotification:(id)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
@end

