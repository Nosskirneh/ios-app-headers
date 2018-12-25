//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol YTInstreamAd, YTInstreamAdBreak;

@interface YTTimingPlayerResponderEventAdData : NSObject
{
    NSString *_format;
    id <YTInstreamAd> _partialAd;
    id <YTInstreamAdBreak> _adBreak;
    NSError *_reason;
}

+ (id)adDataWithPartialAd:(id)arg1 adBreak:(id)arg2 reason:(id)arg3;
+ (id)adDataWithFormat:(id)arg1;
@property(readonly, nonatomic) NSError *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) id <YTInstreamAdBreak> adBreak; // @synthesize adBreak=_adBreak;
@property(readonly, nonatomic) id <YTInstreamAd> partialAd; // @synthesize partialAd=_partialAd;
@property(readonly, nonatomic) NSString *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (id)initWithFormat:(id)arg1 partialAd:(id)arg2 adBreak:(id)arg3 reason:(id)arg4;

@end

