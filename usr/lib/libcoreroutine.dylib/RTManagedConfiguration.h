/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTManagedConfigurationObserver;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTManagedConfiguration : NSObject {

	id<RTManagedConfigurationObserver> _delegate;

}

@property (assign,nonatomic,__weak) id<RTManagedConfigurationObserver> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id<RTManagedConfigurationObserver>)delegate;
-(void)setDelegate:(id<RTManagedConfigurationObserver>)arg1 ;
-(BOOL)effectiveBoolValueForSetting:(id)arg1 ;
-(BOOL)isDiagnosticsAndUsageAllowed;
-(BOOL)isFindMyCarAllowed;
@end

