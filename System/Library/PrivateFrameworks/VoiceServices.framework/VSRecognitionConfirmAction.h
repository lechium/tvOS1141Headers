/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {

	VSRecognitionAction* _confirmedAction;
	VSRecognitionAction* _deniedAction;
	struct {
		unsigned initializing : 1;
		unsigned confirmed : 1;
	}  _confirmFlags;

}
-(id)init;
-(void)dealloc;
-(int)completionType;
-(id)initWithModelIdentifier:(id)arg1 ;
-(void)_setConfirmed:(BOOL)arg1 ;
-(void)setConfirmedAction:(id)arg1 ;
-(id)confirmedAction;
-(void)setDeniedAction:(id)arg1 ;
-(id)deniedAction;
@end

