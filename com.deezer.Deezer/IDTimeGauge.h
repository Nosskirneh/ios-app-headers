//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDGauge.h"

@class NSDate;
@protocol IDTimeGaugeDelegate;

@interface IDTimeGauge : IDGauge
{
    _Bool _timeDirty;
    id <IDTimeGaugeDelegate> _delegate;
    NSDate *_time;
}

@property(nonatomic) _Bool timeDirty; // @synthesize timeDirty=_timeDirty;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) __weak id <IDTimeGaugeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)flush:(int)arg1;
- (void)hmiDidStartForApplication:(id)arg1;
- (void)onGaugeChangeAction:(id)arg1;
- (void)onGaugeAction:(id)arg1;

@end

