/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHSettings.h>

@interface PHResourceDownloadSettings : PHSettings {

	BOOL _simulateDownload;
	BOOL _simulateDownloadFailure;

}

@property (assign,nonatomic) BOOL simulateDownload;                     //@synthesize simulateDownload=_simulateDownload - In the implementation block
@property (assign,nonatomic) BOOL simulateDownloadFailure;              //@synthesize simulateDownloadFailure=_simulateDownloadFailure - In the implementation block
+(id)settingsControllerModule;
+(id)sharedSettings;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)simulateDownload;
-(BOOL)simulateDownloadFailure;
-(void)setSimulateDownload:(BOOL)arg1 ;
-(void)setSimulateDownloadFailure:(BOOL)arg1 ;
@end
