/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIDictationConnectionCorrectionInfo : NSObject {

	int _alternativeSelectionCount;
	int _characterModificationCount;
	NSString* _correctedText;

}

@property (assign,nonatomic) int alternativeSelectionCount;               //@synthesize alternativeSelectionCount=_alternativeSelectionCount - In the implementation block
@property (assign,nonatomic) int characterModificationCount;              //@synthesize characterModificationCount=_characterModificationCount - In the implementation block
@property (nonatomic,copy) NSString * correctedText;                      //@synthesize correctedText=_correctedText - In the implementation block
-(void)setAlternativeSelectionCount:(int)arg1 ;
-(void)setCharacterModificationCount:(int)arg1 ;
-(void)setCorrectedText:(NSString *)arg1 ;
-(int)alternativeSelectionCount;
-(int)characterModificationCount;
-(NSString *)correctedText;
@end

