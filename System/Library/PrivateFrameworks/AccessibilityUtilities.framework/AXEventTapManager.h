/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface AXEventTapManager : NSObject {

	NSMutableArray* _eventTaps;
	NSMutableArray* _addedEventTapPairs;
	NSMutableSet* _removedEventTapIdentifiers;
	BOOL _isEnumeratingEventTaps;
	BOOL _shouldReorderEventTaps;
	/*^block*/id _installationGSCallback;
	/*^block*/id _installationHIDCallback;
	NSRecursiveLock* _eventTapLock;
	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	/*^block*/id _installationEventRepPost;

}

@property (nonatomic,copy) id installationGSCallback;                //@synthesize installationGSCallback=_installationGSCallback - In the implementation block
@property (nonatomic,copy) id installationHIDCallback;               //@synthesize installationHIDCallback=_installationHIDCallback - In the implementation block
@property (nonatomic,copy) id installationEventRepPost;              //@synthesize installationEventRepPost=_installationEventRepPost - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)_enumerateEventTapPairsUsingBlock:(/*^block*/id)arg1 ;
-(void)_reorderEventTaps;
-(void)_setGSEventTapCallback:(void*)arg1 ;
-(void)_setHIDEventTapCallback:(void*)arg1 ;
-(void)sendHIDSystemEvent:(id)arg1 repostCreatorHIDEvent:(BOOL)arg2 senderID:(unsigned long long)arg3 ;
-(id)_copyCurrentEventTapPairs;
-(void)_setEventTapPriority:(id)arg1 priority:(int)arg2 ;
-(void)_installHIDFilter:(id)arg1 skipDeviceMatching:(BOOL)arg2 wantsDigitizerEvents:(BOOL)arg3 wantsKeyboardEvents:(BOOL)arg4 wantsATVRemoteEvents:(BOOL)arg5 wantsLisaEvents:(BOOL)arg6 wantsMouseEvents:(BOOL)arg7 ;
-(void)_installSystemEventTap:(id)arg1 ;
-(id)installEventTap:(/*^block*/id)arg1 identifier:(id)arg2 type:(int)arg3 skipDeviceMatching:(BOOL)arg4 wantsDigitizerEvents:(BOOL)arg5 wantsKeyboardEvents:(BOOL)arg6 wantsATVRemoteEvents:(BOOL)arg7 wantsLisaEvents:(BOOL)arg8 wantsMouseEvents:(BOOL)arg9 ;
-(id)_installEventTap:(/*^block*/id)arg1 identifier:(id)arg2 type:(int)arg3 skipDeviceMatching:(BOOL)arg4 wantsDigitizerEvents:(BOOL)arg5 wantsKeyboardEvents:(BOOL)arg6 wantsATVRemoteEvents:(BOOL)arg7 wantsLisaEvents:(BOOL)arg8 wantsMouseEvents:(BOOL)arg9 matchingServiceHandler:(/*^block*/id)arg10 ;
-(void)_installEventTap:(id)arg1 skipDeviceMatching:(BOOL)arg2 wantsDigitizerEvents:(BOOL)arg3 wantsKeyboardEvents:(BOOL)arg4 wantsATVRemoteEvents:(BOOL)arg5 wantsLisaEvents:(BOOL)arg6 wantsMouseEvents:(BOOL)arg7 ;
-(void)_removeHIDEventTapFilter:(id)arg1 ;
-(void)_runMatchingServiceHandler:(id)arg1 ;
-(void)sendHIDSystemEvent:(id)arg1 senderID:(unsigned long long)arg2 ;
-(void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(BOOL)arg3 namedTaps:(id)arg4 options:(unsigned long long)arg5 ;
-(void)_handleTestIOHIDEvent:(IOHIDEventRef)arg1 ;
-(BOOL)_processHIDEvent:(IOHIDEventRef)arg1 taskPort:(unsigned)arg2 bundleId:(id)arg3 ;
-(BOOL)_processGSEvent:(SCD_Struct_AX8*)arg1 ;
-(void)setEventTapPriority:(id)arg1 priority:(int)arg2 ;
-(void)_passivelyPeakAtHIDEventWithTarget:(void*)arg1 tapPair:(id)arg2 sender:(void*)arg3 event:(IOHIDEventRef)arg4 axEventRep:(id)arg5 didHandle:(BOOL)arg6 ;
-(id)installEventTap:(/*^block*/id)arg1 identifier:(id)arg2 type:(int)arg3 ;
-(id)installKeyboardEventTap:(/*^block*/id)arg1 identifier:(id)arg2 matchingServiceHandler:(/*^block*/id)arg3 ;
-(void)removeEventTap:(id)arg1 ;
-(void)runMatchingServiceHandlerForEventTap:(id)arg1 ;
-(id)installationGSCallback;
-(void)setInstallationGSCallback:(id)arg1 ;
-(id)installationHIDCallback;
-(void)setInstallationHIDCallback:(id)arg1 ;
-(id)installationEventRepPost;
-(void)setInstallationEventRepPost:(id)arg1 ;
@end

