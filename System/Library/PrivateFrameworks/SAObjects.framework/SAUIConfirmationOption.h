/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL active; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)confirmationOption;
+(id)confirmationOptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
@end

