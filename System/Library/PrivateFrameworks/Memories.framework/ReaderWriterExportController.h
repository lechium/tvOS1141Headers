/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/ExportController.h>

@class NSError, PVVideoCompositing;

@interface ReaderWriterExportController : ExportController {

	float m_progress;
	int m_numberOfPasses;
	long long m_status;
	NSError* m_error;
	BOOL m_cancel;
	BOOL m_firstPassDone;
	PVVideoCompositing* m_customCompositor;

}
+(id)stringForStatus:(long long)arg1 ;
-(float)progress;
-(void)releaseMovieController;
-(void)continueExportAfterDelay;
-(void)cancelExport;
-(void)noteSessionProgressed:(float)arg1 ;
-(long long)mapAssetReaderStatusToExportStatus:(long long)arg1 ;
-(long long)mapAssetWriterStatusToExportStatus:(long long)arg1 ;
-(void)updateThemeImages;
-(void)_setupMovieController;
-(id)_compositionForExport;
-(id)fileTypeFromExtension;
-(id)videoCompressionSettings;
-(id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1 ;
-(id)audioCompressionSettings;
-(void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2 ;
-(void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(SCD_Struct_Mi11)arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)continueExportForNextPreset;
@end

