/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UINibKeyValuePair : NSObject {

	id object;
	NSString* keyPath;
	id value;

}

@property (nonatomic,readonly) id object; 
@property (nonatomic,copy,readonly) NSString * keyPath; 
@property (nonatomic,readonly) id value; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(NSString *)keyPath;
-(id)value;
-(void)applyForSimulator;
-(void)apply;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 ;
@end

