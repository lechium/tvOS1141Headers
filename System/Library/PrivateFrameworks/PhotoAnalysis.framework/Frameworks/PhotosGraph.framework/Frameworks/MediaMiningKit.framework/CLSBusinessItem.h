/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, CLCircularRegion, NSArray;

@interface CLSBusinessItem : NSObject <NSCoding> {

	BOOL _cached;
	NSString* _name;
	CLCircularRegion* _region;
	NSArray* _categories;
	unsigned long long _muid;

}

@property (assign,nonatomic) BOOL cached;                            //@synthesize cached=_cached - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSArray * categories;                   //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                //@synthesize muid=_muid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)itemWithName:(id)arg1 region:(id)arg2 categories:(id)arg3 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)categories;
-(CLCircularRegion *)region;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setCached:(BOOL)arg1 ;
-(BOOL)cached;
-(id)initWithName:(id)arg1 region:(id)arg2 categories:(id)arg3 ;
@end

