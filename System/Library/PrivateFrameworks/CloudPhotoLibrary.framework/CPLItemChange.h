/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CPLItemChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	NSArray* _containerRelations;

}

@property (nonatomic,copy) NSArray * containerRelations;              //@synthesize containerRelations=_containerRelations - In the implementation block
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
-(id)init;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(id)containerDescription;
-(id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id*)arg2 ;
-(NSArray *)containerRelations;
-(void)setContainerRelations:(NSArray *)arg1 ;
@end

