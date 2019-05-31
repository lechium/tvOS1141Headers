/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3StoreItemTrackData.h>

@class NSArray;

@interface MPStoreItemImportTrackData : ML3StoreItemTrackData {

	NSArray* _importElements;

}

@property (nonatomic,readonly) NSArray * importElements;              //@synthesize importElements=_importElements - In the implementation block
+(id)_importPropertiesDictFromImportMetadataDict:(id)arg1 ;
-(NSArray *)importElements;
-(id)initWithImportElements:(id)arg1 ;
-(id)parsedStoreItemsImportProperties;
-(id)_associatedElementForPropertyDict:(id)arg1 ;
@end

