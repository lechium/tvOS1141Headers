/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {

	id _groupID;
	AVAssetTrack* _track;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(id)track;
-(id)_track;
-(id)_groupID;
-(BOOL)displaysNonForcedSubtitles;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionary;
-(id)locale;
-(id)group;
-(id)commonMetadata;
-(BOOL)isPlayable;
-(int)trackID;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)mediaSubTypes;
-(id)mediaType;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
@end

