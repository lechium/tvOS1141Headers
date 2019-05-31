/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPSectionedCollection;

@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying> {

	MPSectionedCollection* _radioStationTracks;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRadioStationTracks:(id)arg1 ;
@end
