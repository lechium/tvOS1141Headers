/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPairedDeviceInternal, NSString;

@interface AVPairedDevice : NSObject {

	AVPairedDeviceInternal* _ivars;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * pairedDeviceID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSString * productName; 
+(id)pairedDevicesConnectedToOutputDevice:(id)arg1 ;
-(NSString *)pairedDeviceID;
-(id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(BOOL)arg4 productName:(id)arg5 ;
-(NSString *)productName;
-(void)dealloc;
-(NSString *)name;
-(BOOL)isPlaying;
-(NSString *)modelID;
-(id)ID;
@end

