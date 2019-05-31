/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ICCameraDevice.h>

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {

	void* _ptpCameraProperties;

}

@property (readonly) PTPInitiator * initiator; 
-(void)finalize;
-(void)dealloc;
-(void)enumerateContent;
-(BOOL)eject;
-(id)initWithUSBLocationID:(unsigned)arg1 ;
-(id)initWithTCPIPInfo:(id)arg1 ;
-(void)addToEventHandlerQ:(id)arg1 ;
-(PTPInitiator *)initiator;
@end
