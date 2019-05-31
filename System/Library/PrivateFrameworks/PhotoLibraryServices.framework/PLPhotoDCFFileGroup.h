/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLPhotoDCFObject.h>

@class PLPhotoDCFDirectory, NSString, NSMutableSet, NSDate;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject {

	id _delegate;
	PLPhotoDCFDirectory* _directory;
	NSString* _directoryPath;
	NSString* _prebakedThumbnailPath;
	NSString* _videoFileExtension;
	NSMutableSet* _extensions;
	NSDate* _date;
	NSString* _preferredExtension;
	unsigned long long _hash;
	unsigned _hashComputed : 1;
	unsigned _addedExtensions : 1;
	unsigned _writeIsPending : 1;

}
+(id)allMetadataFileExtensions;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(BOOL)isValid;
-(id)date;
-(void)setDate:(id)arg1 ;
-(id)pathForVideoPreviewFile;
-(id)pathForFullSizeImage;
-(id)pathForVideoFile;
-(id)pathForPrebakedWildcatThumbnailsFile;
-(id)pathForTrimmedVideoFile;
-(id)pathForPrebakedLandscapeScrubberThumbnails;
-(id)pathForPrebakedPortraitScrubberThumbnails;
-(id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3 ;
-(void)addExtension:(id)arg1 ;
-(void)deleteFiles;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(id)pathForMetadata;
-(id)prebakedThumbnailFilename;
-(id)pathForGroupWithoutExtension;
-(BOOL)hasVideoFile;
-(void)addExtensionsFromMetadataDirectory;
-(id)thumbnailFilename;
-(id)prebakedLandscapeScrubberThumbnailsFilename;
-(id)prebakedPortraitScrubberThumbnailsFilename;
-(id)prebakedWildcatThumbnailsFilename;
-(id)lowResolutionFilename;
-(id)videoPreviewFilename;
-(id)imageSourceTypeHint;
-(void)deleteObsoleteFiles;
-(BOOL)hasObsoleteFiles;
-(void)forceAddExtensionsFromMetadataDirectory;
-(id)extensions;
-(id)pathForContainingDirectory;
-(id)pathForMetadataWithGroupName;
-(void)createMetadataDirectoryIfNecessary;
-(id)pathForThumbnailFile;
-(id)pathForPrebakedThumbnail;
-(id)pathForLowResolutionFile;
-(BOOL)hasThumbnail;
-(BOOL)hasPrebakedThumbnail;
-(BOOL)hasPrebakedLandscapeScrubberThumbnails;
-(BOOL)hasPrebakedPortraitScrubberThumbnails;
-(BOOL)hasPrebakedWildcatThumbnails;
-(BOOL)isWritePending;
-(id)directory;
@end

