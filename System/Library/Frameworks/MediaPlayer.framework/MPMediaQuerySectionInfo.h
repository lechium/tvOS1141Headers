/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sections;
	NSArray* _sectionIndexTitles;
	BOOL _hasUnknownSection;

}

@property (nonatomic,copy) NSArray * sectionIndexTitles; 
@property (nonatomic,copy,readonly) NSArray * sections;               //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL hasUnknownSection;                  //@synthesize hasUnknownSection=_hasUnknownSection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)sectionIndexTitles;
-(NSArray *)sections;
-(unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1 ;
-(void)setSectionIndexTitles:(NSArray *)arg1 ;
-(BOOL)hasUnknownSection;
-(void)setHasUnknownSection:(BOOL)arg1 ;
@end

