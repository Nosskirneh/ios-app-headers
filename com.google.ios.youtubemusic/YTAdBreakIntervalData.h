//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCPromise;
@protocol YTInstreamAdBreak;

@interface YTAdBreakIntervalData : NSObject
{
    id <YTInstreamAdBreak> _adBreak;
    GPCPromise *_adPromise;
}

@property(retain, nonatomic) GPCPromise *adPromise; // @synthesize adPromise=_adPromise;
@property(readonly, nonatomic) id <YTInstreamAdBreak> adBreak; // @synthesize adBreak=_adBreak;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAdBreak:(id)arg1;

@end

