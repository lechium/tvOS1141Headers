/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNVCardSelectorMap : NSObject {

	NSMutableArray* _strings;
	NSMutableArray* _selectors;

}
-(id)init;
-(void)setSelector:(SEL)arg1 forString:(id)arg2 ;
-(SEL)selectorForString:(id)arg1 ;
@end

