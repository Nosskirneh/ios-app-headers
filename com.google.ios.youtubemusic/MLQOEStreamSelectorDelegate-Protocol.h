//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLFormat, MLQOEFormatData, NSError;

@protocol MLQOEStreamSelectorDelegate <NSObject>
- (void)streamSelectorRecordNonFatalError:(NSError *)arg1;
- (void)streamSelectorHasQOEFormatData:(MLQOEFormatData *)arg1;
- (void)streamSelectorDidSelectVideoFormat:(MLFormat *)arg1 audioFormat:(MLFormat *)arg2 selectionReason:(long long)arg3;
@end

