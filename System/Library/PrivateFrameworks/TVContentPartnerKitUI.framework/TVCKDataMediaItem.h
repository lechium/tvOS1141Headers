/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class TVCKDataItem;

@interface TVCKDataMediaItem : TVPBaseMediaItem {

	TVCKDataItem* _dataItem;

}

@property (nonatomic,retain) TVCKDataItem * dataItem;              //@synthesize dataItem=_dataItem - In the implementation block
-(id)description;
-(void)setDataItem:(TVCKDataItem *)arg1 ;
-(id)initWithDataItem:(id)arg1 ;
-(TVCKDataItem *)dataItem;
-(id)_dataItemValueForProperty:(id)arg1 ;
-(BOOL)_supportsBookmarks;
-(BOOL)_supportsPlayCounts;
-(id)_propertyNameMappings;
-(id)_mediaTypeStringFromDataType:(id)arg1 ;
-(BOOL)_hasVideoContent;
-(id)mediaItemURL;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
@end

