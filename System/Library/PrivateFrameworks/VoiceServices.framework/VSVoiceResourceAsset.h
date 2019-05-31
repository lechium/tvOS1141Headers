/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary, NSURL;

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding> {

	float _rate;
	float _pitch;
	float _volume;
	NSArray* _languages;
	NSDictionary* _resourceList;
	NSURL* _searchPathURL;
	NSDictionary* _voiceConfig;
	NSDictionary* _vocalizerConfig;

}

@property (nonatomic,copy) NSDictionary * voiceConfig;                    //@synthesize voiceConfig=_voiceConfig - In the implementation block
@property (assign,nonatomic) float rate;                                  //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                 //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSDictionary * vocalizerConfig;              //@synthesize vocalizerConfig=_vocalizerConfig - In the implementation block
@property (nonatomic,copy) NSArray * languages;                           //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSDictionary * resourceList;                   //@synthesize resourceList=_resourceList - In the implementation block
@property (nonatomic,copy) NSURL * searchPathURL;                         //@synthesize searchPathURL=_searchPathURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPitch:(float)arg1 ;
-(float)pitch;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(id)key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setSearchPathURL:(NSURL *)arg1 ;
-(void)syncWithConfigFile:(id)arg1 ;
-(void)setResourceList:(NSDictionary *)arg1 ;
-(void)setVoiceConfig:(NSDictionary *)arg1 ;
-(NSDictionary *)vocalizerConfig;
-(NSURL *)searchPathURL;
-(NSDictionary *)voiceConfig;
-(id)defaultFootprintString;
-(NSDictionary *)resourceList;
-(void)setVocalizerConfig:(NSDictionary *)arg1 ;
-(id)defaultTypeString;
-(id)defaultVoice;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
@end

