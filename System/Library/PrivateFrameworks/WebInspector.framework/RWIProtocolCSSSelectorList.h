/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * selectors; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(RWIProtocolCSSSourceRange *)range;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(void)setSelectors:(NSArray *)arg1 ;
-(id)initWithSelectors:(id)arg1 text:(id)arg2 ;
-(NSArray *)selectors;
@end

