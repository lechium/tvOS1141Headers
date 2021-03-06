/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@protocol OKCollectionProxyDataSource;
@interface OKCollectionProxy : NSDictionary {

	id<OKCollectionProxyDataSource> _dataSource;
	unsigned long long _tag;

}

@property (assign,nonatomic) id<OKCollectionProxyDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long tag;                                  //@synthesize tag=_tag - In the implementation block
-(id)init;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)setDataSource:(id<OKCollectionProxyDataSource>)arg1 ;
-(void)dealloc;
-(id<OKCollectionProxyDataSource>)dataSource;
-(unsigned long long)tag;
-(void)setTag:(unsigned long long)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
@end

