/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <CertInfo/CertUIItemDetailsSummaryCell.h>

@class NSArray;

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell {

	NSArray* _details;

}

@property (nonatomic,retain) NSArray * details;              //@synthesize details=_details - In the implementation block
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCertificateTrust:(SecTrustRef)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(BOOL)arg3 ;
-(void)setDetailsWithCertificateTrust:(SecTrustRef)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(BOOL)arg3 ;
@end
