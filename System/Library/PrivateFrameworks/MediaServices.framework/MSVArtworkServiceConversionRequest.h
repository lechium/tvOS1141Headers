/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest {

	NSURL* _sourceURL;
	NSURL* _destinationURL;
	long long _destinationFormat;
	double _destinationCompressionQuality;

}

@property (nonatomic,copy) NSURL * sourceURL;                                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSURL * destinationURL;                              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) long long destinationFormat;                       //@synthesize destinationFormat=_destinationFormat - In the implementation block
@property (assign,nonatomic) double destinationCompressionQuality;              //@synthesize destinationCompressionQuality=_destinationCompressionQuality - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(long long)destinationFormat;
-(double)destinationCompressionQuality;
-(long long)operationPriority;
-(void)setDestinationFormat:(long long)arg1 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3 ;
-(void)setDestinationCompressionQuality:(double)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(Class)operationClass;
@end

