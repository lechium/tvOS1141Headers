/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface HMHAPMetadataCategory : NSObject {

	NSNumber* _categoryNumber;
	NSString* _categoryType;
	NSString* _categoryDescription;

}

@property (nonatomic,retain) NSNumber * categoryNumber;                   //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (nonatomic,retain) NSString * categoryType;                     //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,retain) NSString * categoryDescription;              //@synthesize categoryDescription=_categoryDescription - In the implementation block
-(NSString *)categoryType;
-(void)setCategoryType:(NSString *)arg1 ;
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(NSString *)categoryDescription;
-(void)setCategoryDescription:(NSString *)arg1 ;
-(NSNumber *)categoryNumber;
@end

