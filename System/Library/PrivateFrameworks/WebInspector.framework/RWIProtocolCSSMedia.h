/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long source; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (assign,nonatomic) int sourceLine; 
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSource:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)source;
-(int)sourceLine;
-(id)initWithText:(id)arg1 source:(long long)arg2 ;
-(void)setSourceLine:(int)arg1 ;
@end
