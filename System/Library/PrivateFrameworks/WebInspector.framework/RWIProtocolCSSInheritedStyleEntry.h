/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyle;

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * matchedCSSRules; 
@property (nonatomic,retain) RWIProtocolCSSStyle * inlineStyle; 
-(void)setMatchedCSSRules:(NSArray *)arg1 ;
-(id)initWithMatchedCSSRules:(id)arg1 ;
-(void)setInlineStyle:(RWIProtocolCSSStyle *)arg1 ;
-(RWIProtocolCSSStyle *)inlineStyle;
-(NSArray *)matchedCSSRules;
@end

