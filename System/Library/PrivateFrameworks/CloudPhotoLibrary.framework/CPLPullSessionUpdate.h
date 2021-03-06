/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate {

	CPLChangeBatch* _clientBatch;
	CPLChangeBatch* _cloudBatch;

}

@property (nonatomic,readonly) CPLChangeBatch * clientBatch;              //@synthesize clientBatch=_clientBatch - In the implementation block
@property (nonatomic,readonly) CPLChangeBatch * cloudBatch;               //@synthesize cloudBatch=_cloudBatch - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(id)initWithStore:(id)arg1 expandedClientBatch:(id)arg2 expandedCloudBatch:(id)arg3 ;
-(CPLChangeBatch *)clientBatch;
-(CPLChangeBatch *)cloudBatch;
-(id)statusDescription;
@end

