/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSString, NSValueTransformer;

@interface TVHKMediaEntitiesToGroupsValueTransformer : NSValueTransformer {

	NSString* _identifierKeyPath;
	NSValueTransformer* _identifierTitleTransformer;
	/*^block*/id _groupsSortComparator;

}

@property (nonatomic,copy) NSString * identifierKeyPath;                                   //@synthesize identifierKeyPath=_identifierKeyPath - In the implementation block
@property (nonatomic,retain) NSValueTransformer * identifierTitleTransformer;              //@synthesize identifierTitleTransformer=_identifierTitleTransformer - In the implementation block
@property (nonatomic,copy) id groupsSortComparator;                                        //@synthesize groupsSortComparator=_groupsSortComparator - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)initWithIdentifierKeyPath:(id)arg1 ;
-(void)setIdentifierTitleTransformer:(NSValueTransformer *)arg1 ;
-(void)setGroupsSortComparator:(id)arg1 ;
-(NSString *)identifierKeyPath;
-(NSValueTransformer *)identifierTitleTransformer;
-(id)groupsSortComparator;
-(void)setIdentifierKeyPath:(NSString *)arg1 ;
@end
