//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNSignalData, NSDictionary, NSString;

@interface GADNAdData : NSObject
{
    GADNSignalData *_signalData;
    NSDictionary *_signals;
    NSString *_adString;
}

@property(readonly, copy, nonatomic) NSString *adString; // @synthesize adString=_adString;
@property(readonly, copy, nonatomic) NSDictionary *signals; // @synthesize signals=_signals;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSignalData:(id)arg1 adString:(id)arg2;

@end

