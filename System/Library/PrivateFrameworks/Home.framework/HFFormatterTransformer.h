/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSFormatter;

@interface HFFormatterTransformer : NSFormatter {

	NSFormatter* _sourceFormatter;
	/*^block*/id _transformBlock;

}

@property (nonatomic,copy) NSFormatter * sourceFormatter;              //@synthesize sourceFormatter=_sourceFormatter - In the implementation block
@property (nonatomic,copy) id transformBlock;                          //@synthesize transformBlock=_transformBlock - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setSourceFormatter:(NSFormatter *)arg1 ;
-(void)setTransformBlock:(id)arg1 ;
-(id)initWithSourceFormatter:(id)arg1 transformBlock:(/*^block*/id)arg2 ;
-(NSFormatter *)sourceFormatter;
-(id)transformBlock;
@end

