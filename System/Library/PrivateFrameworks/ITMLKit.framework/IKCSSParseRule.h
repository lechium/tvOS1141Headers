/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSParseObject.h>

@class NSArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject {

	NSArray* _prelude;
	IKCSSParseBlock* _block;
	NSRange __endRange;

}

@property (assign,setter=_setEndRange:,nonatomic) NSRange _endRange;              //@synthesize _endRange=__endRange - In the implementation block
@property (nonatomic,retain) NSArray * prelude;                                   //@synthesize prelude=_prelude - In the implementation block
@property (nonatomic,retain) IKCSSParseBlock * block;                             //@synthesize block=_block - In the implementation block
-(id)init;
-(id)description;
-(NSRange)range;
-(NSArray *)prelude;
-(NSRange)_endRange;
-(void)setPrelude:(NSArray *)arg1 ;
-(void)_setEndRange:(NSRange)arg1 ;
-(void)setBlock:(IKCSSParseBlock *)arg1 ;
-(IKCSSParseBlock *)block;
@end
