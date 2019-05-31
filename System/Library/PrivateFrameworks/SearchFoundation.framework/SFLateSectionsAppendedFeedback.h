/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SFLateSectionsAppendedFeedback : SFFeedback <NSCopying> {

	NSArray* _sections;

}

@property (nonatomic,copy) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithSections:(id)arg1 ;
@end
