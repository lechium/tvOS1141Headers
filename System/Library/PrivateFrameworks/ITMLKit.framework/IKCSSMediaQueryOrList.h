/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class NSMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {

	NSMutableArray* _queryList;

}
-(id)init;
-(unsigned long long)count;
-(id)description;
-(id)expressionAsString;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(id)subQueryList;
-(void)addSubQueryList:(id)arg1 ;
-(BOOL)evaluate;
@end

