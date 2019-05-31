/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAlertControllerSystemProvidedPresentationDelegate <NSObject>
@optional
-(void)_willBeginSystemProvidedDismissalOfAlertController:(id)arg1;
-(void)_didBeginSystemProvidedDismissalOfAlertController:(id)arg1;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;
-(void)_willPerformSystemProvidedPresentationOfAlertController:(id)arg1;
-(BOOL)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2;
-(void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1;
-(void)_didEndSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(BOOL)arg2;

@required
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;

@end

