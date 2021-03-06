/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class DeviceManager, NSString;

@interface ICDevice : NSObject {

	void* _deviceProperties;

}

@property (assign) DeviceManager * deviceManager; 
@property (copy) NSString * name; 
@property (copy) NSString * productKind; 
@property (copy) NSString * transportType; 
@property (copy) NSString * UUIDString; 
@property (assign) BOOL hasOpenSession; 
@property (assign) BOOL autoOpenSession; 
@property (assign) BOOL openSessionPending; 
@property (assign) BOOL closeSessionPending; 
@property (assign) int usbLocationID; 
@property (assign) int usbProductID; 
@property (assign) int usbVendorID; 
@property (assign) id<ICDeviceDelegate> delegate; 
@property (readonly) CGImageRef icon; 
-(void)finalize;
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
-(id)init;
-(id<ICDeviceDelegate>)delegate;
-(void)setDelegate:(id<ICDeviceDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)UUIDString;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGImageRef)icon;
-(void)setProductKind:(NSString *)arg1 ;
-(void)setUUIDString:(NSString *)arg1 ;
-(DeviceManager *)deviceManager;
-(void)setDeviceManager:(DeviceManager *)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(void)setUsbVendorID:(int)arg1 ;
-(BOOL)hasOpenSession;
-(void)setHasOpenSession:(BOOL)arg1 ;
-(BOOL)autoOpenSession;
-(void)setAutoOpenSession:(BOOL)arg1 ;
-(BOOL)openSessionPending;
-(void)setOpenSessionPending:(BOOL)arg1 ;
-(BOOL)closeSessionPending;
-(void)setCloseSessionPending:(BOOL)arg1 ;
-(void)requestCloseSession;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(int)usbVendorID;
-(NSString *)productKind;
-(void)requestOpenSession;
@end

