//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ITMLibraryPlist : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSString *_directory;	// 16 = 0x10
}

+ (id)storeIdFromPlistEntry:(id)arg1;	// IMP=0x000000010023614c
+ (_Bool)isThinnedAssetFromPlistEntry:(id)arg1;	// IMP=0x00000001002360d8
+ (id)coverPathFromPlistEntry:(id)arg1;	// IMP=0x00000001002360bc
+ (id)isSampleFromPlistEntry:(id)arg1;	// IMP=0x00000001002360a0
+ (id)folderNameFromPlistEntry:(id)arg1;	// IMP=0x0000000100236060
+ (id)uniqueIdFromPlistEntry:(id)arg1;	// IMP=0x0000000100235fd8
+ (id)keyNameForCoverWritingMode;	// IMP=0x0000000100235fcc
+ (id)keyNameForScrollDirection;	// IMP=0x0000000100235fc0
+ (id)keyNameForPrimaryLanguage;	// IMP=0x0000000100235fb4
+ (id)keyNameForLanguages;	// IMP=0x0000000100235fa8
+ (id)keyNameForPageProgression;	// IMP=0x0000000100235f9c
+ (id)keyNameForHumanReadablePublicationVersion;	// IMP=0x0000000100235f90
+ (id)keyNameForPublicationVersion;	// IMP=0x0000000100235f84
+ (id)keyNameForSortTitle;	// IMP=0x0000000100235f78
+ (id)keyNameForSortAuthor;	// IMP=0x0000000100235f6c
+ (id)keyNameForDeletesArray;	// IMP=0x0000000100235f60
+ (id)keyNameForBooksArray;	// IMP=0x0000000100235f54
+ (id)keyNameForSubject;	// IMP=0x0000000100235f48
+ (id)keyNameForAssetType;	// IMP=0x0000000100235f3c
+ (id)keyNameForUniqueId;	// IMP=0x0000000100235f30
+ (id)keyNameForStoreId;	// IMP=0x0000000100235f24
+ (id)keyNameForPath;	// IMP=0x0000000100235f18
+ (id)keyNameForExplicitContent;	// IMP=0x0000000100235f0c
+ (id)keyNameForGenre;	// IMP=0x0000000100235f00
+ (id)keyNameForTitle;	// IMP=0x0000000100235ef4
+ (id)keyNameForAuthor;	// IMP=0x0000000100235ee8
+ (id)primaryLanguageFromPlistEntry:(id)arg1;	// IMP=0x0000000100235eb0
+ (id)languagesFromPlistEntry:(id)arg1;	// IMP=0x0000000100235e78
+ (id)scrollDirectionFromPlistEntry:(id)arg1;	// IMP=0x0000000100235e40
+ (id)coverWritingModeFromPlistEntry:(id)arg1;	// IMP=0x0000000100235e08
+ (id)languageFromPlistEntry:(id)arg1;	// IMP=0x0000000100235c28
+ (id)assetTypeFromPlistEntry:(id)arg1;	// IMP=0x0000000100235be8
+ (id)pageProgressionFromPlistEntry:(id)arg1;	// IMP=0x0000000100235ba8
+ (id)humanReadablePublicationVersionFromPlistEntry:(id)arg1;	// IMP=0x0000000100235b68
+ (id)publicationVersionFromPlistEntry:(id)arg1;	// IMP=0x0000000100235a9c
+ (id)extensionFromPlistEntry:(id)arg1;	// IMP=0x0000000100235a0c
+ (id)mimeTypeFromPlistEntry:(id)arg1;	// IMP=0x00000001002359f0
+ (id)feedURLFromPlistEntry:(id)arg1;	// IMP=0x00000001002359d4
+ (id)isItunesUFromPlistEntry:(id)arg1;	// IMP=0x00000001002359b8
+ (id)albumFromPlistEntry:(id)arg1;	// IMP=0x000000010023599c
+ (id)bookEpubIdFromPlistEntry:(id)arg1;	// IMP=0x0000000100235980
+ (id)persistentIDFromPlistEntry:(id)arg1;	// IMP=0x0000000100235964
+ (id)temporaryItemIdentifierFromPlistEntry:(id)arg1;	// IMP=0x0000000100235948
+ (id)isExplicitContentFromPlistEntry:(id)arg1;	// IMP=0x0000000100235908
+ (id)genreFromPlistEntry:(id)arg1;	// IMP=0x00000001002358c8
+ (id)sortTitleFromPlistEntry:(id)arg1;	// IMP=0x0000000100235888
+ (id)titleFromPlistEntry:(id)arg1;	// IMP=0x0000000100235848
+ (id)sortAuthorFromPlistEntry:(id)arg1;	// IMP=0x0000000100235808
+ (id)authorFromPlistEntry:(id)arg1;	// IMP=0x00000001002357c8
@property(retain, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)removeDeletedPaths:(id)arg1;	// IMP=0x0000000100236660
- (void)addDeletedPaths:(id)arg1;	// IMP=0x0000000100236394
- (_Bool)bumpModificationDate;	// IMP=0x000000010023629c
- (void)rewriteSidecarWithDeletes:(id)arg1;	// IMP=0x000000010023568c
- (_Bool)isPathInDirectory:(id)arg1;	// IMP=0x000000010023563c
- (id)contents;	// IMP=0x0000000100235018
- (id)unfilteredSidecarContents;	// IMP=0x0000000100234fe0
- (id)unfilteredContents;	// IMP=0x0000000100234fa8
- (id)_contents:(id)arg1;	// IMP=0x0000000100234e7c
- (id)calculateChecksum;	// IMP=0x0000000100234d68
@property(readonly, nonatomic) NSString *sidecarPath;
- (void)dealloc;	// IMP=0x0000000100234cbc
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2;	// IMP=0x0000000100234c40

@end

