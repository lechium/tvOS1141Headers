/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	int _netrbState;
	int _netrbReason;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)readNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)getNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)sendStateUpdate;
@end
