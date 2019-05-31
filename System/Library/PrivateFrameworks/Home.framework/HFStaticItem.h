/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface HFStaticItem : HFItem <NSCopying> {

	NSDictionary* _staticResults;
	/*^block*/id _resultsBlock;

}

@property (nonatomic,retain) NSDictionary * staticResults;              //@synthesize staticResults=_staticResults - In the implementation block
@property (nonatomic,copy) id resultsBlock;                             //@synthesize resultsBlock=_resultsBlock - In the implementation block
+(id)emptyItem;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSDictionary *)staticResults;
-(id)resultsBlock;
-(id)initWithResultsBlock:(/*^block*/id)arg1 ;
-(void)setStaticResults:(NSDictionary *)arg1 ;
-(void)setResultsBlock:(id)arg1 ;
@end

