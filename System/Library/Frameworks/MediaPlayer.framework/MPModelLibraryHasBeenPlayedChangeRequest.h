/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibrary, MPModelObject;

@interface MPModelLibraryHasBeenPlayedChangeRequest : NSObject {

	BOOL _hasBeenPlayed;
	MPMediaLibrary* _mediaLibrary;
	MPModelObject* _model;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,readonly) MPModelObject * model;                    //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPlayed;                         //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
-(MPModelObject *)model;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(BOOL)hasBeenPlayed;
-(id)initWithModel:(id)arg1 ;
@end

