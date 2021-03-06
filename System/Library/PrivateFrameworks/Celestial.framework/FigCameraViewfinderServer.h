/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, NSString;

@interface FigCameraViewfinderServer : NSObject <NSXPCListenerDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	NSXPCListener* _serviceListener;
	NSMutableArray* _connections;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)start;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(id)_remoteViewfinderForLocalViewfinder:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

