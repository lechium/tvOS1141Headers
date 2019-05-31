/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyleId, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSStyle : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * cssProperties; 
@property (nonatomic,copy) NSArray * shorthandEntries; 
@property (nonatomic,retain) RWIProtocolCSSStyleId * styleId; 
@property (nonatomic,copy) NSString * cssText; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
@property (nonatomic,copy) NSString * width; 
@property (nonatomic,copy) NSString * height; 
-(NSString *)cssText;
-(NSString *)height;
-(RWIProtocolCSSSourceRange *)range;
-(void)setCssText:(NSString *)arg1 ;
-(NSString *)width;
-(void)setWidth:(NSString *)arg1 ;
-(void)setHeight:(NSString *)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(void)setShorthandEntries:(NSArray *)arg1 ;
-(id)initWithCssProperties:(id)arg1 shorthandEntries:(id)arg2 ;
-(NSArray *)shorthandEntries;
-(void)setCssProperties:(NSArray *)arg1 ;
-(RWIProtocolCSSStyleId *)styleId;
-(void)setStyleId:(RWIProtocolCSSStyleId *)arg1 ;
-(NSArray *)cssProperties;
@end

