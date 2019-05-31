/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ServiceProductPage <NSObject>
@required
-(void)setClientIdentifier:(id)arg1;
-(void)setAffiliateIdentifier:(id)arg1;
-(void)setCancelButtonTitle:(id)arg1;
-(void)setShowsStoreButton:(BOOL)arg1;
-(void)setRightBarButtonTitle:(id)arg1;
-(void)setShowsRightBarButton:(BOOL)arg1;
-(void)setPromptString:(id)arg1;
-(void)setAskToBuy:(BOOL)arg1;
-(void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;
-(void)finishImmediately;
-(void)loadProductWithPageDictionary:(id)arg1;
-(void)loadProductWithRequest:(id)arg1;
-(void)loadProductWithURL:(id)arg1;
-(void)setAdditionalBuyParameters:(id)arg1;
-(void)finishStarRatingPromptWithRating:(id)arg1;
-(void)setProductPageStyle:(id)arg1;
-(void)setScriptContextDictionary:(id)arg1;
-(void)setPreview:(id)arg1;

@end

