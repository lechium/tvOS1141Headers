/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSRule.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKCSSMediaQuery;

@interface IKCSSAtMediaRule : IKCSSRule <NSCopying> {

	IKCSSMediaQuery* _mediaQuery;
	NSRange _queryRange;

}

@property (assign,nonatomic) NSRange queryRange;              //@synthesize queryRange=_queryRange - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)queryRange;
-(void)setQueryRange:(NSRange)arg1 ;
-(id)initWithMediaQuery:(id)arg1 ;
-(id)mediaQuery;
@end

