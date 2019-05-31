/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface MSASEnqueuedCommand : NSObject <NSCoding> {

	NSString* _command;
	NSDictionary* _variantParam;
	NSDictionary* _invariantParam;

}

@property (nonatomic,copy) NSString * command;                           //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSDictionary * variantParam;                //@synthesize variantParam=_variantParam - In the implementation block
@property (nonatomic,retain) NSDictionary * invariantParam;              //@synthesize invariantParam=_invariantParam - In the implementation block
+(id)commandwithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
+(id)command;
-(void)setCommand:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)invariantParam;
-(NSDictionary *)variantParam;
-(BOOL)canBeGroupedWithCommand:(id)arg1 ;
-(id)initWithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(void)setVariantParam:(NSDictionary *)arg1 ;
-(void)setInvariantParam:(NSDictionary *)arg1 ;
-(NSString *)command;
@end

