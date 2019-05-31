/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/FlexSongProtocol.h>

@class UIImage, NSString, NSSet, NSArray;

@interface FlexSongProxy : NSObject <FlexSongProtocol> {

	BOOL _hidden;
	BOOL _recalled;
	UIImage* _cachedArtwork;
	long long _metadataVersion;
	NSString* _uid;
	NSString* _songName;
	NSString* _artistName;
	NSSet* _tagIDs;
	NSSet* _keywords;
	NSArray* _assets;
	NSString* _audioEncoderPresetName;

}

@property (nonatomic,readonly) long long metadataVersion;                      //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                 //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * songName;                            //@synthesize songName=_songName - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                          //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSSet * tagIDs;                                 //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,readonly) NSSet * keywords;                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                                    //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) BOOL recalled;                                  //@synthesize recalled=_recalled - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) UIImage * artwork;                              //@synthesize cachedArtwork=_cachedArtwork - In the implementation block
@property (nonatomic,readonly) NSString * audioEncoderPresetName;              //@synthesize audioEncoderPresetName=_audioEncoderPresetName - In the implementation block
-(UIImage *)artwork;
-(long long)sampleRate;
-(NSString *)uid;
-(BOOL)hidden;
-(NSSet *)keywords;
-(NSString *)artistName;
-(long long)metadataVersion;
-(NSArray *)assets;
-(BOOL)canPlay;
-(NSString *)songName;
-(id)assetWithID:(id)arg1 ;
-(NSSet *)tagIDs;
-(BOOL)recalled;
-(NSString *)audioEncoderPresetName;
-(void)updateAssets:(id)arg1 ;
-(SCD_Struct_TV2)naturalDuration;
-(id)renditionForDuration:(SCD_Struct_TV2)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 testingContext:(id)arg4 ;
-(id)customOptions;
-(id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(BOOL)arg6 recalled:(BOOL)arg7 assets:(id)arg8 audioEncoderPresetName:(id)arg9 metadataVersion:(long long)arg10 ;
-(id)_loadArtworkImage;
@end

