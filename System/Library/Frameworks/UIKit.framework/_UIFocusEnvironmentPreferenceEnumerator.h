/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFocusEnvironmentPreferenceEnumerationContextDelegate.h>

@class _UIDebugLogReport, NSString;

@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> {

	BOOL _allowsInferringPreferences;
	/*^block*/id _didVisitAllPreferencesForEnvironmentHandler;
	/*^block*/id _shouldInferPreferenceForEnvironmentHandler;
	_UIDebugLogReport* _debugReport;

}

@property (nonatomic,copy) id didVisitAllPreferencesForEnvironmentHandler;              //@synthesize didVisitAllPreferencesForEnvironmentHandler=_didVisitAllPreferencesForEnvironmentHandler - In the implementation block
@property (assign,nonatomic) BOOL allowsInferringPreferences;                           //@synthesize allowsInferringPreferences=_allowsInferringPreferences - In the implementation block
@property (nonatomic,copy) id shouldInferPreferenceForEnvironmentHandler;               //@synthesize shouldInferPreferenceForEnvironmentHandler=_shouldInferPreferenceForEnvironmentHandler - In the implementation block
@property (nonatomic,retain) _UIDebugLogReport * debugReport;                           //@synthesize debugReport=_debugReport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg1 ;
-(_UIDebugLogReport *)debugReport;
-(void)setDebugReport:(_UIDebugLogReport *)arg1 ;
-(void)enumeratePreferencesForEnvironment:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)didVisitAllPreferencesForEnvironmentHandler;
-(void)setDidVisitAllPreferencesForEnvironmentHandler:(id)arg1 ;
-(BOOL)allowsInferringPreferences;
-(void)setAllowsInferringPreferences:(BOOL)arg1 ;
-(id)shouldInferPreferenceForEnvironmentHandler;
-(void)setShouldInferPreferenceForEnvironmentHandler:(id)arg1 ;
@end

