/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPAVAuxiliaryDevice : NSObject {

	BOOL _playing;
	NSString* _uniqueID;
	NSString* _productName;
	NSString* _deviceName;
	NSString* _modelIdentifier;

}

@property (nonatomic,readonly) NSString * uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSString * productName;                     //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * modelIdentifier;                 //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing;              //@synthesize playing=_playing - In the implementation block
+(id)otherConnectedDevicesFromRouteDescription:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)productName;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isPlaying;
-(NSString *)deviceName;
-(NSString *)modelIdentifier;
@end

