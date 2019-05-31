/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPModelResponse, NSData, MPCModelGenericAVItemTimedMetadataStreamFields, MPSectionedCollection;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse {

	MPModelResponse* _personalizationResponse;
	NSData* _adamIDData;
	MPCModelGenericAVItemTimedMetadataStreamFields* _streamFields;
	MPSectionedCollection* _unpersonalizedContentDescriptors;

}

@property (nonatomic,copy) NSData * adamIDData;                                                          //@synthesize adamIDData=_adamIDData - In the implementation block
@property (nonatomic,retain) MPCModelGenericAVItemTimedMetadataStreamFields * streamFields;              //@synthesize streamFields=_streamFields - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * unpersonalizedContentDescriptors;                     //@synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors - In the implementation block
-(void)dealloc;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(void)setUnpersonalizedContentDescriptors:(MPSectionedCollection *)arg1 ;
-(void)_personalizationResponseDidInvalidateNotification:(id)arg1 ;
-(id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 ;
-(NSData *)adamIDData;
-(void)setAdamIDData:(NSData *)arg1 ;
-(MPCModelGenericAVItemTimedMetadataStreamFields *)streamFields;
-(void)setStreamFields:(MPCModelGenericAVItemTimedMetadataStreamFields *)arg1 ;
@end
