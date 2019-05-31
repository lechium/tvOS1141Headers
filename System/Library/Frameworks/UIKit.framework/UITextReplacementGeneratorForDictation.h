/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextReplacementGenerator.h>

@class NSTextAlternatives;

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator {

	NSTextAlternatives* _alternatives;

}

@property (nonatomic,readonly) NSTextAlternatives * alternatives;              //@synthesize alternatives=_alternatives - In the implementation block
-(id)replacements;
-(id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3 ;
-(NSTextAlternatives *)alternatives;
@end
