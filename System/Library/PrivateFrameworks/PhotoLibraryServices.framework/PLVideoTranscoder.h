/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLVideoTranscoder : NSObject
+(id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(SCD_Struct_PL26)arg3 endTime:(SCD_Struct_PL26)arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
+(void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(id)exportPresetsCompatibleWithVideoAtURL:(id)arg1 ;
@end

