/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelPlaybackPositionBuilder, MPStoreModelMovieMediaClipBuilder, MPStoreModelStoreAssetBuilder, MPPropertySet;

@interface MPStoreModelMovieBuilder : MPStoreModelObjectBuilder {

	MPStoreModelPlaybackPositionBuilder* _playbackPositionBuilder;
	MPStoreModelMovieMediaClipBuilder* _mediaClipBuilder;
	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	MPPropertySet* _storeAssetProperties;
	SCD_Struct_MP71 _requestedMovieProperties;

}
+(id)allSupportedProperties;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
@end
