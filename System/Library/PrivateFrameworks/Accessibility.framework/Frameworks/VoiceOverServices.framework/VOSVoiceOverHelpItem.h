/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VOSVoiceOverHelpItem : NSObject {

	NSString* _votCommand;

}

@property (nonatomic,retain) NSString * votCommand;                      //@synthesize votCommand=_votCommand - In the implementation block
@property (nonatomic,readonly) NSString * commandHelp; 
@property (nonatomic,readonly) NSString * gestureHelp; 
@property (nonatomic,readonly) NSString * keyboardShortcut; 
+(id)itemWithCommand:(id)arg1 ;
-(void)setVotCommand:(NSString *)arg1 ;
-(NSString *)votCommand;
-(NSString *)commandHelp;
-(NSString *)gestureHelp;
-(NSString *)keyboardShortcut;
@end

