//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SASBidderAdapterProtocol-Protocol.h"

@class NSString;

@interface SASBidderAdapter : NSObject <SASBidderAdapterProtocol>
{
    float _price;
    long long _creativeRenderingType;
    NSString *_adapterName;
    NSString *_winningSSPName;
    NSString *_winningCreativeID;
    NSString *_currency;
    NSString *_dealID;
}

@property(retain, nonatomic) NSString *dealID; // @synthesize dealID=_dealID;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic) float price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *winningCreativeID; // @synthesize winningCreativeID=_winningCreativeID;
@property(retain, nonatomic) NSString *winningSSPName; // @synthesize winningSSPName=_winningSSPName;
@property(retain, nonatomic) NSString *adapterName; // @synthesize adapterName=_adapterName;
@property(nonatomic) long long creativeRenderingType; // @synthesize creativeRenderingType=_creativeRenderingType;
- (void).cxx_destruct;
- (void)primarySDKLostBidCompetition;
- (void)primarySDKClickedBidderAd;
- (void)primarySDKDisplayedBidderAd;
- (id)bidderWinningAdMarkup;
- (id)initWithWinningSSPName:(id)arg1 winningCreativeID:(id)arg2 price:(float)arg3 currency:(id)arg4 dealID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

