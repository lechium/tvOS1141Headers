/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUIFamilySetupPrompterDelegate;
@interface AAUIFamilySetupPrompter : NSObject {

	id<AAUIFamilySetupPrompterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupPrompterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AAUIFamilySetupPrompterDelegate>)delegate;
-(void)setDelegate:(id<AAUIFamilySetupPrompterDelegate>)arg1 ;
-(id)initWithiTunesAccount:(id)arg1 ;
-(void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(BOOL)arg2 ;
@end
