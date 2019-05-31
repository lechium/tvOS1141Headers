/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPMediaPlayerOrderingTerm : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * mediaPlayerOrderingDirection; 
@property (assign,nonatomic) int mediaPlayerSearchProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaPlayerOrderingTerm;
+(id)mediaPlayerOrderingTermWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)mediaPlayerOrderingDirection;
-(void)setMediaPlayerOrderingDirection:(NSString *)arg1 ;
-(int)mediaPlayerSearchProperty;
-(void)setMediaPlayerSearchProperty:(int)arg1 ;
@end

