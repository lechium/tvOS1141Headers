/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSDeviceDelegate, OSActivityStreamDelegate;
#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableSet, NSString, NSCompoundPredicate, OSLogDevice, NSMutableDictionary;

@interface OSActivityStream : NSObject {

	os_activity_stream_sRef _stream;
	NSMutableSet* _pids;
	NSMutableSet* _proc_names;
	NSString* _waitforProcessName;
	void* _deviceSearchSession;
	void* _deviceEventSession;
	BOOL _delegateStreamErrorLess;
	BOOL _delegateStreamWithError;
	BOOL _delegateHasDidFail;
	id<OSDeviceDelegate> _deviceDelegate;
	id<OSActivityStreamDelegate> _delegate;
	unsigned long long _options;
	unsigned long long _eventFilter;
	NSCompoundPredicate* _predicate;
	OSLogDevice* _device;
	NSMutableDictionary* _activityFilters;

}

@property (assign,nonatomic) unsigned long long options;                                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long eventFilter;                            //@synthesize eventFilter=_eventFilter - In the implementation block
@property (assign,nonatomic) unsigned long long events; 
@property (assign,nonatomic,__weak) id<OSActivityStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSCompoundPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic,__weak) id<OSDeviceDelegate> deviceDelegate;                //@synthesize deviceDelegate=_deviceDelegate - In the implementation block
@property (assign,nonatomic) OSLogDevice * device;                                      //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) NSMutableDictionary * activityFilters;                     //@synthesize activityFilters=_activityFilters - In the implementation block
-(id)init;
-(id<OSActivityStreamDelegate>)delegate;
-(void)setDelegate:(id<OSActivityStreamDelegate>)arg1 ;
-(void)dealloc;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)start;
-(void)stop;
-(unsigned long long)options;
-(void)setPredicate:(NSCompoundPredicate *)arg1 ;
-(NSCompoundPredicate *)predicate;
-(void)waitForProcessName:(id)arg1 ;
-(void)addProcessID:(int)arg1 ;
-(void)addProcessName:(id)arg1 ;
-(void)addFilterForActivity:(id)arg1 andBinary:(id)arg2 ;
-(int)maxProcs;
-(BOOL)streamEvent:(id)arg1 error:(id)arg2 ;
-(void)startRemote;
-(void)startLocal;
-(void)stopLocal;
-(void)stopRemote;
-(void)setDeviceDelegate:(id<OSDeviceDelegate>)arg1 ;
-(id)getInfoForDevice:(id)arg1 andKey:(id)arg2 ;
-(BOOL)establishTrust:(id)arg1 ;
-(id<OSDeviceDelegate>)deviceDelegate;
-(NSMutableDictionary *)activityFilters;
-(void)setActivityFilters:(NSMutableDictionary *)arg1 ;
-(unsigned long long)eventFilter;
-(void)setEventFilter:(unsigned long long)arg1 ;
-(OSLogDevice *)device;
-(unsigned long long)events;
-(void)setDevice:(OSLogDevice *)arg1 ;
-(id)initWithDevice:(void*)arg1 ;
-(void)setEvents:(unsigned long long)arg1 ;
@end

