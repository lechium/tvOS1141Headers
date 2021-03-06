/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriUICore/SiriUICore-Structs.h>
@class NSString;

@interface _SUICAtomRanged : NSObject {

	NSString* _replacementText;
	NSRange _editRange;

}

@property (assign,nonatomic) NSRange editRange;                       //@synthesize editRange=_editRange - In the implementation block
@property (nonatomic,retain) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setEditRange:(NSRange)arg1 ;
-(void)setReplacementText:(NSString *)arg1 ;
-(id)initWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(NSRange)editRange;
-(NSString *)replacementText;
-(BOOL)isEqualToEditScriptAtomRanged:(id)arg1 ;
@end

