/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString, NSTextCheckingResult, NSMutableString;

@interface PRTypologyCorrection : NSObject {

	NSString* _misspelling;
	NSRange _misspelledRange;
	NSString* _stringToCheck;
	NSTextCheckingResult* _correctionResult;
	NSMutableString* _logs;
	double _openTime;
	double _closeTime;
	BOOL _isOpen;

}
+(id)openTypologyCorrectionWithString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 ;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 ;
-(void)addTypologyCorrectionLog:(id)arg1 ;
-(void)closeTypologyCorrectionWithResult:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)dictionaryRepresentation;
@end

