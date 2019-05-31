/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _UILibArchiveStreamingExtractor : NSObject {

	NSString* _archivePath;
	NSArray* _extractedContentAbsolutePaths;

}

@property (nonatomic,readonly) NSString * archivePath;                               //@synthesize archivePath=_archivePath - In the implementation block
@property (nonatomic,readonly) NSArray * extractedContentAbsolutePaths;              //@synthesize extractedContentAbsolutePaths=_extractedContentAbsolutePaths - In the implementation block
+(id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1 ;
+(BOOL)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2 ;
-(NSString *)archivePath;
-(id)initForExtractingArchivePath:(id)arg1 ;
-(BOOL)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id*)arg3 ;
-(NSArray *)extractedContentAbsolutePaths;
@end

