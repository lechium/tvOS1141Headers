/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVConcreteEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, MRAVOutputContext, NSString, NSArray;

@interface MRAVLocalEndpoint : MRAVConcreteEndpoint <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRAVOutputContext* _outputContext;
	NSString* _uniqueIdentifier;
	NSArray* _outputDevices;

}

@property (nonatomic,copy) NSArray * outputDevices; 
+(BOOL)supportsSecureCoding;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)uniqueIdentifier;
-(void)_reloadOutputDevicesFromContext;
-(id)initWithOutputContext:(id)arg1 ;
-(id)_localizeOutputDevices:(id)arg1 ;
-(BOOL)isLocalEndpoint;
-(void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(NSArray *)outputDevices;
-(id)initWithOutputDevices:(id)arg1 ;
-(id)instanceIdentifier;
@end
