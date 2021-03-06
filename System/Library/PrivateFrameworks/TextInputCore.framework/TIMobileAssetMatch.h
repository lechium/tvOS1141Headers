/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TIMobileAssetMatch : NSObject {

	NSArray* _types;
	NSArray* _inputModeLevels;
	NSArray* _regions;

}

@property (nonatomic,readonly) NSArray * types;                        //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) NSArray * inputModeLevels;              //@synthesize inputModeLevels=_inputModeLevels - In the implementation block
@property (nonatomic,readonly) NSArray * regions;                      //@synthesize regions=_regions - In the implementation block
+(id)knownAssetRegionAttributes;
+(id)mobileAssetMatchWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)types;
-(NSArray *)regions;
-(id)initWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3 ;
-(NSArray *)inputModeLevels;
@end

