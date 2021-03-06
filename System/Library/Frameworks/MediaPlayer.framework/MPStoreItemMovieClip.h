/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, MPStoreArtworkRequestToken, NSString;

@interface MPStoreItemMovieClip : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;                                      //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) MPStoreArtworkRequestToken * previewArtworkRequestToken; 
@property (nonatomic,copy,readonly) NSString * title; 
-(NSString *)title;
-(NSDictionary *)lookupDictionary;
-(id)initWithLookupDictionary:(id)arg1 ;
-(MPStoreArtworkRequestToken *)previewArtworkRequestToken;
-(NSArray *)assets;
@end

