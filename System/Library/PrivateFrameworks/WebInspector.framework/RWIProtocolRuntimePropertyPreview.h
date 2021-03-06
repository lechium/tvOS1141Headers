/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,retain) RWIProtocolRuntimeObjectPreview * valuePreview; 
@property (assign,nonatomic) BOOL internal; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)subtype;
-(void)setValue:(NSString *)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(NSString *)value;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(void)setValuePreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(RWIProtocolRuntimeObjectPreview *)valuePreview;
-(BOOL)internal;
-(void)setInternal:(BOOL)arg1 ;
@end

